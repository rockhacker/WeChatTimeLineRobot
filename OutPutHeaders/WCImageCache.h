/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "MMService.h"

@class NSString, NSMutableDictionary;

@interface WCImageCache : MMService <MMService> {
	NSMutableDictionary* m_WCImagesOfType;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(BOOL)couldCacheImage:(id)image;
-(void).cxx_destruct;
-(unsigned long)onServiceCleanCache;
-(BOOL)onServiceMemoryWarning;
-(void)clearAllCaches;
-(void)setImage:(id)image forMedia:(id)media ofType:(int)type;
-(id)getImage:(id)image ofType:(int)type;
-(id)init;
@end

