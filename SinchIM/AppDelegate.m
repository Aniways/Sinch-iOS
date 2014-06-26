#import "AppDelegate.h"
#import "AppDelegate+UI.h"
#import <Aniways/AWInit.h>

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    [AWInit initAniwaysWithAppId:@"SinchIM-Demo"];
  [self addSplashView];
  return YES;
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
  [self dismissSplashViewIfNecessary];
}

#pragma mark -

- (id<SINClient>)client {
  return _client;
}

- (void)initSinchClientWithUserId:(NSString *)userId {
  if (!_client) {
    _client = [Sinch clientWithApplicationKey:@"44254807-a837-4995-a521-6b03c5a5a7d4"
                            applicationSecret:@"2aMgD3DBrUGH0GKnNK1BFg=="
                              environmentHost:@"sandbox.sinch.com"
                                       userId:userId];

    _client.delegate = self;

    [_client setSupportMessaging:YES];

    [_client start];
    [_client startListeningOnActiveConnection];
  }
}

#pragma mark - SINClientDelegate

- (void)clientDidStart:(id<SINClient>)client {
  NSLog(@"Sinch client started successfully (version: %@)", [Sinch version]);
}

- (void)clientDidStop:(id<SINClient>)client {
  NSLog(@"Sinch client stopped");
}

- (void)clientDidFail:(id<SINClient>)client error:(NSError *)error {
  NSLog(@"Error: %@", [error localizedDescription]);
}

- (void)client:(id<SINClient>)client
    logMessage:(NSString *)message
          area:(NSString *)area
      severity:(SINLogSeverity)severity
     timestamp:(NSDate *)timestamp {

  if (severity == SINLogSeverityCritical) {
    NSLog(@"%@", message);
  }
}

@end
