/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCPayBaseViewController.h"
#import "WCPayCardNumberScanDelegate.h"
#import "WCBizTipViewDelegate.h"
#import "ILinkEventExt.h"

@class WCBaseTextFieldItem, UILabel, WCPayTenpaySecureCtrlItem, NSString, UIButton, WCBaseControlLogic, WCBizInfoGroup, RichTextView, WCBizTipView;
@protocol WCPayFillCardNumberViewControllerDelegate;

@interface WCPayFillCardNumberViewController : WCPayBaseViewController <WCPayCardNumberScanDelegate, ILinkEventExt, WCBizTipViewDelegate> {
	UIButton* m_footerButton;
	WCBizInfoGroup* m_group;
	WCPayTenpaySecureCtrlItem* m_textFieldItem;
	WCBaseTextFieldItem* m_textAutoFilledCardNumberItem;
	RichTextView* richTextView;
	id<WCPayFillCardNumberViewControllerDelegate> m_delegate;
	WCBizTipView* introView;
	BOOL m_bAutoFilledCardNumber;
	BOOL m_bShowedFavorInfo;
	NSString* m_headerTitle;
	UILabel* autoFilledNumberLabel;
	NSString* m_viewTitle;
	RichTextView* realnameRichTextView;
	UIButton* _scanButton;
	WCBaseControlLogic* _fromControlLogic;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) WCBaseControlLogic* fromControlLogic;
@property(readonly, assign, nonatomic) BOOL m_bAutoFilledCardNumber;
-(void).cxx_destruct;
-(void)footerTipAction:(id)action;
-(void)didFindCardNumber:(id)number cardImage:(id)image;
-(void)setAutoFilledCardNumber;
-(void)OnWCBizTipViewClosed;
-(void)showDetailTip;
-(void)onLinkClicked:(id)clicked withRect:(CGRect)rect;
-(void)stopLogicLoading;
-(void)startLogicLoading;
-(void)setDelegate:(id)delegate;
-(void)didReceiveMemoryWarning;
-(void)WCBaseInfoItemEditChanged:(id)changed;
-(void)OnClearAutoFilledCardNumber;
-(void)onNext;
-(void)scanAction:(id)action;
-(void)refreshViewWithData:(id)data;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewWillLayoutSubviews;
-(void)makeInfoCell:(id)cell cellInfo:(id)info;
-(void)reloadTableView;
-(id)getFirstUserTipViewInIOS7;
-(id)getFirstUserTipView;
-(void)initNavigationBar;
-(void)FillCardNumberCancel;
-(void)setShowedFavorInfo;
-(void)initFooterView;
-(void)dealloc;
-(void)setTitle:(id)title;
-(void)setHeaderTip:(id)tip;
-(id)init;
@end
