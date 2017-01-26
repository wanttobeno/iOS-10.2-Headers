//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBLayoutState, SBWorkspaceEntity, SBWorkspaceTransitionContext;

@protocol SBWorkspaceTransitionLayoutDelegate <NSObject>
- (struct CGRect)transitionContext:(SBWorkspaceTransitionContext *)arg1 referenceFrameForEntity:(SBWorkspaceEntity *)arg2;
- (SBLayoutState *)originalLayoutStateForTransitionContext:(SBWorkspaceTransitionContext *)arg1;
- (SBLayoutState *)layoutStateForTransitionContext:(SBWorkspaceTransitionContext *)arg1;
@end

