/* PrefsController */

#import <Cocoa/Cocoa.h>

@interface PrefsController : NSObject
{
	NSToolbar *toolbar;
	NSMutableDictionary *items;
	
    IBOutlet id advancedView;
    IBOutlet id appleRemoteButton;
#ifdef ENABLE_UPDATES
    IBOutlet id checkForUpdatesButton;
#endif
    IBOutlet id coloredIconsButton;
    IBOutlet id deauthenticateButton;
    IBOutlet id easyWakeDefaultButton;
    IBOutlet id easyWakeDurationLabel;
    IBOutlet id easyWakeDurationSlider;
    IBOutlet id easyWakeView;
    IBOutlet id generalView;
    IBOutlet id keyboardType;
    IBOutlet id killDurationLabel;
    IBOutlet id killDurationSlider;
    IBOutlet id loginButton;
    IBOutlet id maxVolumeLabel;
    IBOutlet id maxVolumeSlider;
    IBOutlet id minVolumeLabel;
    IBOutlet id minVolumeSlider;
    IBOutlet id prefVolumeLabel;
    IBOutlet id prefVolumeSlider;
    IBOutlet id snoozeDurationLabel;
    IBOutlet id snoozeDurationSlider;
#ifdef ENABLE_UPDATES
    IBOutlet id softwareUpdateView;
    IBOutlet id updateIntervalPopup;
#endif
    IBOutlet id wakeFromSleepButton;
    IBOutlet NSWindow *window;
}
- (IBAction)deauthenticate:(id)sender;
- (IBAction)setEasyWakeDuration:(id)sender;
- (IBAction)setKillDuration:(id)sender;
- (IBAction)setMaxVolume:(id)sender;
- (IBAction)setMinVolume:(id)sender;
- (IBAction)setPrefVolume:(id)sender;
- (IBAction)setSnoozeDuration:(id)sender;
#ifdef ENABLE_UPDATES
- (IBAction)setUpdateInterval:(id)sender;
- (IBAction)toggleCheckForUpdates:(id)sender;
#endif
- (IBAction)toggleAppleRemote:(id)sender;
- (IBAction)toggleColoredIcons:(id)sender;
- (IBAction)toggleEasyWakeDefault:(id)sender;
- (IBAction)toggleKeyboard:(id)sender;
- (IBAction)toggleLogin:(id)sender;
- (IBAction)toggleWakeFromSleep:(id)sender;
@end
