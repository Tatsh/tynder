//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ChipmunkObject.h"

@class CCNode, CCPhysicsNode, CCPhysicsShape, ChipmunkBody, NSArray, NSMutableArray, NSString;

@interface CCPhysicsBody : NSObject <ChipmunkObject>
{
    ChipmunkBody *_body;
    CCPhysicsShape *_shapeList;
    NSMutableArray *_joints;
    NSMutableArray *_chipmunkObjects;
    BOOL _affectedByGravity;
    BOOL _allowsRotation;
    BOOL _trackingPerformed;
    BOOL _isKinematicTransformDirty;
    struct CGAffineTransform _lastTransform;
    struct CGPoint _relativePosition;
    float _relativeRotation;
    BOOL _sleeping;
    CCNode *_node;
}

+ (id)bodyWithCircleOfRadius:(float)arg1 andCenter:(struct CGPoint)arg2;
+ (id)bodyWithPillFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 cornerRadius:(float)arg3;
+ (id)bodyWithPolygonFromPoints:(struct CGPoint *)arg1 count:(unsigned int)arg2 cornerRadius:(float)arg3;
+ (id)bodyWithPolylineFromPoints:(struct CGPoint *)arg1 count:(unsigned int)arg2 cornerRadius:(float)arg3 looped:(_Bool)arg4;
+ (id)bodyWithPolylineFromRect:(struct CGRect)arg1 cornerRadius:(float)arg2;
+ (id)bodyWithRect:(struct CGRect)arg1 cornerRadius:(float)arg2;
+ (id)bodyWithShapes:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) struct CGPoint absolutePosition;
@property(nonatomic) float absoluteRadians;
@property(readonly, nonatomic) struct CGAffineTransform absoluteTransform;
- (void)addJoint:(id)arg1;
@property(nonatomic) BOOL affectedByGravity;
@property(nonatomic) BOOL allowsRotation;
@property(nonatomic) float angularVelocity;
- (void)applyAngularImpulse:(float)arg1;
- (void)applyForce:(struct CGPoint)arg1;
- (void)applyForce:(struct CGPoint)arg1 atLocalPoint:(struct CGPoint)arg2;
- (void)applyForce:(struct CGPoint)arg1 atWorldPoint:(struct CGPoint)arg2;
- (void)applyImpulse:(struct CGPoint)arg1;
- (void)applyImpulse:(struct CGPoint)arg1 atLocalPoint:(struct CGPoint)arg2;
- (void)applyImpulse:(struct CGPoint)arg1 atWorldPoint:(struct CGPoint)arg2;
- (void)applyTorque:(float)arg1;
@property(readonly, nonatomic) float area;
@property(readonly, nonatomic) ChipmunkBody *body;
@property(readonly, nonatomic) NSArray *chipmunkObjects;
@property(copy, nonatomic) NSArray *collisionCategories;
@property(nonatomic) id collisionGroup;
@property(copy, nonatomic) NSArray *collisionMask;
@property(copy, nonatomic) NSString *collisionType;
@property(nonatomic) float density;
- (void)didAddToPhysicsNode:(id)arg1;
- (void)didRemoveFromPhysicsNode:(id)arg1;
- (void)eachCollisionPair:(CDUnknownBlockType)arg1;
@property(nonatomic) float elasticity;
@property(nonatomic) struct CGPoint force;
@property(nonatomic) float friction;
- (id)initWithShapeList:(id)arg1;
@property(readonly, nonatomic) BOOL isKinematicTransformDirty;
@property(readonly, nonatomic) BOOL isRunning;
@property(readonly, nonatomic) NSArray *joints;
@property(nonatomic) float mass;
@property(readonly, nonatomic) __weak CCNode *node; // @synthesize node=_node;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) CCPhysicsNode *physicsNode;
@property(nonatomic) struct CGPoint relativePosition;
@property(nonatomic) float relativeRotation;
- (void)removeJoint:(id)arg1;
- (void)removeParentTransformTracking:(id)arg1;
@property(nonatomic) BOOL sensor;
@property(nonatomic) BOOL sleeping; // @synthesize sleeping=_sleeping;
@property(nonatomic) struct CGPoint surfaceVelocity;
@property(nonatomic) float torque;
@property(nonatomic) unsigned int type;
@property(nonatomic) struct CGPoint velocity;
- (void)trackParentTransformations:(id)arg1;
- (void)updateKinetics:(double)arg1;
- (void)willAddToPhysicsNode:(id)arg1 nonRigidTransform:(struct CGAffineTransform)arg2;

@end

