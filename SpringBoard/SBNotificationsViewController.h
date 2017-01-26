//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBBulletinObserverViewController.h"

#import "UIGestureRecognizerDelegatePrivate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, SBNotificationCenterHeaderView, SBNotificationCenterTouchEater;
@protocol SBNCTableViewControllerDelegate;

@interface SBNotificationsViewController : SBBulletinObserverViewController <UIGestureRecognizerDelegatePrivate>
{
    NSMutableArray *_orderedSectionIDs;
    NSMutableDictionary *_sectionIDsToOrderedBulletins;
    SBNotificationCenterTouchEater *_clearButtonTouchEater;
    SBNotificationCenterHeaderView *_headerViewCurrentlyInClearState;
    NSMutableArray *_orderedChronologicalSectionIDs;
    NSMutableDictionary *_sectionIDsToChronologicalSectionInfos;
    struct {
        unsigned int suppliesInsertionAnimation:1;
        unsigned int suppliesRemovalAnimation:1;
        unsigned int suppliesReplacementAnimation:1;
        unsigned int handlesBulletinActions:1;
    } _notificationsModeViewControllerDelegateFlags;
    id <SBNCTableViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SBNCTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleEatenTouch:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)handleAction:(id)arg1 forBulletin:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (long long)notificationCenterTableViewController:(id)arg1 replacementAnimationForRow:(id)arg2 inSection:(id)arg3;
- (long long)notificationCenterTableViewController:(id)arg1 removalAnimationForRow:(id)arg2 inSection:(id)arg3;
- (long long)notificationCenterTableViewController:(id)arg1 insertionAnimationForRow:(id)arg2 inSection:(id)arg3;
- (void)_handleLocalChange:(id)arg1;
- (void)_handleSignificantTimeChange:(id)arg1;
- (void)_handleTimeZoneChange:(id)arg1;
- (void)_updateChronologicalSectionsForTimeZoneChange;
- (void)_updateChronologicalSectionHeadersForLocaleChange;
- (void)_updateChronologicalSectionHeadersForSignificantTimeChange;
- (void)_updateChronologicalSectionHeadersWithBlock:(CDUnknownBlockType)arg1;
- (void)clearSection:(id)arg1;
- (void)updateForChangeInLockedState;
- (void)updateSection:(id)arg1 withParameters:(id)arg2;
- (void)updateSection:(id)arg1 withInfo:(id)arg2;
- (void)_updateSectionForChangeInNumberOfLines:(id)arg1;
- (void)_updateSection:(id)arg1 withLockState:(_Bool)arg2;
- (void)_updateSectionForChangeInMessagePrivacyIfNecessary:(id)arg1;
- (void)_updateSectionForChangeInLockScreenVisibility:(id)arg1 withLockState:(_Bool)arg2 updatedSubsectionIDs:(id)arg3;
- (void)_updateSectionForChangeInLockScreenVisibility:(id)arg1 withProcessingBlock:(CDUnknownBlockType)arg2;
- (void)commitReorderOfSections:(id)arg1;
- (void)_reloadOrderedSections:(id)arg1;
- (id)_allBulletinsSorted;
- (void)_populateBulletinInfo:(id)arg1 inSection:(id)arg2;
- (void)_populateBulletinInfo:(id)arg1 inSection:(id)arg2 andSectionOrderRule:(long long)arg3;
- (id)infoForBulletin:(id)arg1 inSection:(id)arg2 forFeed:(unsigned long long)arg3;
- (id)infoForBulletinSection:(id)arg1;
- (void)_configureBBSectionInfo:(id)arg1;
- (void)commitReplacementWithBulletin:(id)arg1 ofBulletin:(id)arg2 inSection:(id)arg3;
- (void)commitRemovalOfBulletin:(id)arg1 fromSection:(id)arg2;
- (void)commitInsertionOfBulletin:(id)arg1 beforeBulletin:(id)arg2 inSection:(id)arg3 forFeed:(unsigned long long)arg4;
- (void)_tearDownChronologicalStructures;
- (void)_updateSectionOrderForOperationInSection:(id)arg1;
- (void)_sortBulletins:(id)arg1 forSection:(id)arg2;
- (void)commitReplacementWithSection:(id)arg1 ofSection:(id)arg2;
- (void)commitMoveOfSection:(id)arg1 beforeSection:(id)arg2;
- (void)commitRemovalOfSection:(id)arg1;
- (void)_commitRemovalOfBulletinBoardSectionIfNecessary:(id)arg1;
- (void)_commitRemovalOfChronologicalSectionIfNecessary:(id)arg1;
- (void)_invalidateClearActionsForSection:(id)arg1;
- (void)commitInsertionOfSection:(id)arg1 beforeSection:(id)arg2;
- (void)_sortSectionIDs;
- (id)_chronologicalSectionAfterChronologicalSection:(id)arg1;
- (_Bool)_isChronologicalSectionInfo:(id)arg1;
- (id)_chronologicalSectionInfoForDate:(id)arg1 creatingIfNecessary:(_Bool)arg2;
- (_Bool)_isArrangedByAppSection;
@property(readonly, nonatomic) __weak NSMutableDictionary *sectionIDsToOrderedBulletins;
@property(readonly, nonatomic) __weak NSArray *orderedSectionIDs;
- (id)contentUnavailableText;
- (void)_installClearButtonTouchEater;
- (void)_setHeaderViewCurrentlyInClearState:(id)arg1;
- (id)_headerViewCurrentlyInClearState;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithObserverFeed:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

