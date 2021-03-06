/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UISearchDisplayDelegate.h"
#import "MMObject.h"
#import "WeChat-Structs.h"
#import "StoreEmotionSearchJSLogicDelegate.h"
#import "MMSearchBarDelegate.h"
#import "UISearchBarDelegate.h"
#import "MMUIViewControllerDelegate.h"

@class MMSearchBar, NSString, MMSearchBarDisplayController, EmotionStoreSearchContainerView;

@interface MMEmotionStoreSearchController : MMObject <MMSearchBarDelegate, UISearchDisplayDelegate, UISearchBarDelegate, StoreEmotionSearchJSLogicDelegate, MMUIViewControllerDelegate> {
	MMSearchBar* m_mmSearchBar;
	BOOL m_canSearchAfterInit;
	BOOL m_searchDimmingViewRemoved;
	MMSearchBarDisplayController* m_searchBarDisplayControler;
	EmotionStoreSearchContainerView* m_searchResultContainerView;
	NSString* m_templateDir;
	unsigned m_templateVersion;
	unsigned _searchScene;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned searchScene;
@property(retain, nonatomic) MMSearchBar* mmSearchBar;
-(void).cxx_destruct;
-(void)searchDisplayControllerDidEndSearch:(id)searchDisplayController;
-(void)searchDisplayControllerWillEndSearch:(id)searchDisplayController;
-(void)searchDisplayControllerDidBeginSearch:(id)searchDisplayController;
-(void)applySearchBeginAnimation:(id)animation;
-(void)searchDisplayControllerWillBeginSearch:(id)searchDisplayController;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)searchBarCancelButtonClicked:(id)clicked;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(void)openNewPageWithPageName:(id)pageName ReqType:(unsigned)type Keyword:(id)keyword;
-(id)getViewController;
-(void)hideSearchBarResultView;
-(void)removeSearchDimmingView;
-(void)fixSearchBarSuperviewHeight;
-(void)fixSearchBarSuperviewHeightWhenActive;
-(void)fixSearchBarMaskBug;
-(void)tryInitViewOfSearchController;
-(void)configSearchTemplate;
-(id)initWithContentsViewController:(id)contentsViewController AndSearchBarDisplayController:(id)controller;
-(void)dealloc;
@end

