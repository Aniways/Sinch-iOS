#import <UIKit/UIKit.h>
#import <Aniways/AWTextViewLabel.h>

@interface MessageTableViewCell : UITableViewCell

@property (nonatomic, readwrite, strong) IBOutlet AWTextViewLabel *message;
@property (nonatomic, readwrite, strong) IBOutlet UILabel *nameLabel;

@end
