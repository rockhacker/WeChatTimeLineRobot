/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WCPreloadProviderDelegate.h"
#import "CNetworkStatusExt.h"

@class WCPreloadProvider, NSMutableArray, NSMutableSet, NSMutableDictionary;
@protocol WCPreloadLogicDelegate;

@interface WCPreloadLogicMgr : XXUnknownSuperclass <WCPreloadProviderDelegate, CNetworkStatusExt> {
	NSMutableArray* m_downloadItemID;
	unsigned long m_lastRefreshTime;
	id<WCPreloadLogicDelegate> m_delegate;
	WCPreloadProvider* m_dataProvider;
	unsigned long m_preloadCount;
	BOOL m_enablePreload;
	NSMutableArray* m_waitDownloadItem;
	NSMutableSet* m_setPreDownloadItemIDForBigImage;
	NSMutableSet* m_setPreDownloadItemIDForSmallImage;
	NSMutableDictionary* m_dicPrelDownloadItemNetType;
	unsigned long m_preloadSucFeedCountForSmallImage;
	unsigned long m_viewNewFeedCount;
	unsigned long m_preloadSucImageCountForBigImage;
	unsigned long m_viewNewBigImageCount;
	unsigned long m_preloadBigImageCount;
	unsigned long long m_latestID;
}
@property(assign, nonatomic) __weak id<WCPreloadLogicDelegate> m_delegate;
-(void).cxx_destruct;
-(BOOL)isInPreloadAroundImgLimitTime;
-(void)tryLogPreloadImageResult;
-(void)addBigImageCountForViewNewBigImage;
-(void)addBigImageCountForPreloadSuc;
-(void)addFeedCountForViewNewFeeds;
-(void)addFeedCountForPreloadSmallImageSuc;
-(BOOL)isInPreloadLimitTime;
-(unsigned long)getCheckUpdateTimeSecs;
-(BOOL)couldPreloadImage;
-(BOOL)couldPreloadBigImage;
-(BOOL)couldPreloadSmallImage;
-(void)onDataUpdatedForPreload:(id)preload andData:(id)data;
-(id)getPreloadNetType:(id)type;
-(void)removePreloadDataItemForBigImage:(id)bigImage;
-(void)removePreloadDataItemForSmallImage:(id)smallImage;
-(BOOL)hasPreloadDataItemForBigImage:(id)bigImage;
-(BOOL)hasPreloadDataItemForSmallImage:(id)smallImage;
-(void)preloadDataList:(id)list;
-(void)downloadImages;
-(int)getCurHistoryClickRatioLimit;
-(unsigned)getNetworkType;
-(void)tryPreloadData;
-(void)handleLatestWCObjectChanged:(id)changed;
-(void)updateStatusForPreload:(BOOL)preload;
-(void)dealloc;
-(id)init;
@end
