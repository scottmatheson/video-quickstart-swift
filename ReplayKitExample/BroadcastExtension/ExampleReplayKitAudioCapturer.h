//
//  ExampleReplayKitAudioCapturer.h
//  ReplayKitExample
//
//  Copyright © 2018 Twilio, Inc. All rights reserved.
//

#import <TwilioVideo/TwilioVideo.h>

dispatch_queue_t ExampleCoreAudioDeviceGetCurrentQueue(void);

OSStatus ExampleCoreAudioDeviceRecordCallback(CMSampleBufferRef audioSample);

typedef struct ExampleAudioContext {
    TVIAudioDeviceContext deviceContext;
    size_t expectedFramesPerBuffer;
    size_t maxFramesPerBuffer;
} ExampleAudioContext;

/*
 *  ExampleReplayKitAudioCapturer consumes audio samples recorded by ReplayKit. Due to limitations of extensions, this
 *  device can't playback remote audio.
 */
@interface ExampleReplayKitAudioCapturer : NSObject <TVIAudioDevice>

- (instancetype)init;

@end
