/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"


@interface GameCenterUtil : MMObject {
}
+(id)parseUrlQuery:(id)query;
+(id)badgeFileNameWithLevel:(unsigned)level;
+(unsigned)actionTypeForGame:(id)game;
+(id)parseHomepageDataWithResp:(id)resp;
+(id)trimmedStringWithString:(id)string;
+(unsigned)tagTypeWithString:(id)string;
+(int)trendTypeWithString:(id)string;
+(id)getGameSettingCachePath;
+(id)getGameSearchRecommendItemCachePath;
+(id)getClassifyNewGameListCachePath:(id)path;
+(id)getMoreGameListCachePath;
+(id)getAllGameListDataPath;
+(id)getUserSubscribeDataPath;
+(id)getLibraryGameListCachePath;
+(id)getGameAdsCountryInfoFilePath;
+(id)getGameAdsFilePath;
+(id)getGameMsgGiftInfoFilePath;
+(id)getUserGameDetailFilePath:(id)path;
+(id)getUserHomeDataPath;
+(id)getUserCommonDataDir;
+(id)getUserDataDir;
+(id)getContactDisplayName:(id)name;
@end
