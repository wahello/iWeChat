//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Q2dStatisticData;

@interface Q2DMapStatistics : NSObject
{
    Q2dStatisticData *_statisticData;
}

+ (id)sharedStatistics;
@property(retain, nonatomic) Q2dStatisticData *statisticData; // @synthesize statisticData=_statisticData;
- (void).cxx_destruct;
- (id)init;
- (void)resetStatisticsData;
- (void)reportTileStatistics;
- (void)addTileStatistics:(int)arg1 type:(int)arg2;
- (id)appendCommonUrlStatisticParamatersFor:(id)arg1;
- (void)sendingStatisticsToServer:(CDUnknownBlockType)arg1;
- (void)sendingRequest:(id)arg1:(CDUnknownBlockType)arg2;
- (id)constructRequest;
- (id)constructURLStringWithArguments:(id)arg1 forUrl:(id)arg2;
- (id)constructArguments;
- (id)constructCommonArguments;
- (id)DPI;
- (id)netType;
- (id)appVersion;
- (id)appBundleIdentifier;
- (id)appName;
- (id)deviceIdentifier;
- (void)throwKeyInvalidException;

@end

