//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSArray, NSString;

@interface MFEWSSyncFolderHierarchyBatch : NSObject
{
    BOOL _isFinalBatch;	// 8 = 0x8
    NSString *_initialSyncState;	// 16 = 0x10
    NSString *_finalSyncState;	// 24 = 0x18
    NSArray *_createdFolders;	// 32 = 0x20
    NSArray *_updatedFolders;	// 40 = 0x28
    NSArray *_deletedFolderIDs;	// 48 = 0x30
}

@property(copy, nonatomic) NSArray *deletedFolderIDs; // @synthesize deletedFolderIDs=_deletedFolderIDs;
@property(copy, nonatomic) NSArray *updatedFolders; // @synthesize updatedFolders=_updatedFolders;
@property(copy, nonatomic) NSArray *createdFolders; // @synthesize createdFolders=_createdFolders;
@property(nonatomic) BOOL isFinalBatch; // @synthesize isFinalBatch=_isFinalBatch;
@property(copy, nonatomic) NSString *finalSyncState; // @synthesize finalSyncState=_finalSyncState;
@property(copy, nonatomic) NSString *initialSyncState; // @synthesize initialSyncState=_initialSyncState;
- (void).cxx_destruct;	// IMP=0x00000000000bdcd8

@end
