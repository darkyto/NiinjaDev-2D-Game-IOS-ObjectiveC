
//
//  GameScene.h
//  NiinjaDev
//
//  Copyright (c) 2016 iNick Iliev. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import <CoreData/CoreData.h>
#import <AVFoundation/AVFoundation.h>

@interface GameScene : SKScene <SKPhysicsContactDelegate, AVAudioPlayerDelegate>

@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;

@property (nonatomic, retain) AVAudioPlayer *audioPlayer;

@property (nonatomic, strong) NSArray *players;
@property (nonatomic, strong) NSArray *playerScores;

@property (nonatomic, strong) NSArray *allQuestions;
@property (nonatomic, strong) NSArray *allAnswers;

-(instancetype)initWithSize:(CGSize)size andUserChoiceHero:(NSString *)userChoiceHero;

+(id)initWithSize:(CGSize)size andUserChoiceHero:(NSString *)userChoiceHero;

@end
