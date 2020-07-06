//================================================================================
// EnglishLayer.h
//
// 役割: EnglishLayerを表すクラス。自動生成。
//================================================================================

#ifndef __RTCOP_GENERATED_ENGLISHLAYER__
#define __RTCOP_GENERATED_ENGLISHLAYER__

// 機能実現のためのヘッダ
#include "RTCOP/Core/Layer.h"
#include "RTCOP/Core/LayerdObject.h"
#include "RTCOP/Core/PartialClassMembers.h"
// EnglishLayerに含まれるクラスのヘッダ
#include "Hello.h"

namespace RTCOP {
namespace Generated {

// Englishレイヤ
class EnglishLayer : public RTCOP::Core::Layer
{
public:
	// インスタンスの取得
	static EnglishLayer* GetInstance();
public:
	// コンストラクタ・デストラクタ
	EnglishLayer(const int id, const char* const name, int numOfBaseClasses, int* numOfBaseMethods);
	virtual ~EnglishLayer();
protected:
	// レイヤードオブジェクトの初期化
	virtual void* InitializeLayerdObject(void* obj, int classID);
protected:
	// イベント発生時に実行されるメソッド
	virtual void OnActivating();		// アクティベート開始時に実行される
	virtual void OnActivated();			// アクティベート終了時に実行される
	virtual void OnDeactivating();		// ディアクティベート開始時に実行される
	virtual void OnDeactivated();		// ディアクティベート終了時に実行される
};

// EnglishレイヤのHello
class EnglishLayer_Hello : public RTCOP::Core::LayerdObject<Hello>
{
public:
	// パーシャルクラスのメンバ変数
	class PartialClassMembers : public RTCOP::Core::PartialClassMembers
	{
	public:
		int _EnglishMember;
	};
public:
	EnglishLayer_Hello();
	virtual void Print();
private:
	void _InitializePartialClass();
	void _FinalizePartialClass();
public:
	friend EnglishLayer;
};

} // namespace Generated {}
} // namespace RTCOP {}

#endif //!__RTCOP_GENERATED_ENGLISHLAYER__