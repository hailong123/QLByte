#ifndef BEF_AI_IMAGE_QUALITY_ENHANCEMENT_PUBLICE_DEFINE_H
#define BEF_AI_IMAGE_QUALITY_ENHANCEMENT_PUBLICE_DEFINE_H

#include <stddef.h>
#include "bef_effect_ai_public_define.h"

#if defined(__ANDROID__) || defined(TARGET_OS_ANDROID)
typedef enum sr_input_type{    
    SR_TEXTURE_INPUT,
}sr_input_type;
#elif  defined(__APPLE__)
typedef enum sr_input_type{  
    SR_METAL_TEXTURE_INPUT,
    SR_PXIELBUFFER_INPUT,
}sr_input_type; 
#endif

#define bef_effect_result_t int

typedef union sr_data{
    int texture[2]; // 如果是纹理，这里纹理的index, ios 的纹理目前只支持metal的纹理, android 需要oes 纹理，且纹理放在0 位置
    void* buffer;   // 如果是数据输入，iOS 传入pixelBuffer的指针
}sr_data;

typedef struct bef_ai_video_sr_input{
    size_t width;   // 输入数据的宽度
    size_t height;  // 输入数据的高度
    sr_data data;   // 输入数据的数据
    sr_input_type type; // 输入数据的类型，iOS 支持pixelbuffer 输出，Android 支持oes 纹理
    
}bef_ai_video_sr_input;

typedef struct bef_ai_video_sr_output{
    sr_data data;   // 输出类型数据，会根据输入，填充对应的输出部分
    size_t width;   // 输出数据的宽度
    size_t height;  // 输入数据的高度
}bef_ai_video_sr_output;

typedef struct bef_ai_night_scene_input{
    size_t width;   // 输入数据的宽度
    size_t height;  // 输入数据的高度
    sr_data data;   // 输入数据的数据
    sr_input_type type; // 输入数据的类型 iOS暂时不支持 Android 支持oes 纹理
}bef_ai_night_scene_input;

typedef unsigned long long bef_image_quality_enhancement_handle;
#endif 
