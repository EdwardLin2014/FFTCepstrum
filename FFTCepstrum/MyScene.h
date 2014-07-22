//
//  MyScene.h
//  FFTCepstrum
//

//  Copyright (c) 2014 Edward. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import "AudioController.h"

@interface MyScene : SKScene
{
    SKSpriteNode*       _graph;

    AudioController*    _audioController;
    BufferManager*      _bufferManager;
    Float32*            _l_fftData;
    Float32*            _l_fftDataInDB;
    Float32*            _l_cepstrumData;
    Float32*            _l_cepstrumDataInDB;
    Float32*            _l_fftcepstrumData;
    Float32*            _l_fftcepstrumDataInDB;
    
    SKShapeNode*        _waveLine;
    Float32             _waveX;
    Float32             _waveY;
    Float32             _waveInterval;
    int                 _waveLength;
    UInt32              _sampleStep;

    SKShapeNode*        _fftLine;
    SKShapeNode*        _cepstrumLine;
    SKShapeNode*        _fftcepstrumLine;
    
    UInt32              _Hz1200;
    UInt32              _Hz30;
    UInt32              _Hz70;
    UInt32              _Hz95;
    UInt32              _Hz100;
    UInt32              _Hz120;
    UInt32              _Hz530;
    UInt32              _Hz1000;
    UInt32              _lowestPitchThreshold;
    UInt32              _highestPitchThreshold;
    
    Float32             _maxAmp;
    int                 _bin;
    UInt32              _sampleRate;
    UInt32              _framesSize;
    Float32             _overlap;
    
    Float32             _Interval;
    Float32             _X;
    Float32             _Y;
    
    Float32             _frequency;
    Float32             _midiNum;
    NSString*           _pitch;
    
    Float32             _aveFreq;
    Float32             _currentTotalFreq;
    int                 _currentNum;
}

@end
