/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIView.h"

@class MMWebImageView, WCMallFunctionActivity, UIImageView;
@protocol WCMallFunctionActivityViewDelegate;

@interface WCMallFunctionActivityView : MMUIView {
	WCMallFunctionActivity* m_oWCMallFunctionActivity;
	id<WCMallFunctionActivityViewDelegate> m_delegate;
	UIImageView* m_oPreImageView;
	MMWebImageView* activityIconView;
}
@property(retain, nonatomic) UIImageView* m_oPreImageView;
@property(assign, nonatomic) __weak id<WCMallFunctionActivityViewDelegate> m_delegate;
@property(retain, nonatomic) WCMallFunctionActivity* m_oWCMallFunctionActivity;
+(unsigned)rowCount;
+(float)width;
+(float)height;
-(void).cxx_destruct;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)initView;
-(void)OnButtonDown;
-(void)dealloc;
-(id)initWithFunctionActivity:(id)functionActivity;
@end

