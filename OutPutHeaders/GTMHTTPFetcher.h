/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class NSMutableData, NSDictionary, NSURLConnection, NSURLResponse, NSTimer, NSString, NSURL, NSMutableURLRequest, NSURLCredential, NSInputStream, NSMutableDictionary, NSArray, NSThread, NSOperationQueue, NSFileHandle, NSData;
@protocol GTMFetcherAuthorizationProtocol, NSObject, GTMHTTPFetcherServiceProtocol, GTMHTTPFetchHistoryProtocol, GTMCookieStorageProtocol;

@interface GTMHTTPFetcher : XXUnknownSuperclass {
	NSMutableURLRequest* request_;
	NSURLConnection* connection_;
	NSMutableData* downloadedData_;
	NSString* downloadPath_;
	NSString* temporaryDownloadPath_;
	NSFileHandle* downloadFileHandle_;
	unsigned long long downloadedLength_;
	NSURLCredential* credential_;
	NSURLCredential* proxyCredential_;
	NSData* postData_;
	NSInputStream* postStream_;
	NSMutableData* loggedStreamData_;
	NSURLResponse* response_;
	id<NSObject> delegate_;
	SEL finishedSel_;
	SEL sentDataSel_;
	SEL receivedDataSel_;
	id completionBlock_;
	id receivedDataBlock_;
	id sentDataBlock_;
	id retryBlock_;
	BOOL hasConnectionEnded_;
	BOOL isCancellingChallenge_;
	BOOL isStopNotificationNeeded_;
	BOOL shouldFetchInBackground_;
	unsigned backgroundTaskIdentifer_;
	id userData_;
	NSMutableDictionary* properties_;
	NSArray* runLoopModes_;
	NSOperationQueue* delegateQueue_;
	id<GTMHTTPFetchHistoryProtocol> fetchHistory_;
	int cookieStorageMethod_;
	id<GTMCookieStorageProtocol> cookieStorage_;
	id<GTMFetcherAuthorizationProtocol> authorizer_;
	id<GTMHTTPFetcherServiceProtocol> service_;
	NSString* serviceHost_;
	int servicePriority_;
	NSThread* thread_;
	BOOL isRetryEnabled_;
	SEL retrySel_;
	NSTimer* retryTimer_;
	unsigned retryCount_;
	double maxRetryInterval_;
	double minRetryInterval_;
	double retryFactor_;
	double lastRetryInterval_;
	BOOL hasAttemptedAuthRefresh_;
	NSString* comment_;
	NSString* log_;
	NSURL* redirectedFromURL_;
	NSString* logRequestBody_;
	NSString* logResponseBody_;
	BOOL shouldDeferResponseBodyLogging_;
}
@property(copy) id completionBlock;
@property(retain) id<GTMCookieStorageProtocol> cookieStorage;
@property(copy) NSString* temporaryDownloadPath;
@property(retain) NSArray* runLoopModes;
@property(retain) NSOperationQueue* delegateQueue;
@property(copy) NSString* log;
@property(copy) NSString* comment;
@property(copy) NSMutableDictionary* properties;
@property(retain) id userData;
@property(retain) id<GTMHTTPFetchHistoryProtocol> fetchHistory;
@property(retain) NSFileHandle* downloadFileHandle;
@property(copy) NSString* downloadPath;
@property(retain) NSData* downloadedData;
@property(readonly, assign) unsigned long long downloadedLength;
@property(retain) NSURLResponse* response;
@property(readonly, retain) NSDictionary* responseHeaders;
@property(readonly, assign) int statusCode;
@property(readonly, assign) double nextRetryInterval;
@property(readonly, assign) unsigned retryCount;
@property(assign) double retryFactor;
@property(assign) double minRetryInterval;
@property(assign) double maxRetryInterval;
@property(copy) id retryBlock;
@property(assign) SEL retrySelector;
@property(assign, getter=isRetryEnabled) BOOL retryEnabled;
@property(copy) id receivedDataBlock;
@property(copy) id sentDataBlock;
@property(assign) SEL receivedDataSelector;
@property(assign) SEL sentDataSelector;
@property(assign) BOOL shouldFetchInBackground;
@property(assign) id delegate;
@property(retain) NSThread* thread;
@property(assign) int servicePriority;
@property(copy) NSString* serviceHost;
@property(retain) id<GTMHTTPFetcherServiceProtocol> service;
@property(retain) id<GTMFetcherAuthorizationProtocol> authorizer;
@property(assign) int cookieStorageMethod;
@property(retain) NSInputStream* postStream;
@property(retain) NSData* postData;
@property(retain) NSURLCredential* proxyCredential;
@property(retain) NSURLCredential* credential;
@property(retain) NSMutableURLRequest* mutableRequest;
+(void)setConnectionClass:(Class)aClass;
+(Class)connectionClass;
+(BOOL)doesSupportSentDataCallback;
+(id)staticCookieStorage;
+(void)initialize;
+(id)fetcherWithURLString:(id)urlstring;
+(id)fetcherWithURL:(id)url;
+(id)fetcherWithRequest:(id)request;
-(void)setCommentWithFormat:(id)format;
-(void)addPropertiesFromDictionary:(id)dictionary;
-(id)propertyForKey:(id)key;
-(void)setProperty:(id)property forKey:(id)key;
-(void)destroyRetryTimer;
-(void)retryTimerFired:(id)fired;
-(void)primeRetryTimerWithNewTimeInterval:(double)newTimeInterval;
-(void)beginRetryTimer;
-(BOOL)shouldRetryNowForStatus:(int)status error:(id)error;
-(BOOL)isRetryError:(id)error;
-(void)logNowWithError:(id)error;
-(void)connection:(id)connection didFailWithError:(id)error;
-(BOOL)shouldReleaseCallbacksUponCompletion;
-(void)connectionDidFinishLoading:(id)connection;
-(int)statusAfterHandlingNotModifiedError;
-(id)cachedDataForStatus;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;
-(BOOL)invokeRetryCallback:(SEL)callback target:(id)target willRetry:(BOOL)retry error:(id)error;
-(void)invokeSentDataCallback:(SEL)callback target:(id)target didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;
-(void)invokeOnQueueWithDictionary:(id)dictionary;
-(void)invokeFetchCallbacksOnDelegateQueueWithData:(id)data error:(id)error;
-(void)invokeFetchCallback:(SEL)callback target:(id)target data:(id)data error:(id)error;
-(void)invokeFetchCallbacksWithData:(id)data error:(id)error;
-(void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;
-(void)handleCookiesForResponse:(id)response;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;
-(void)waitForCompletionWithTimeout:(double)timeout;
-(void)retryFetch;
-(void)sendStopNotificationIfNeeded;
-(void)stopFetching;
-(void)stopFetchReleasingCallbacks:(BOOL)callbacks;
-(void)releaseCallbacks;
-(BOOL)isFetching;
-(void)addCookiesToRequest:(id)request;
-(id)createTempDownloadFilePathForPath:(id)path;
-(BOOL)beginFetchWithCompletionHandler:(id)completionHandler;
-(void)authorizer:(id)authorizer request:(id)request finishedWithError:(id)error;
-(BOOL)authorizeRequest;
-(void)endBackgroundTask;
-(void)backgroundFetchExpired;
-(void)failToBeginFetchWithError:(id)error;
-(void)failToBeginFetchDeferWithError:(id)error;
-(BOOL)beginFetchMayDelay:(BOOL)delay mayAuthorize:(BOOL)authorize;
-(BOOL)beginFetchWithDelegate:(id)delegate didFinishSelector:(SEL)selector;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithRequest:(id)request;
-(id)init;
@end

