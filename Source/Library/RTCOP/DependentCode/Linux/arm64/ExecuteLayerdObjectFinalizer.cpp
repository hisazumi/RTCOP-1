//================================================================================
// ExecuteLayerdObjectFinalizer.cpp
//
// 役割: レイヤードなオブジェクトのファイナライザを実行するための関数を提供する。
//       Linux arm64の実装。
//================================================================================

#include "DependentCode/ExecuteLayerdObjectFinalizer.h"

#ifdef LINUX_ARM64

namespace RTCOP {
namespace DependentCode {

// LayerdObjectのFinalizer実行
void ExecuteLayerdObjectFinalizer(void* layerdObject, volatile void* finalizer)
{
	void(*pfinalizer)(void*) = (void(*)(void*))finalizer;
	pfinalizer(layerdObject);
}

} // namespace DependentCode {}
} // namespace RTCOP {}

#endif
