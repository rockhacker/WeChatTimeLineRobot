/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIView.h"

@class UIActivityIndicatorView, UILabel;

@interface WCCardTitleView : MMUIView {
	UIActivityIndicatorView* loadingView;
	UILabel* titleLabel;
}
-(void).cxx_destruct;
-(void)updateWithTitle:(id)title NeedLoading:(BOOL)loading;
-(void)initView;
-(id)init;
@end
