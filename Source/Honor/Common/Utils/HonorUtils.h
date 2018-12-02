// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#define __FILENAME__ \
    (wcsrchr(__FILEW__, '\\') ? wcsrchr(__FILEW__, '\\') + 1 : __FILEW__)

#define DLOG(MESSAGE) \
    UE_LOG(HonorLog, Display, TEXT("%s - R%i - %s : %s"), \
        __FILENAME__, __LINE__, __FUNCTIONW__, *MESSAGE);

#define WLOG(MESSAGE) \
    UE_LOG(HonorLog, Warning, TEXT("%s - R%i - %s : %s"), \
        __FILENAME__, __LINE__, __FUNCTIONW__, *MESSAGE);

#define ELOG(MESSAGE) \
    UE_LOG(HonorLog, Error, TEXT("%s - R%i - %s : %s"), \
        __FILENAME__, __LINE__, __FUNCTIONW__, *MESSAGE);


DECLARE_LOG_CATEGORY_EXTERN(HonorLog, Log, All);

namespace honer {



} // namespace honer