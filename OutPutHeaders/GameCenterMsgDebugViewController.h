/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIViewController.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UIAlertViewDelegate.h"

@class NSMutableArray, NSArray, NSString, MMTableView;

@interface GameCenterMsgDebugViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate> {
	int _selectedSection;
	MMTableView* _tableView;
	NSMutableArray* _notifyData;
	NSArray* _sectionTitles;
	NSArray* _rowTitles;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSArray* rowTitles;
@property(retain, nonatomic) NSArray* sectionTitles;
@property(retain, nonatomic) NSMutableArray* notifyData;
@property(retain, nonatomic) MMTableView* tableView;
-(void).cxx_destruct;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)initFindFriendEntryIconDownloadData;
-(void)initWeakNetStrategyData;
-(void)initGiftRedDotData;
-(void)initMsgCenterRedDotData;
-(void)initFloatLayerNotifyData;
-(void)initBubbleData;
-(void)initFindFriendNotifyData;
-(void)initData;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
@end
