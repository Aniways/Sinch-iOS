#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import <Sinch/Sinch.h>
#import "GCPlaceholderTextView.h"
#import <Aniways/AWIconOnDemandButton.h>

@interface MainViewController : UIViewController <SINMessageClientDelegate, UITableViewDataSource, UITableViewDelegate>

@property (weak, nonatomic) IBOutlet UITableView *messageView;
@property (weak, nonatomic) IBOutlet UITextField *activeField;
@property (weak, nonatomic) IBOutlet UITextField *destination;
@property (weak, nonatomic) IBOutlet GCPlaceholderTextView *message;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *bottomConstraint;
@property (weak, nonatomic) id<SINClient> client;
@property (strong, nonatomic) IBOutlet AWIconOnDemandButton *smileyButton;
- (IBAction)didPressOnSmileyButton:(id)sender;

- (IBAction)sendButtonPressed:(id)sender;

@end
