#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData>
struct Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>
struct Dictionary_2_t508F4CB243B163280E2C476A4977BED583F2ABEF;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB;
// System.Collections.Generic.Dictionary`2<System.Object,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>
struct Dictionary_2_t3F0EFF9153AB3CA4F01EFD7352761A3A577EF1FC;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Transform>
struct Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEnumerable`1<GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData>
struct IEnumerable_1_tBCCEDF8608F20737945359D32CEA61BA9A42857A;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.GameObject>
struct IEqualityComparer_1_tFE667855A98BB6902B52DD03254BE42CC7CEB26E;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IReadOnlyList`1<System.Object>
struct IReadOnlyList_1_t096750C6D09536A8131A83E4ACF863B54ADEE544;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData>
struct KeyCollection_tF14EBA87B3C5D8B2A5AD41F8E37675EE74393896;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>
struct KeyCollection_tB0F0EE6E8B94572109A1945D160C45846A885DC7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Single>
struct KeyCollection_tC78C079422A1A521923655A578A8FA3FEC378771;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.Transform>
struct KeyCollection_t0A57B2F148D43C374CEB66B1EE428EB77007DD59;
// GameKit.Dependencies.Utilities.ObjectPooling.ListStack`1<UnityEngine.GameObject>
struct ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F;
// GameKit.Dependencies.Utilities.ObjectPooling.ListStack`1<System.Object>
struct ListStack_1_t6543B5304E8418236EAC2FEBBC81B53D909BC453;
// System.Collections.Generic.List`1<GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData>
struct List_1_t479A7E3D4251D7C7ED14CDAB6C24C659F23D70D1;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<GameKit.Dependencies.Utilities.ObjectPooling.PoolData>
struct List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Collections.Generic.List`1<GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeData>
struct List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData>
struct ValueCollection_tC48530E76588B7E27A1AD2A192DEFA50B55881BA;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>
struct ValueCollection_tEF406DE206D409F970B2F5D2E31DA9B96136DB36;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>
struct ValueCollection_tA250E7D856E5178DDAACCBBCBBA2BC8EBC5A2EE1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.Transform>
struct ValueCollection_tD94AE4964757B84F9AA8AC824125DE34C1F0D7F1;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData>[]
struct EntryU5BU5D_t132882E75E5BFC450D0FA2CE2683394E0A004769;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>[]
struct EntryU5BU5D_tA8AD13FA326A0F49943622DA0BBCEE939CBC5C4F;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32>[]
struct EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Single>[]
struct EntryU5BU5D_t7ED48D7F5F895684C377F90C33DDD1E0CCACDE61;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.Transform>[]
struct EntryU5BU5D_tA477E34F31714BE344BB608D37F21ECF74AEF9BF;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData[]
struct ButtonDataU5BU5D_t7D0F3EA7572B8D5BF5DC3F520B6132B639FEF7DA;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
// GameKit.Dependencies.Utilities.ObjectPooling.PoolData[]
struct PoolDataU5BU5D_t9AA78F6620FDD8E2FBB7D799E637B863D9F2D15C;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeData[]
struct ResizeDataU5BU5D_t44D109CE8669EC27274E70CC522CDD7871B49A1F;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA;
// GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData
struct ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// GameKit.Dependencies.Utilities.Types.CanvasGroupFader
struct CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808;
// UnityEngine.CircleCollider2D
struct CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// GameKit.Dependencies.Utilities.Types.DDOL
struct DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer
struct FloatingContainer_tD4E61098F9070AA28CF23BB647982FEECE88483B;
// GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingImage
struct FloatingImage_tCB44A89A44F39DAECF4D19D9863A268A110E1442;
// GameKit.Dependencies.Utilities.Types.OptionMenuButtons.FloatingOptions
struct FloatingOptions_t465B7FA595A7E427B5FF2EE7880A208184398DCA;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940;
// GameKit.Dependencies.Inspectors.GroupAttribute
struct GroupAttribute_t4ECEDB3E307BA4A4AB6A908129323E4041840B9B;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// GameKit.Dependencies.Utilities.Types.CanvasContainers.ImageButtonData
struct ImageButtonData_tB44D13315533BA4A897470789513A2FAAD2ED6BC;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool
struct ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74;
// GameKit.Dependencies.Utilities.Types.CanvasContainers.OptionMenuButton
struct OptionMenuButton_t5FBC86B97F4399FEB00518C805878822E8938D22;
// GameKit.Dependencies.Utilities.Types.CanvasContainers.OptionMenuImageButton
struct OptionMenuImageButton_t28F50366E31801CDC5953CD073C541DF384161A7;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// GameKit.Dependencies.Utilities.ObjectPooling.PoolData
struct PoolData_t80E4C4FD24F727D017C06769387611B94D561514;
// GameKit.Dependencies.Utilities.ObjectPooling.Examples.Projectile
struct Projectile_t1AF0B52CB892B339A2055635668AFA848C0348A9;
// GameKit.Dependencies.Utilities.ObjectPooling.Examples.ProjectileSpawner
struct ProjectileSpawner_t0149853AA262DB8F2CD0D139A39133C4809F6742;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// GameKit.Dependencies.Utilities.Types.RectTransformResizer
struct RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E;
// GameKit.Dependencies.Utilities.Types.CanvasContainers.ResizableContainer
struct ResizableContainer_t634A38C6B576E1142CF1F6EAB8964A75134FC626;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// GameKit.Dependencies.Utilities.Types.SceneAttribute
struct SceneAttribute_t64707DCEB2046DFF315133276946A0114591F862;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// GameKit.Dependencies.Utilities.Types.ScrollbarValueSetter
struct ScrollbarValueSetter_t6755DD99A3F95482A76FD237B8A316F4C39FBC9A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// GameKit.Dependencies.Inspectors.ShowIfAttribute
struct ShowIfAttribute_t8E349A53643E969632B14FD4801DAE98D3CDBC32;
// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// GameKit.Dependencies.Utilities.Types.TimedOperation
struct TimedOperation_tEA1D7A9F17A808037B3501BAA9E1C927A61AB266;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData/PressedDelegate
struct PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__CleanupChecks>d__12
struct U3C__CleanupChecksU3Ed__12_tD80DBEC4FB6FA79CF82657DD30C4FFA83DDA0D9B;
// GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__Reset>d__13
struct U3C__ResetU3Ed__13_tAA6080EEC3AA5D7FB8E14FE3BACA96785E9E62BB;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeData
struct ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF;
// GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeDelegate
struct ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_tDDBE21D44D65DF069C54FE3ACF7668D976E6BBB6;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationState_tA96D168E847A237D20FE79D7BC103CBB4A46E61B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_t586CFF62C78640B28034251F78E8B7B1C6EAAD92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t508F4CB243B163280E2C476A4977BED583F2ABEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Floats_t54BC254F0C30D7F4D5A75148FE42847BA7143FCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tBCCEDF8608F20737945359D32CEA61BA9A42857A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t7451B58DA2A57E8102047712393856B3EA843EF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ints_tC6848D8097CAB468EA0114D30F81F9746AFCF275_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Layers_t4E7DAB7E32C44CB8266DEFBE777E6D649FB70834_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t479A7E3D4251D7C7ED14CDAB6C24C659F23D70D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PoolData_t80E4C4FD24F727D017C06769387611B94D561514_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3C__CleanupChecksU3Ed__12_tD80DBEC4FB6FA79CF82657DD30C4FFA83DDA0D9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3C__ResetU3Ed__13_tAA6080EEC3AA5D7FB8E14FE3BACA96785E9E62BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vectors_tB271C58533ED793021EEFFF605684AECF414D033_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7;
IL2CPP_EXTERN_C String_t* _stringLiteral104389F9F6E5D2BE248EC7A03AE2D3CD4DE29609;
IL2CPP_EXTERN_C String_t* _stringLiteral15DC822959866835E349C6367C4C8C56A63C01EB;
IL2CPP_EXTERN_C String_t* _stringLiteral17976A05DE6DAB230F991414B5FABF01AC6E94B8;
IL2CPP_EXTERN_C String_t* _stringLiteral1D57CB08C0BDA4B355B51FE76856B92A02400F50;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2774AE9610CAB8B564AEA7618945AAAFA295BAD9;
IL2CPP_EXTERN_C String_t* _stringLiteral3A178357174A7CDC7CEB0F7DD98D49656E9E5D2B;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral4C067C1DC94D7C88107C16AADB27E06C3779644B;
IL2CPP_EXTERN_C String_t* _stringLiteral525F5C8DBE02A4413AF96F338A4166104DA95AE4;
IL2CPP_EXTERN_C String_t* _stringLiteral68EF67438DF019954C1ABE006C308B6E986245FE;
IL2CPP_EXTERN_C String_t* _stringLiteral69E8C4E5C67E12A41FF071BAABC442EE91C56EC3;
IL2CPP_EXTERN_C String_t* _stringLiteral82C6EC10295EEFD4972589F9437828BA0551AB71;
IL2CPP_EXTERN_C String_t* _stringLiteralA64FAA3912374FAD1222EBB6A14534DB5FC554C6;
IL2CPP_EXTERN_C String_t* _stringLiteralBD2A208375550A323A5F1C2021F4EEBEE43D90A9;
IL2CPP_EXTERN_C String_t* _stringLiteralC4A7DE87BA62666C4D3A7811A973650559A07FC0;
IL2CPP_EXTERN_C String_t* _stringLiteralC79390149DCD6199DE7C64E276DB100D086893FC;
IL2CPP_EXTERN_C String_t* _stringLiteralD2724DD20D997B911554D8FCB554B88353F28A4A;
IL2CPP_EXTERN_C String_t* _stringLiteralD77B3E6FE34588181670AD33AADDCF7851C93952;
IL2CPP_EXTERN_C String_t* _stringLiteralE62E3D8794381D662905D72B7CCA4EE4BE589C41;
IL2CPP_EXTERN_C String_t* _stringLiteralEC50593ED975088B34C79B0D471FA49574FEA10A;
IL2CPP_EXTERN_C String_t* _stringLiteralF294BDC94E1D1C79F018112E429E771D61052A2C;
IL2CPP_EXTERN_C const RuntimeMethod* ApplicationState_Application_quitting_m03200B663FE586745ABD2F23D72449E8A3BC9982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Arrays_AddUnique_TisRuntimeObject_mC7A8A9DAAE6CC900FBECED30182E25BF66346AE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m820D038F52BDC71ECDEAE04ED05D98CCF63E9243_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m7337575D54E678C7A71036F626F5061EB90D40C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m93DE10A8B7FB144BFF486534086B965B8744B235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mA5AD7A322EF82C29C737978C227E7FDA6363809B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mCF5610BCC916CD07B0FDA9719D2599BDDA9DC204_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mE4496161F9AFD9888660CE4DF8DB0D7018709415_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m6CCF5B20C9236710066E82FF4E0F6D6556108A9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mA5AA65AE6600F69DA73A9482E01A9C7E1EB1AA8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m00D6D868F0770BBF0C19BAC1227F731D4B7DACBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m5AC2A0C9304BBCACA03BF941DEE5EE45A304BA81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mD19A272B7E29A5C74EE2B009A730A415B987C20E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m02984D3944FBC28155D08313117BD97B33BD34ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3B9D7D2783B71FBCFA8E7A4FCD0DC1D832AF15ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m55F8FD407CB162716E61407D1402A5BD4777CDA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mAF22C7EEE7291D6105DF5BE9A731BCF8ABCE416F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mAB26A499275E27048FCA112A9A09B44A246E3439_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m14CD98262463C5CFD081DE1CF30325E54465CD3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m30D25249FAC0ABED05EC883C3769981CE997D506_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m5B9250B911BF687C8756F9FC2E00CB1A4FD64261_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mED474DD881A0663446A498339BBD9E1D886E8027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m328BFA89C97C733CC6AD076DB07BF7C54260DA40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA9529ABC2FC47D5FDA7F19B99014BBDF143699AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB4FAD14AEE4B5BBCD54B018F6E476B5520E614D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC8AC4D30BC88505D41B56F1E36EBB808FC865EEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m05A8722B7EEB4A9C0808D59E2D7BC7CAB3541251_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m13162FAE74B984D6C013F3A5B05A728DBCAF83FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD956870668D4185EEB9EDD8E9F37761330605115_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFE4F71DA033C9E46B7D121D12459797E95E28F98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m00D4E1B3A1CF1CFAF76A909E9685EAA967F36FC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6726F1A1B6003C68E41A87DF5B95E12C9E2D3FAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAAE5A1AF305D3C07675A3CB48978DFA3DBBDE105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFF80B3C1EEA2272DC9C9C406B8B4C133B5783C96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisDDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3_m3F6C330F016464C1194FC6BA1B19F9EECD75EECB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E_mFC967C747EBD9243645338F6354950607860E587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m80AF8133DC5E5D3146C5E1C409C954C4489C11BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA2B9D3A6C3ABC4854B390752B661771C006B970D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m8401F6267478520608AB44F8974AFFA8149E3885_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListStack_1_AccessedRecently_mDB63793BF580F4D7A3FF131DDF0E9D8257B2BEED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListStack_1_Cull_m93CA704A6B3DECFA5D9E063FE21F9143032C15F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListStack_1_Pop_m0D7F6D399D6A2446E28E80505CB2CFA7DF26EAC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListStack_1_Push_m91645A6ED34849D1CE95C77F4085867D2A3D96B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListStack_1__ctor_mCB196DE8D59C337293C52ACCA90613724BFD447E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListStack_1_get_Entries_mF8D69AA5E0F4661D119BB33F8891327AB465B350_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m22C2CA8AE542817D5A101CFB12F54763C17AD395_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m86D816DEC0B16450B896FF97C0FDAD3198408672_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD20FB87F36F039EAC79BD464D074D4528169EA25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m31BE6C97595546CE522A25B08FE8A197128A1C23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m6A56E543624C20998FAF394128301812F0735A90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7665DD52EEA724599E7B40EDA7833B2A95AAF5DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mEC4C1C10CEDABC59A848BF3EDEED1F1EAFD7F49A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m3E21F21AF1EC55BEEFDDB85D7C1FB068A6C6FD5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mA852B2303B6D398DB9364A4644C6E3FB2F937DED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m8C9464A31156B49005C11C0839D6FF551D2C3C3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m22C2613354A2FA86E71281167C1F1659EC2850B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m233B19BA48716E4C5523F9EB4C12BD4F37183AEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m32596732A6F500B4A40C36BB953BA173BA96F61B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB2916C38F51CA0A8D84F9912D6DD9E6A92CA3050_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mFDC83DC798EFC2F108B93C1FB32F1EF9F1987FFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1D50CAD13A3F962AA9023E58E1CA31D3A49299F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m679A39A544A69D1F9F69D06CFA77FED4F15706D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisProjectileSpawner_t0149853AA262DB8F2CD0D139A39133C4809F6742_m286210AD5F16C3AF5C49154964D2B195AC9FB493_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResettableObjectCaches_1_Retrieve_m9A4A159CECD5222E873447F13384D70B96D80F60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResettableObjectCaches_1_Store_mC686120FAA0A00C911F82C7C4E6480C05400F071_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResettableObjectCaches_1_Store_mD143930884778AB7AF3D25B7D93F0077E389251E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3C__CleanupChecksU3Ed__12_System_Collections_IEnumerator_Reset_m43706A770C3402FDAE08127BCD6ED917B0FA73B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3C__ResetU3Ed__13_System_Collections_IEnumerator_Reset_m17BC5D6169A50A58E1E200C66D4075A84784A2A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t3DA0B00EDA4D9B5EEF86565540C0D57446BE2303 
{
};

// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData>
struct Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t132882E75E5BFC450D0FA2CE2683394E0A004769* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tF14EBA87B3C5D8B2A5AD41F8E37675EE74393896* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC48530E76588B7E27A1AD2A192DEFA50B55881BA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>
struct Dictionary_2_t508F4CB243B163280E2C476A4977BED583F2ABEF  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA8AD13FA326A0F49943622DA0BBCEE939CBC5C4F* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tB0F0EE6E8B94572109A1945D160C45846A885DC7* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tEF406DE206D409F970B2F5D2E31DA9B96136DB36* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7ED48D7F5F895684C377F90C33DDD1E0CCACDE61* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC78C079422A1A521923655A578A8FA3FEC378771* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA250E7D856E5178DDAACCBBCBBA2BC8EBC5A2EE1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Transform>
struct Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA477E34F31714BE344BB608D37F21ECF74AEF9BF* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t0A57B2F148D43C374CEB66B1EE428EB77007DD59* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tD94AE4964757B84F9AA8AC824125DE34C1F0D7F1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// GameKit.Dependencies.Utilities.ObjectPooling.ListStack`1<UnityEngine.GameObject>
struct ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F  : public RuntimeObject
{
	// System.Collections.Generic.List`1<GameObject> GameKit.Dependencies.Utilities.ObjectPooling.ListStack`1::<Entries>k__BackingField
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___U3CEntriesU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<System.Single> GameKit.Dependencies.Utilities.ObjectPooling.ListStack`1::<EntriesAddedTimes>k__BackingField
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___U3CEntriesAddedTimesU3Ek__BackingField_1;
	// System.Single GameKit.Dependencies.Utilities.ObjectPooling.ListStack`1::_lastAccessedTime
	float ____lastAccessedTime_2;
};

// GameKit.Dependencies.Utilities.ObjectPooling.ListStack`1<System.Object>
struct ListStack_1_t6543B5304E8418236EAC2FEBBC81B53D909BC453  : public RuntimeObject
{
	// System.Collections.Generic.List`1<GameObject> GameKit.Dependencies.Utilities.ObjectPooling.ListStack`1::<Entries>k__BackingField
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___U3CEntriesU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<System.Single> GameKit.Dependencies.Utilities.ObjectPooling.ListStack`1::<EntriesAddedTimes>k__BackingField
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___U3CEntriesAddedTimesU3Ek__BackingField_1;
	// System.Single GameKit.Dependencies.Utilities.ObjectPooling.ListStack`1::_lastAccessedTime
	float ____lastAccessedTime_2;
};

// System.Collections.Generic.List`1<GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData>
struct List_1_t479A7E3D4251D7C7ED14CDAB6C24C659F23D70D1  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ButtonDataU5BU5D_t7D0F3EA7572B8D5BF5DC3F520B6132B639FEF7DA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t479A7E3D4251D7C7ED14CDAB6C24C659F23D70D1_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ButtonDataU5BU5D_t7D0F3EA7572B8D5BF5DC3F520B6132B639FEF7DA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<GameKit.Dependencies.Utilities.ObjectPooling.PoolData>
struct List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PoolDataU5BU5D_t9AA78F6620FDD8E2FBB7D799E637B863D9F2D15C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PoolDataU5BU5D_t9AA78F6620FDD8E2FBB7D799E637B863D9F2D15C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeData>
struct List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ResizeDataU5BU5D_t44D109CE8669EC27274E70CC522CDD7871B49A1F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ResizeDataU5BU5D_t44D109CE8669EC27274E70CC522CDD7871B49A1F* ___s_emptyArray_5;
};

// GameKit.Dependencies.Utilities.ApplicationState
struct ApplicationState_tA96D168E847A237D20FE79D7BC103CBB4A46E61B  : public RuntimeObject
{
};

struct ApplicationState_tA96D168E847A237D20FE79D7BC103CBB4A46E61B_StaticFields
{
	// System.Boolean GameKit.Dependencies.Utilities.ApplicationState::_isQuitting
	bool ____isQuitting_0;
};
struct Il2CppArrayBounds;

// GameKit.Dependencies.Utilities.Arrays
struct Arrays_t586CFF62C78640B28034251F78E8B7B1C6EAAD92  : public RuntimeObject
{
};

struct Arrays_t586CFF62C78640B28034251F78E8B7B1C6EAAD92_StaticFields
{
	// System.Random GameKit.Dependencies.Utilities.Arrays::_random
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ____random_0;
	// System.Text.StringBuilder GameKit.Dependencies.Utilities.Arrays::_stringBuilder
	StringBuilder_t* ____stringBuilder_1;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// GameKit.Dependencies.Utilities.Booleans
struct Booleans_t29CD6FD618B1E5ED9BA15F67668CC68317537837  : public RuntimeObject
{
};

// GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData
struct ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11  : public RuntimeObject
{
	// System.String GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_0;
	// System.String GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData::<Key>k__BackingField
	String_t* ___U3CKeyU3Ek__BackingField_1;
	// GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData/PressedDelegate GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData::_delegate
	PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D* ____delegate_2;
};

// GameKit.Dependencies.Utilities.Types.CanvasTracker
struct CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A  : public RuntimeObject
{
};

struct CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_StaticFields
{
	// System.Collections.Generic.List`1<System.Object> GameKit.Dependencies.Utilities.Types.CanvasTracker::_inputBlockingCanvases
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____inputBlockingCanvases_0;
	// System.Collections.Generic.List`1<System.Object> GameKit.Dependencies.Utilities.Types.CanvasTracker::_openCanvases
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____openCanvases_1;
};

// GameKit.Dependencies.Utilities.CanvaseGroups
struct CanvaseGroups_t7F683796F8AEEB2DBF6DAC9AEFD43C6F112B4202  : public RuntimeObject
{
};

// GameKit.Dependencies.Utilities.Collider2DExtensions
struct Collider2DExtensions_tA73F1D444F1DAA0FDD6D698190BAEAA5781CEB1D  : public RuntimeObject
{
};

// GameKit.Dependencies.Utilities.ColliderExtensions
struct ColliderExtensions_t0F261C1E21221E1AF1525C4BEBC5598CEEB17549  : public RuntimeObject
{
};

// GameKit.Dependencies.Utilities.DictionaryFN
struct DictionaryFN_tDBFD3AAFB0DE1CD4C7ABA71007D754A365968013  : public RuntimeObject
{
};

// GameKit.Dependencies.Utilities.Disks
struct Disks_t97C88AC4D23EFE45BA696F7B7CD590943731F777  : public RuntimeObject
{
};

// GameKit.Dependencies.Utilities.Enums
struct Enums_t84FA0CC239A55206948C45B2E8286646FAB0FF33  : public RuntimeObject
{
};

// GameKit.Dependencies.Utilities.Floats
struct Floats_t54BC254F0C30D7F4D5A75148FE42847BA7143FCA  : public RuntimeObject
{
};

struct Floats_t54BC254F0C30D7F4D5A75148FE42847BA7143FCA_StaticFields
{
	// System.Random GameKit.Dependencies.Utilities.Floats::_random
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ____random_0;
};

// GameKit.Dependencies.Utilities.Hashing
struct Hashing_tA8589B1C72017A03CA470A963F8A5D05BF3897DF  : public RuntimeObject
{
};

// GameKit.Dependencies.Utilities.Ints
struct Ints_tC6848D8097CAB468EA0114D30F81F9746AFCF275  : public RuntimeObject
{
};

struct Ints_tC6848D8097CAB468EA0114D30F81F9746AFCF275_StaticFields
{
	// System.Random GameKit.Dependencies.Utilities.Ints::_random
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ____random_0;
};

// GameKit.Dependencies.Utilities.Layers
struct Layers_t4E7DAB7E32C44CB8266DEFBE777E6D649FB70834  : public RuntimeObject
{
};

struct Layers_t4E7DAB7E32C44CB8266DEFBE777E6D649FB70834_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> GameKit.Dependencies.Utilities.Layers::_interactablesLayers
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ____interactablesLayers_0;
};

// GameKit.Dependencies.Utilities.LayoutGroups
struct LayoutGroups_t5F645276461547E8D78C2E74516A305064628F91  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// GameKit.Dependencies.Utilities.Materials
struct Materials_tAB91CCDCAED61FC0AA177A5CFE15EB4D4073CD80  : public RuntimeObject
{
};

// GameKit.Dependencies.Utilities.Maths
struct Maths_tB9724E998DE4B01161CD08C26382352212699392  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// GameKit.Dependencies.Utilities.Objects
struct Objects_tFA941062A03B8B32B015670813E35167BBAEECC4  : public RuntimeObject
{
};

// GameKit.Dependencies.Utilities.Particles
struct Particles_t80F05CA5FF24184416AB2CE5DDE32A1240700E07  : public RuntimeObject
{
};

// System.IO.Path
struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC  : public RuntimeObject
{
};

struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields
{
	// System.Char[] System.IO.Path::InvalidPathChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___InvalidPathChars_0;
	// System.Char System.IO.Path::AltDirectorySeparatorChar
	Il2CppChar ___AltDirectorySeparatorChar_1;
	// System.Char System.IO.Path::DirectorySeparatorChar
	Il2CppChar ___DirectorySeparatorChar_2;
	// System.Char System.IO.Path::PathSeparator
	Il2CppChar ___PathSeparator_3;
	// System.String System.IO.Path::DirectorySeparatorStr
	String_t* ___DirectorySeparatorStr_4;
	// System.Char System.IO.Path::VolumeSeparatorChar
	Il2CppChar ___VolumeSeparatorChar_5;
	// System.Char[] System.IO.Path::PathSeparatorChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___PathSeparatorChars_6;
	// System.Boolean System.IO.Path::dirEqualsVolume
	bool ___dirEqualsVolume_7;
	// System.Char[] System.IO.Path::trimEndCharsWindows
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsWindows_8;
	// System.Char[] System.IO.Path::trimEndCharsUnix
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsUnix_9;
};

// GameKit.Dependencies.Utilities.ObjectPooling.PoolData
struct PoolData_t80E4C4FD24F727D017C06769387611B94D561514  : public RuntimeObject
{
	// UnityEngine.GameObject GameKit.Dependencies.Utilities.ObjectPooling.PoolData::Prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Prefab_0;
	// GameKit.Dependencies.Utilities.ObjectPooling.ListStack`1<UnityEngine.GameObject> GameKit.Dependencies.Utilities.ObjectPooling.PoolData::Objects
	ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F* ___Objects_1;
	// System.Single GameKit.Dependencies.Utilities.ObjectPooling.PoolData::_expirationDuration
	float ____expirationDuration_2;
};

// GameKit.Dependencies.Utilities.Quaternions
struct Quaternions_tE622F90967BCF50BA7084BCD0DA8DFFFE3D94381  : public RuntimeObject
{
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_3;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_4;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_5;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_7;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_6;
};

// GameKit.Dependencies.Utilities.Types.ScrollbarValueSetter
struct ScrollbarValueSetter_t6755DD99A3F95482A76FD237B8A316F4C39FBC9A  : public RuntimeObject
{
	// UnityEngine.UI.Scrollbar GameKit.Dependencies.Utilities.Types.ScrollbarValueSetter::_scrollBar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ____scrollBar_0;
	// System.Single GameKit.Dependencies.Utilities.Types.ScrollbarValueSetter::_value
	float ____value_1;
	// System.Int32 GameKit.Dependencies.Utilities.Types.ScrollbarValueSetter::_updatedFrame
	int32_t ____updatedFrame_2;
	// System.Int32 GameKit.Dependencies.Utilities.Types.ScrollbarValueSetter::_fixFrames
	int32_t ____fixFrames_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// GameKit.Dependencies.Utilities.Strings
struct Strings_t70C09623C9D0306D2BF3BF65BDEB11971AA4BDF1  : public RuntimeObject
{
};

// GameKit.Dependencies.Utilities.Types.TimedOperation
struct TimedOperation_tEA1D7A9F17A808037B3501BAA9E1C927A61AB266  : public RuntimeObject
{
	// System.Single GameKit.Dependencies.Utilities.Types.TimedOperation::_interval
	float ____interval_0;
	// System.Boolean GameKit.Dependencies.Utilities.Types.TimedOperation::_scaledTime
	bool ____scaledTime_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> GameKit.Dependencies.Utilities.Types.TimedOperation::_operationTimes
	Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* ____operationTimes_2;
	// System.Single GameKit.Dependencies.Utilities.Types.TimedOperation::_lastGlobalTime
	float ____lastGlobalTime_3;
};

// GameKit.Dependencies.Utilities.Transforms
struct Transforms_t7A454FCC827B644BDAA77AC05E09ECC0E697ED60  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeData
struct ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF  : public RuntimeObject
{
	// System.Byte GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeData::Remaining
	uint8_t ___Remaining_0;
	// GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeDelegate GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeData::Delegate
	ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800* ___Delegate_1;
};

// System.Collections.Generic.List`1/Enumerator<GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData>
struct Enumerator_tACBE48EF11B345D0AFBEE76B21A4EBC4161923EF 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t479A7E3D4251D7C7ED14CDAB6C24C659F23D70D1* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeData>
struct Enumerator_t0BD96D30E72411E84B0DCD31D4274694CA2BC402 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData>
struct KeyValuePair_2_tC55380E7813CAA616F1EA07EA30FE0108A387124 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	PoolData_t80E4C4FD24F727D017C06769387611B94D561514* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// GameKit.Dependencies.Utilities.Types.FloatRange
struct FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 
{
	// System.Single GameKit.Dependencies.Utilities.Types.FloatRange::Minimum
	float ___Minimum_0;
	// System.Single GameKit.Dependencies.Utilities.Types.FloatRange::Maximum
	float ___Maximum_1;
};

// GameKit.Dependencies.Utilities.Types.CanvasContainers.ImageButtonData
struct ImageButtonData_tB44D13315533BA4A897470789513A2FAAD2ED6BC  : public ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11
{
	// UnityEngine.Sprite GameKit.Dependencies.Utilities.Types.CanvasContainers.ImageButtonData::<DisplayImage>k__BackingField
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___U3CDisplayImageU3Ek__BackingField_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// GameKit.Dependencies.Utilities.Types.IntRange
struct IntRange_tDBF89C29334F29F61F3725518A96191FB4F4D951 
{
	// System.Int32 GameKit.Dependencies.Utilities.Types.IntRange::Minimum
	int32_t ___Minimum_0;
	// System.Int32 GameKit.Dependencies.Utilities.Types.IntRange::Maximum
	int32_t ___Maximum_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine_3;
	// System.String System.IO.TextWriter::CoreNewLineStr
	String_t* ___CoreNewLineStr_4;
	// System.IFormatProvider System.IO.TextWriter::_internalFormatProvider
	RuntimeObject* ____internalFormatProvider_5;
};

struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null_1;
	// System.Char[] System.IO.TextWriter::s_coreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine_2;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData
struct DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2 
{
	// System.Single GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData::StoreTime
	float ___StoreTime_0;
	// System.Boolean GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData::ParentPooler
	bool ___ParentPooler_1;
};
// Native definition for P/Invoke marshalling of GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData
struct DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2_marshaled_pinvoke
{
	float ___StoreTime_0;
	int32_t ___ParentPooler_1;
};
// Native definition for COM marshalling of GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData
struct DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2_marshaled_com
{
	float ___StoreTime_0;
	int32_t ___ParentPooler_1;
};

// UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData>
struct Enumerator_tE37673C8E892467091D89DFAFF5197B50243ABC5 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tC55380E7813CAA616F1EA07EA30FE0108A387124 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>
struct KeyValuePair_2_t8795A67BF30F3E7DC0C1C03E9B1BF6EAEFBD996D 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2 ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>
struct KeyValuePair_2_t1089FBBD4130EF28F4019D7530D38FE4C472C0FE 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2 ___value_1;
};

// System.Nullable`1<UnityEngine.Vector2>
struct Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value_1;
};

// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// GameKit.Dependencies.Utilities.Types.FloatRange2D
struct FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A 
{
	// GameKit.Dependencies.Utilities.Types.FloatRange GameKit.Dependencies.Utilities.Types.FloatRange2D::X
	FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 ___X_0;
	// GameKit.Dependencies.Utilities.Types.FloatRange GameKit.Dependencies.Utilities.Types.FloatRange2D::Y
	FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 ___Y_1;
};

// GameKit.Dependencies.Inspectors.GroupAttribute
struct GroupAttribute_t4ECEDB3E307BA4A4AB6A908129323E4041840B9B  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String GameKit.Dependencies.Inspectors.GroupAttribute::name
	String_t* ___name_0;
	// System.Boolean GameKit.Dependencies.Inspectors.GroupAttribute::foldEverything
	bool ___foldEverything_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// GameKit.Dependencies.Utilities.Types.SceneAttribute
struct SceneAttribute_t64707DCEB2046DFF315133276946A0114591F862  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
};

// GameKit.Dependencies.Inspectors.ShowIfAttribute
struct ShowIfAttribute_t8E349A53643E969632B14FD4801DAE98D3CDBC32  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String GameKit.Dependencies.Inspectors.ShowIfAttribute::<comparedPropertyName>k__BackingField
	String_t* ___U3CcomparedPropertyNameU3Ek__BackingField_0;
	// System.Object GameKit.Dependencies.Inspectors.ShowIfAttribute::<comparedValue>k__BackingField
	RuntimeObject* ___U3CcomparedValueU3Ek__BackingField_1;
	// GameKit.Dependencies.Inspectors.ShowIfAttribute/DisablingType GameKit.Dependencies.Inspectors.ShowIfAttribute::<disablingType>k__BackingField
	int32_t ___U3CdisablingTypeU3Ek__BackingField_2;
};

// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
	// System.IO.Stream System.IO.StreamWriter::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_7;
	// System.Text.Encoding System.IO.StreamWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_8;
	// System.Text.Encoder System.IO.StreamWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_9;
	// System.Byte[] System.IO.StreamWriter::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_10;
	// System.Char[] System.IO.StreamWriter::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_11;
	// System.Int32 System.IO.StreamWriter::_charPos
	int32_t ____charPos_12;
	// System.Int32 System.IO.StreamWriter::_charLen
	int32_t ____charLen_13;
	// System.Boolean System.IO.StreamWriter::_autoFlush
	bool ____autoFlush_14;
	// System.Boolean System.IO.StreamWriter::_haveWrittenPreamble
	bool ____haveWrittenPreamble_15;
	// System.Boolean System.IO.StreamWriter::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamWriter::_asyncWriteTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncWriteTask_17;
};

struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_StaticFields
{
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* ___Null_6;
};

// GameKit.Dependencies.Utilities.Types.Vector2Range
struct Vector2Range_t928456C4CB441EE9A1A037819DA897A13F5B0BA4 
{
	// GameKit.Dependencies.Utilities.Types.FloatRange GameKit.Dependencies.Utilities.Types.Vector2Range::X
	FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 ___X_0;
	// GameKit.Dependencies.Utilities.Types.FloatRange GameKit.Dependencies.Utilities.Types.Vector2Range::Y
	FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 ___Y_1;
};

// GameKit.Dependencies.Utilities.Vectors
struct Vectors_tB271C58533ED793021EEFFF605684AECF414D033  : public RuntimeObject
{
};

struct Vectors_tB271C58533ED793021EEFFF605684AECF414D033_StaticFields
{
	// UnityEngine.Vector3 GameKit.Dependencies.Utilities.Vectors::VECTOR3_ZERO
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___VECTOR3_ZERO_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>
struct Enumerator_tD09996E2D7BF24BF9A7A97B1BD082487422214C6 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t508F4CB243B163280E2C476A4977BED583F2ABEF* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t8795A67BF30F3E7DC0C1C03E9B1BF6EAEFBD996D ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>
struct Enumerator_t8B6C4F1BDECE79D7EBD8559485CC296ECC12F73D 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t3F0EFF9153AB3CA4F01EFD7352761A3A577EF1FC* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t1089FBBD4130EF28F4019D7530D38FE4C472C0FE ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__Reset>d__13
struct U3C__ResetU3Ed__13_tAA6080EEC3AA5D7FB8E14FE3BACA96785E9E62BB  : public RuntimeObject
{
	// System.Int32 GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__Reset>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__Reset>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Boolean GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__Reset>d__13::destroyActive
	bool ___destroyActive_2;
	// GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__Reset>d__13::<>4__this
	ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* ___U3CU3E4__this_3;
	// UnityEngine.WaitForEndOfFrame GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__Reset>d__13::<endOfFrame>5__1
	WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* ___U3CendOfFrameU3E5__1_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__Reset>d__13::<objects>5__2
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___U3CobjectsU3E5__2_5;
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData> GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__Reset>d__13::<>s__3
	Enumerator_tE37673C8E892467091D89DFAFF5197B50243ABC5 ___U3CU3Es__3_6;
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData> GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__Reset>d__13::<value>5__4
	KeyValuePair_2_tC55380E7813CAA616F1EA07EA30FE0108A387124 ___U3CvalueU3E5__4_7;
	// System.Int32 GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__Reset>d__13::<i>5__5
	int32_t ___U3CiU3E5__5_8;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData/PressedDelegate
struct PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D  : public MulticastDelegate_t
{
};

// GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__CleanupChecks>d__12
struct U3C__CleanupChecksU3Ed__12_tD80DBEC4FB6FA79CF82657DD30C4FFA83DDA0D9B  : public RuntimeObject
{
	// System.Int32 GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__CleanupChecks>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__CleanupChecks>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__CleanupChecks>d__12::<>4__this
	ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* ___U3CU3E4__this_2;
	// System.Int32 GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__CleanupChecks>d__12::<poolIndex>5__1
	int32_t ___U3CpoolIndexU3E5__1_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__CleanupChecks>d__12::<keysToRemove>5__2
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___U3CkeysToRemoveU3E5__2_4;
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData> GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__CleanupChecks>d__12::<>s__3
	Enumerator_tD09996E2D7BF24BF9A7A97B1BD082487422214C6 ___U3CU3Es__3_5;
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData> GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__CleanupChecks>d__12::<item>5__4
	KeyValuePair_2_t8795A67BF30F3E7DC0C1C03E9B1BF6EAEFBD996D ___U3CitemU3E5__4_6;
	// System.Int32 GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__CleanupChecks>d__12::<i>5__5
	int32_t ___U3CiU3E5__5_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__CleanupChecks>d__12::<culledObjects>5__6
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___U3CculledObjectsU3E5__6_8;
	// System.Int32 GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__CleanupChecks>d__12::<i>5__7
	int32_t ___U3CiU3E5__7_9;
};

// GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeDelegate
struct ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// GameKit.Dependencies.Utilities.Types.CanvasGroupFader
struct CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GameKit.Dependencies.Utilities.Types.CanvasGroupFader/FadeGoalType GameKit.Dependencies.Utilities.Types.CanvasGroupFader::<FadeGoal>k__BackingField
	int32_t ___U3CFadeGoalU3Ek__BackingField_4;
	// UnityEngine.CanvasGroup GameKit.Dependencies.Utilities.Types.CanvasGroupFader::CanvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___CanvasGroup_5;
	// System.Boolean GameKit.Dependencies.Utilities.Types.CanvasGroupFader::UpdateCanvasBlocking
	bool ___UpdateCanvasBlocking_6;
	// System.Single GameKit.Dependencies.Utilities.Types.CanvasGroupFader::FadeInDuration
	float ___FadeInDuration_7;
	// System.Single GameKit.Dependencies.Utilities.Types.CanvasGroupFader::FadeOutDuration
	float ___FadeOutDuration_8;
	// System.Boolean GameKit.Dependencies.Utilities.Types.CanvasGroupFader::_completedOnce
	bool ____completedOnce_9;
};

// UnityEngine.CircleCollider2D
struct CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// GameKit.Dependencies.Utilities.Types.DDOL
struct DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3_StaticFields
{
	// GameKit.Dependencies.Utilities.Types.DDOL GameKit.Dependencies.Utilities.Types.DDOL::_instance
	DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3* ____instance_4;
};

// GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool
struct ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::_dataExpirationDelay
	float ____dataExpirationDelay_4;
	// UnityEngine.Transform GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::_collector
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____collector_6;
	// System.Collections.Generic.List`1<GameKit.Dependencies.Utilities.ObjectPooling.PoolData> GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::_pools
	List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA* ____pools_7;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Transform> GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::_categoryChildren
	Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4* ____categoryChildren_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData> GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::_poolPrefabs
	Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D* ____poolPrefabs_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData> GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::_activeObjects
	Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D* ____activeObjects_10;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData> GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::_delayedStoreObjects
	Dictionary_2_t508F4CB243B163280E2C476A4977BED583F2ABEF* ____delayedStoreObjects_11;
};

struct ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74_StaticFields
{
	// GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::_instance
	ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* ____instance_5;
};

// GameKit.Dependencies.Utilities.Types.CanvasContainers.OptionMenuButton
struct OptionMenuButton_t5FBC86B97F4399FEB00518C805878822E8938D22  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData GameKit.Dependencies.Utilities.Types.CanvasContainers.OptionMenuButton::<ButtonData>k__BackingField
	ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* ___U3CButtonDataU3Ek__BackingField_4;
	// TMPro.TextMeshProUGUI GameKit.Dependencies.Utilities.Types.CanvasContainers.OptionMenuButton::_text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____text_5;
};

// GameKit.Dependencies.Utilities.ObjectPooling.Examples.Projectile
struct Projectile_t1AF0B52CB892B339A2055635668AFA848C0348A9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single GameKit.Dependencies.Utilities.ObjectPooling.Examples.Projectile::DestroyDelay
	float ___DestroyDelay_4;
	// System.Single GameKit.Dependencies.Utilities.ObjectPooling.Examples.Projectile::MoveRate
	float ___MoveRate_5;
	// GameKit.Dependencies.Utilities.ObjectPooling.Examples.ProjectileSpawner GameKit.Dependencies.Utilities.ObjectPooling.Examples.Projectile::_spawner
	ProjectileSpawner_t0149853AA262DB8F2CD0D139A39133C4809F6742* ____spawner_6;
	// UnityEngine.MeshRenderer[] GameKit.Dependencies.Utilities.ObjectPooling.Examples.Projectile::_renderers
	MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* ____renderers_7;
	// UnityEngine.Vector3 GameKit.Dependencies.Utilities.ObjectPooling.Examples.Projectile::_moveDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____moveDirection_8;
	// System.Boolean GameKit.Dependencies.Utilities.ObjectPooling.Examples.Projectile::_exitingPlayMode
	bool ____exitingPlayMode_9;
};

// GameKit.Dependencies.Utilities.ObjectPooling.Examples.ProjectileSpawner
struct ProjectileSpawner_t0149853AA262DB8F2CD0D139A39133C4809F6742  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GameKit.Dependencies.Utilities.ObjectPooling.Examples.ProjectileSpawner::Prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Prefab_4;
	// System.Boolean GameKit.Dependencies.Utilities.ObjectPooling.Examples.ProjectileSpawner::UsePool
	bool ___UsePool_5;
	// System.Single GameKit.Dependencies.Utilities.ObjectPooling.Examples.ProjectileSpawner::_instantiateDelay
	float ____instantiateDelay_6;
	// System.Single GameKit.Dependencies.Utilities.ObjectPooling.Examples.ProjectileSpawner::_nextInstantiate
	float ____nextInstantiate_7;
};

// GameKit.Dependencies.Utilities.Types.RectTransformResizer
struct RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeData> GameKit.Dependencies.Utilities.Types.RectTransformResizer::_resizeDatas
	List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A* ____resizeDatas_4;
};

struct RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E_StaticFields
{
	// GameKit.Dependencies.Utilities.Types.RectTransformResizer GameKit.Dependencies.Utilities.Types.RectTransformResizer::_instance
	RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E* ____instance_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer
struct FloatingContainer_tD4E61098F9070AA28CF23BB647982FEECE88483B  : public CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B
{
	// UnityEngine.RectTransform GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___RectTransform_10;
	// System.Boolean GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::UseEdgeAvoidance
	bool ___UseEdgeAvoidance_11;
	// UnityEngine.Vector2 GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::EdgeAvoidance
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___EdgeAvoidance_12;
	// UnityEngine.Vector3 GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::_positionGoal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____positionGoal_13;
	// UnityEngine.Quaternion GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::_rotationGoal
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____rotationGoal_14;
	// UnityEngine.Vector3 GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::_scaleGoal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____scaleGoal_15;
	// System.Nullable`1<UnityEngine.Vector2> GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::_edgeAvoidance
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD ____edgeAvoidance_16;
};

// GameKit.Dependencies.Utilities.Types.OptionMenuButtons.FloatingOptions
struct FloatingOptions_t465B7FA595A7E427B5FF2EE7880A208184398DCA  : public CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B
{
	// System.Collections.Generic.List`1<GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData> GameKit.Dependencies.Utilities.Types.OptionMenuButtons.FloatingOptions::Buttons
	List_1_t479A7E3D4251D7C7ED14CDAB6C24C659F23D70D1* ___Buttons_10;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_4;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_5;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalMinSize_8;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalPreferredSize_9;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalFlexibleSize_10;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* ___m_RectChildren_11;
};

// GameKit.Dependencies.Utilities.Types.CanvasContainers.OptionMenuImageButton
struct OptionMenuImageButton_t28F50366E31801CDC5953CD073C541DF384161A7  : public OptionMenuButton_t5FBC86B97F4399FEB00518C805878822E8938D22
{
	// UnityEngine.UI.Image GameKit.Dependencies.Utilities.Types.CanvasContainers.OptionMenuImageButton::_image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____image_6;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingImage
struct FloatingImage_tCB44A89A44F39DAECF4D19D9863A268A110E1442  : public FloatingContainer_tD4E61098F9070AA28CF23BB647982FEECE88483B
{
	// UnityEngine.UI.Image GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingImage::Renderer
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___Renderer_17;
};

// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940  : public LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE
{
	// UnityEngine.UI.GridLayoutGroup/Corner UnityEngine.UI.GridLayoutGroup::m_StartCorner
	int32_t ___m_StartCorner_12;
	// UnityEngine.UI.GridLayoutGroup/Axis UnityEngine.UI.GridLayoutGroup::m_StartAxis
	int32_t ___m_StartAxis_13;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_CellSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_CellSize_14;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_Spacing
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Spacing_15;
	// UnityEngine.UI.GridLayoutGroup/Constraint UnityEngine.UI.GridLayoutGroup::m_Constraint
	int32_t ___m_Constraint_16;
	// System.Int32 UnityEngine.UI.GridLayoutGroup::m_ConstraintCount
	int32_t ___m_ConstraintCount_17;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// GameKit.Dependencies.Utilities.Types.CanvasContainers.ResizableContainer
struct ResizableContainer_t634A38C6B576E1142CF1F6EAB8964A75134FC626  : public FloatingContainer_tD4E61098F9070AA28CF23BB647982FEECE88483B
{
	// GameKit.Dependencies.Utilities.Types.FloatRange2D GameKit.Dependencies.Utilities.Types.CanvasContainers.ResizableContainer::SizeLimits
	FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A ___SizeLimits_17;
};

// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_20;
	// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::m_Direction
	int32_t ___m_Direction_21;
	// System.Single UnityEngine.UI.Scrollbar::m_Value
	float ___m_Value_22;
	// System.Single UnityEngine.UI.Scrollbar::m_Size
	float ___m_Size_23;
	// System.Int32 UnityEngine.UI.Scrollbar::m_NumberOfSteps
	int32_t ___m_NumberOfSteps_24;
	// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::m_OnValueChanged
	ScrollEvent_tDDBE21D44D65DF069C54FE3ACF7668D976E6BBB6* ___m_OnValueChanged_25;
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_ContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ContainerRect_26;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_27;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Scrollbar::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_28;
	// UnityEngine.Coroutine UnityEngine.UI.Scrollbar::m_PointerDownRepeat
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_PointerDownRepeat_29;
	// System.Boolean UnityEngine.UI.Scrollbar::isPointerDownAndNotDragging
	bool ___isPointerDownAndNotDragging_30;
	// System.Boolean UnityEngine.UI.Scrollbar::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_31;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6  : public RuntimeArray
{
	ALIGN_FIELD (8) ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* m_Items[1];

	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446  : public RuntimeArray
{
	ALIGN_FIELD (8) MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* m_Items[1];

	inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<GameObject> GameKit.Dependencies.Utilities.ObjectPooling.ListStack`1<System.Object>::get_Entries()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ListStack_1_get_Entries_m5F7AF6EDF64DB6472283A9CA28ADF88D68C22959_gshared_inline (ListStack_1_t6543B5304E8418236EAC2FEBBC81B53D909BC453* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4A3C656A50490F87F8F8A736997B9F31D0EA6BF5_gshared (Dictionary_2_t3F0EFF9153AB3CA4F01EFD7352761A3A577EF1FC* __this, RuntimeObject* ___key0, DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2 ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// GameObject GameKit.Dependencies.Utilities.ObjectPooling.ListStack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListStack_1_Pop_m81B2C672C996B36038C438F389DFA7C5EBFB94E4_gshared (ListStack_1_t6543B5304E8418236EAC2FEBBC81B53D909BC453* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ListStack`1<System.Object>::Push(GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListStack_1_Push_m5DFED56841CBCD947FCE1565FD6DCBE219C2B78A_gshared (ListStack_1_t6543B5304E8418236EAC2FEBBC81B53D909BC453* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD1FE5CA061240BB42E9DB2B79E64F0B5E974C506_gshared (Dictionary_2_t3F0EFF9153AB3CA4F01EFD7352761A3A577EF1FC* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mA9501CC018795BF286E6F7E3DF99C473928CD5E0_gshared (Dictionary_2_t3F0EFF9153AB3CA4F01EFD7352761A3A577EF1FC* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8B6C4F1BDECE79D7EBD8559485CC296ECC12F73D Dictionary_2_GetEnumerator_m33593682CBDB874B51B12DF04D3AA422BDEF4313_gshared (Dictionary_2_t3F0EFF9153AB3CA4F01EFD7352761A3A577EF1FC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m771846FCA0B9A59FD0E2261CB8A118B132D504CC_gshared (Enumerator_t8B6C4F1BDECE79D7EBD8559485CC296ECC12F73D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t1089FBBD4130EF28F4019D7530D38FE4C472C0FE Enumerator_get_Current_m2FE708A7EA61E48401599C38221CD7C18E330458_gshared_inline (Enumerator_t8B6C4F1BDECE79D7EBD8559485CC296ECC12F73D* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2 KeyValuePair_2_get_Value_m902BA09076040C83E90C4D128FF908781B7C6AD3_gshared_inline (KeyValuePair_2_t1089FBBD4130EF28F4019D7530D38FE4C472C0FE* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m47FE9CFE39D556B8C289C78E7F6B11A785FFE262_gshared_inline (KeyValuePair_2_t1089FBBD4130EF28F4019D7530D38FE4C472C0FE* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mEC41FBB870870C5619D7F3054E0A355D3C5B8D17_gshared (Enumerator_t8B6C4F1BDECE79D7EBD8559485CC296ECC12F73D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mE103A907BBF9A608987418182B57368C197041C5_gshared (Dictionary_2_t3F0EFF9153AB3CA4F01EFD7352761A3A577EF1FC* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m0C545E90DA4EA51B2942F2834F38E1F0BBE9F90F_gshared (Dictionary_2_t3F0EFF9153AB3CA4F01EFD7352761A3A577EF1FC* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ListStack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListStack_1__ctor_m11994DA3CD306E3A2F40BFB8707F7AF9A4D414C0_gshared (ListStack_1_t6543B5304E8418236EAC2FEBBC81B53D909BC453* __this, const RuntimeMethod* method) ;
// System.Boolean GameKit.Dependencies.Utilities.ObjectPooling.ListStack`1<System.Object>::AccessedRecently(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListStack_1_AccessedRecently_m6A88A8356ECD5E24119C78780E7EB93368FC8D5C_gshared (ListStack_1_t6543B5304E8418236EAC2FEBBC81B53D909BC453* __this, float ___threshold0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<GameObject> GameKit.Dependencies.Utilities.ObjectPooling.ListStack`1<System.Object>::Cull(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ListStack_1_Cull_m3184D401806B62BD89D5A919A2CBE203FA3F25AE_gshared (ListStack_1_t6543B5304E8418236EAC2FEBBC81B53D909BC453* __this, float ___threshold0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean GameKit.Dependencies.Utilities.Arrays::AddUnique<System.Object>(System.Collections.Generic.List`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AddUnique_TisRuntimeObject_mC7A8A9DAAE6CC900FBECED30182E25BF66346AE9_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___list0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.ResettableObjectCaches`1<System.Object>::Store(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResettableObjectCaches_1_Store_mDB336FA2DF176C79D1801174EB6751CEC14B98DA_gshared (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T GameKit.Dependencies.Utilities.ResettableObjectCaches`1<System.Object>::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResettableObjectCaches_1_Retrieve_mF87502939351012CC0A6D41A83AD062E090019F4_gshared (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7090A0C6890D4FE1C83844A6616D8E9A5AEC802C_gshared (Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m2326BEBCBC09583A4D6574D1D222A11000AE43F5_gshared (Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB* __this, RuntimeObject* ___key0, float* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mB3364B977072656B662C984B4F7E39394C341B2A_gshared (Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB* __this, RuntimeObject* ___key0, float ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Vector2>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_gshared_inline (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Vector2>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_gshared (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Vector2>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_gshared (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_gshared_inline (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Vector3>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_gshared (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method) ;

// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::remove_quitting(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_quitting_m9DC9D4165EDB0FD93AB893655E26BF73566D2C1B (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::add_quitting(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_quitting_m5767AC63F23ABFD5BC3D60710906643BA536CCC5 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_blocksRaycasts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_interactable_m86928BB0894EF3F06BC7BE63594272FBA0DAC757 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.CanvaseGroups::SetBlockingType(UnityEngine.CanvasGroup,GameKit.Dependencies.Utilities.CanvasGroupBlockingType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvaseGroups_SetBlockingType_m772F467E25CDA46863D019EAFA71EF1B3A6781E5 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___group0, int32_t ___blockingType1, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.CanvaseGroups::SetActive(UnityEngine.CanvasGroup,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvaseGroups_SetActive_m43D078FF6B0D2B3FE8C91A4116B1269E8C3126B6 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___group0, bool ___active1, bool ___setAlpha2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxCollider_get_center_mC370C79F9FC9398D0DD080500FA2EE14FC6E36C7 (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.CapsuleCollider::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CapsuleCollider_get_direction_mE6D56B0990E3F2FACA983679C251949FE3FC6DFA (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.CapsuleCollider::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA (float ___val10, float ___val21, const RuntimeMethod* method) ;
// System.Single UnityEngine.CapsuleCollider::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.CapsuleCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CapsuleCollider_get_center_mC12CE0A66A1104CEB7D23F39596D0E45578419C2 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.SphereCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SphereCollider_get_center_m122A197607CD350873539A0EEE3BA10E8BE1759E (SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.SphereCollider::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SphereCollider_get_radius_m1BB513491906E76A4F71929E3DB72A1542309697 (SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Collider2D::get_offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Collider2D_get_offset_m6DC45B352DDE28C7B08607BFA3BECEC6E5F31914 (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.BoxCollider2D::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BoxCollider2D_get_size_mBB657ADFC58A79CDFDB7478956BBD9032E41D3D1 (BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.CircleCollider2D::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CircleCollider2D_get_radius_m767A7E871FC706A078E903C3A96780884F844444 (CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* __this, const RuntimeMethod* method) ;
// System.String GameKit.Dependencies.Utilities.Disks::FormatPlatformPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Disks_FormatPlatformPath_m53338F9F4326E5FB1FF1103B192E666EBD532D4B (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7 (String_t* ___path0, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6 (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriter__ctor_m54CE9C47ED974C0589400DA9BC2AB3F7F481595B (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.UInt64 System.Convert::ToUInt64(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_mAED581BDC2A2EC0295EC6FB7C7D525571FEA4A0B (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___f0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___f0, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromSeconds_m4401B50C0CA831134068595C6AF2F1CA92AAF80F (double ___value0, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::get_Hours()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Hours_m770B4B777A816E051EFDA317C28DA9A4F39D6CFB (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::get_Minutes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Minutes_m93E37D01CD6DA2DE5B35609D740D322E270B678F (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::get_Seconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Seconds_m8CA21613DC31BD025C5D30D41BAD0ED50827578B (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mA0069B20491E14DA829FAD261C279A5143B2FAED (float ___value0, const RuntimeMethod* method) ;
// System.Single System.Convert::ToSingle(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_mF6ADEF60A6A97E9E7E410D8D15B26F2D5995151E (double ___value0, const RuntimeMethod* method) ;
// System.Single GameKit.Dependencies.Utilities.Floats::RandomInclusiveRange(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Floats_RandomInclusiveRange_m7B475B6ED935825A0594E14DFA589F4F4990AFA0 (float ___minimum0, float ___maximum1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) ;
// System.Int32 GameKit.Dependencies.Utilities.Ints::RandomInclusiveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ints_RandomInclusiveRange_mCAD43967ADE3D9E3F06CB36A00DA61E1EC7CD165 (int32_t ___minimum0, int32_t ___maximum1, const RuntimeMethod* method) ;
// System.UInt32 GameKit.Dependencies.Utilities.Hashing::GetStableHashU32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Hashing_GetStableHashU32_m401FAE346226B5872FB9117BA0A0644E3DB15925 (String_t* ___txt0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::PadLeft(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F (String_t* __this, int32_t ___totalWidth0, Il2CppChar ___paddingChar1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, const RuntimeMethod*))Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_gshared)(__this, method);
}
// System.Boolean UnityEngine.Physics::GetIgnoreLayerCollision(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_GetIgnoreLayerCollision_m6FAFF3D7B295E3ECC55DF0F3032AD4DB6210255D (int32_t ___layer10, int32_t ___layer21, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF_gshared)(__this, ___key0, ___value1, method);
}
// System.Void GameKit.Dependencies.Utilities.Layers::TryInitializeInteractableLayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Layers_TryInitializeInteractableLayers_m96B2110202A79747CB4D3AA20C786A6790E48205 (const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
inline int32_t Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_gshared)(__this, ___key0, method);
}
// System.Int32 GameKit.Dependencies.Utilities.Layers::GetInteractableLayersValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Layers_GetInteractableLayersValue_mC4B7C7931EF3A25B069A28EFBF2A9B845689F383 (int32_t ___layer0, const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222 (int32_t ___intVal0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* __this, const RuntimeMethod* method) ;
// System.Int32 GameKit.Dependencies.Utilities.Layers::LayerValueToLayerNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Layers_LayerValueToLayerNumber_m87885A124275BB2A10D5860B84BADCED0B393AD2 (int32_t ___bitmask0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::get_cellSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GridLayoutGroup_get_cellSize_m30D8A051F44C8EE0C87B6D6CDDC00C2592A78B6D (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Single GameKit.Dependencies.Utilities.Particles::StopParticleSystem(UnityEngine.ParticleSystem[],System.Boolean,UnityEngine.ParticleSystemStopBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particles_StopParticleSystem_mB6E38D4ED3B5D1EA387A26ABFC370B8724C03D9C (ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* ___systems0, bool ___stopLoopingOnly1, int32_t ___stopBehavior2, const RuntimeMethod* method) ;
// System.Single GameKit.Dependencies.Utilities.Particles::StopParticleSystem(UnityEngine.ParticleSystem,System.Boolean,UnityEngine.ParticleSystemStopBehavior,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particles_StopParticleSystem_m1A387442392D0BCFF363F412FEF93CBC9AB821B4 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___system0, bool ___stopLoopingOnly1, int32_t ___stopBehavior2, bool ___stopChildren3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.ParticleSystem>()
inline ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MainModule::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_duration_mDCB80E6BD3B6B2DFB92E41FBCCA154D7E7150EB1 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ParticleSystem_get_time_mDB612DCED4B4345E40BE98597A5895F48BC0ECDC (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_loop_m4F75CD377C0555635995F7C1F8D580517473EDF8 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean,UnityEngine.ParticleSystemStopBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_mB5761CB85083F593FFEC3D27931CACF1855A6326 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, bool ___withChildren0, int32_t ___stopBehavior1, const RuntimeMethod* method) ;
// System.Single GameKit.Dependencies.Utilities.Quaternions::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quaternions_Angle_mECF5A040D7422A660671D7004C88A33A633ADB28 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, bool ___precise2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Equality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m7A165D1B2CDCE967F4522BA710CE7FA05EFA2982 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m490810CB7ADA9230AC0F8D78E213A8EFED129F55 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 GameKit.Dependencies.Utilities.Transforms::SizeDeltaScaled(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Transforms_SizeDeltaScaled_m4F725AF34B2C64A7F473E70F0B6B6FD29B226E8E (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___f0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 GameKit.Dependencies.Utilities.Vectors::Lerp3(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vectors_Lerp3_m3B5447196DF45A1CCAC3FD641848189F9EE2E5FA (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___c2, float ___percent3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 GameKit.Dependencies.Utilities.Vectors::Lerp3(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vectors_Lerp3_m49BCDEAADFF8CC538CB3D3F4F796662CF3CF931A (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___c2, float ___percent3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::__CleanupChecks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectPool___CleanupChecks_mB60EEAF5EF5F789DFA4D2CDA6B5B345778C1A576 (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__CleanupChecks>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C__CleanupChecksU3Ed__12__ctor_m9682F4A185B134B59F7FBF8258779634E577ADB0 (U3C__CleanupChecksU3Ed__12_tD80DBEC4FB6FA79CF82657DD30C4FFA83DDA0D9B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__Reset>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C__ResetU3Ed__13__ctor_m749FCB699ACBC2D96C7AB923C381CC1DA123CAB4 (U3C__ResetU3Ed__13_tAA6080EEC3AA5D7FB8E14FE3BACA96785E9E62BB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<GameObject> GameKit.Dependencies.Utilities.ObjectPooling.ListStack`1<UnityEngine.GameObject>::get_Entries()
inline List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ListStack_1_get_Entries_mF8D69AA5E0F4661D119BB33F8891327AB465B350_inline (ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F* __this, const RuntimeMethod* method)
{
	return ((  List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* (*) (ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F*, const RuntimeMethod*))ListStack_1_get_Entries_m5F7AF6EDF64DB6472283A9CA28ADF88D68C22959_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<GameKit.Dependencies.Utilities.ObjectPooling.PoolData>::Remove(T)
inline bool List_1_Remove_m8C9464A31156B49005C11C0839D6FF551D2C3C3F (List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA* __this, PoolData_t80E4C4FD24F727D017C06769387611B94D561514* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA*, PoolData_t80E4C4FD24F727D017C06769387611B94D561514*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m5AC2A0C9304BBCACA03BF941DEE5EE45A304BA81 (Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___key0, PoolData_t80E4C4FD24F727D017C06769387611B94D561514** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, PoolData_t80E4C4FD24F727D017C06769387611B94D561514**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// GameKit.Dependencies.Utilities.ObjectPooling.PoolData GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::CreatePool(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoolData_t80E4C4FD24F727D017C06769387611B94D561514* ObjectPool_CreatePool_mE4A64E88001A480AE7B7165261BE583C853ACE72 (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::RetrieveInternal(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPool_RetrieveInternal_mB374E0452149F015AA4A008ADB56BA9A0CFD85D1 (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___poolObject0, const RuntimeMethod* method) ;
// UnityEngine.GameObject GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::ReturnPooledObject(UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPool_ReturnPooledObject_m327FBD45EA07B392BAA31CC2422CC6545C4A0C17 (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab0, PoolData_t80E4C4FD24F727D017C06769387611B94D561514** ___pool1, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::SetGameObjectPositionRotation(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_SetGameObjectPositionRotation_m8593A25BBE4B260A135BF113DAE161B4118A2CC1 (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___result0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// UnityEngine.GameObject GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::FinalizeRetrieve(UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPool_FinalizeRetrieve_mF9E383C97A08F0C5AFBA96AD47F4E5807B24D40D (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___result0, PoolData_t80E4C4FD24F727D017C06769387611B94D561514* ___pool1, const RuntimeMethod* method) ;
// UnityEngine.GameObject GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::RetrieveInternal(UnityEngine.GameObject,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPool_RetrieveInternal_mCCAFE842ED35585ED3EA5FAD6234564BA2593DA6 (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___poolObject0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___instantiateInWorldSpace2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// UnityEngine.GameObject GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::RetrieveInternal(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPool_RetrieveInternal_m34AD79FEB4721BCFF4499CE548B4A520975C9789 (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___poolObject0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mED474DD881A0663446A498339BBD9E1D886E8027 (Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___key0, PoolData_t80E4C4FD24F727D017C06769387611B94D561514* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, PoolData_t80E4C4FD24F727D017C06769387611B94D561514*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::StoreInternal(UnityEngine.GameObject,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_StoreInternal_m18E0F36B1F21E1DF44A4DB035505492EC47BE8F2 (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instantiatedObject0, float ___delay1, bool ___parentPooler2, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData::.ctor(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelayedStoreData__ctor_mCA18EA5D75E4DAA028FF0A4ACC200A69DEAAC63D (DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2* __this, float ___storeTime0, bool ___parentPooler1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m30D25249FAC0ABED05EC883C3769981CE997D506 (Dictionary_2_t508F4CB243B163280E2C476A4977BED583F2ABEF* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___key0, DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t508F4CB243B163280E2C476A4977BED583F2ABEF*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2, const RuntimeMethod*))Dictionary_2_set_Item_m4A3C656A50490F87F8F8A736997B9F31D0EA6BF5_gshared)(__this, ___key0, ___value1, method);
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::StoreInternal(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_StoreInternal_mC83892C703062B762B1D138C15F1339FB0ACE051 (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instantiatedObject0, bool ___parentPooler1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData>::Remove(TKey)
inline bool Dictionary_2_Remove_m6CCF5B20C9236710066E82FF4E0F6D6556108A9B (Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// GameKit.Dependencies.Utilities.ObjectPooling.PoolData GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::ReturnPoolData(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoolData_t80E4C4FD24F727D017C06769387611B94D561514* ObjectPool_ReturnPoolData_m343AB162E4AAAB6403A40E3D0136C90308FD8548 (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab0, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::AddToPool(UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_AddToPool_mEFB8308811E966677223F094E6A412B9D5F1FF6E (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instantiatedObject0, PoolData_t80E4C4FD24F727D017C06769387611B94D561514* ___pool1, bool ___parentPooler2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Transform>::Clear()
inline void Dictionary_2_Clear_m7337575D54E678C7A71036F626F5061EB90D40C2 (Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// GameObject GameKit.Dependencies.Utilities.ObjectPooling.ListStack`1<UnityEngine.GameObject>::Pop()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ListStack_1_Pop_m0D7F6D399D6A2446E28E80505CB2CFA7DF26EAC9 (ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F*, const RuntimeMethod*))ListStack_1_Pop_m81B2C672C996B36038C438F389DFA7C5EBFB94E4_gshared)(__this, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.PoolData::.ctor(UnityEngine.GameObject,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolData__ctor_m2B71B627EE442771E6DA154F34A45D83935C26F7 (PoolData_t80E4C4FD24F727D017C06769387611B94D561514* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab0, float ___expirationDuration1, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<GameKit.Dependencies.Utilities.ObjectPooling.PoolData>::Add(T)
inline void List_1_Add_mD20FB87F36F039EAC79BD464D074D4528169EA25_inline (List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA* __this, PoolData_t80E4C4FD24F727D017C06769387611B94D561514* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA*, PoolData_t80E4C4FD24F727D017C06769387611B94D561514*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ListStack`1<UnityEngine.GameObject>::Push(GameObject)
inline void ListStack_1_Push_m91645A6ED34849D1CE95C77F4085867D2A3D96B5 (ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))ListStack_1_Push_m5DFED56841CBCD947FCE1565FD6DCBE219C2B78A_gshared)(__this, ___item0, method);
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::ParentPooler(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_ParentPooler_m33A3F613EB1B3F45ECA4BAB1D1A33ED88D1034B2 (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___poolObject0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::MakeCollector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_MakeCollector_m18E36258365BB73FABF7558A97973A7ADAA81C88 (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Transform>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mD19A272B7E29A5C74EE2B009A730A415B987C20E (Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4* __this, String_t* ___key0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4*, String_t*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Transform>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m5B9250B911BF687C8756F9FC2E00CB1A4FD64261 (Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4* __this, String_t* ___key0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4*, String_t*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<GameKit.Dependencies.Utilities.ObjectPooling.PoolData>::.ctor()
inline void List_1__ctor_m233B19BA48716E4C5523F9EB4C12BD4F37183AEF (List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Transform>::.ctor()
inline void Dictionary_2__ctor_mAF22C7EEE7291D6105DF5BE9A731BCF8ABCE416F (Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData>::.ctor()
inline void Dictionary_2__ctor_m55F8FD407CB162716E61407D1402A5BD4777CDA8 (Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>::.ctor()
inline void Dictionary_2__ctor_m02984D3944FBC28155D08313117BD97B33BD34ED (Dictionary_2_t508F4CB243B163280E2C476A4977BED583F2ABEF* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t508F4CB243B163280E2C476A4977BED583F2ABEF*, const RuntimeMethod*))Dictionary_2__ctor_mD1FE5CA061240BB42E9DB2B79E64F0B5E974C506_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>::get_Count()
inline int32_t Dictionary_2_get_Count_mAB26A499275E27048FCA112A9A09B44A246E3439 (Dictionary_2_t508F4CB243B163280E2C476A4977BED583F2ABEF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t508F4CB243B163280E2C476A4977BED583F2ABEF*, const RuntimeMethod*))Dictionary_2_get_Count_mA9501CC018795BF286E6F7E3DF99C473928CD5E0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>::GetEnumerator()
inline Enumerator_tD09996E2D7BF24BF9A7A97B1BD082487422214C6 Dictionary_2_GetEnumerator_mE4496161F9AFD9888660CE4DF8DB0D7018709415 (Dictionary_2_t508F4CB243B163280E2C476A4977BED583F2ABEF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD09996E2D7BF24BF9A7A97B1BD082487422214C6 (*) (Dictionary_2_t508F4CB243B163280E2C476A4977BED583F2ABEF*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m33593682CBDB874B51B12DF04D3AA422BDEF4313_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>::Dispose()
inline void Enumerator_Dispose_mC8AC4D30BC88505D41B56F1E36EBB808FC865EEE (Enumerator_tD09996E2D7BF24BF9A7A97B1BD082487422214C6* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD09996E2D7BF24BF9A7A97B1BD082487422214C6*, const RuntimeMethod*))Enumerator_Dispose_m771846FCA0B9A59FD0E2261CB8A118B132D504CC_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>::get_Current()
inline KeyValuePair_2_t8795A67BF30F3E7DC0C1C03E9B1BF6EAEFBD996D Enumerator_get_Current_m00D4E1B3A1CF1CFAF76A909E9685EAA967F36FC9_inline (Enumerator_tD09996E2D7BF24BF9A7A97B1BD082487422214C6* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t8795A67BF30F3E7DC0C1C03E9B1BF6EAEFBD996D (*) (Enumerator_tD09996E2D7BF24BF9A7A97B1BD082487422214C6*, const RuntimeMethod*))Enumerator_get_Current_m2FE708A7EA61E48401599C38221CD7C18E330458_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>::get_Value()
inline DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2 KeyValuePair_2_get_Value_m8401F6267478520608AB44F8974AFFA8149E3885_inline (KeyValuePair_2_t8795A67BF30F3E7DC0C1C03E9B1BF6EAEFBD996D* __this, const RuntimeMethod* method)
{
	return ((  DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2 (*) (KeyValuePair_2_t8795A67BF30F3E7DC0C1C03E9B1BF6EAEFBD996D*, const RuntimeMethod*))KeyValuePair_2_get_Value_m902BA09076040C83E90C4D128FF908781B7C6AD3_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>::get_Key()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* KeyValuePair_2_get_Key_mA2B9D3A6C3ABC4854B390752B661771C006B970D_inline (KeyValuePair_2_t8795A67BF30F3E7DC0C1C03E9B1BF6EAEFBD996D* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (KeyValuePair_2_t8795A67BF30F3E7DC0C1C03E9B1BF6EAEFBD996D*, const RuntimeMethod*))KeyValuePair_2_get_Key_m47FE9CFE39D556B8C289C78E7F6B11A785FFE262_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::Store(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_Store_m71E6781EC58E9E6707E9E4720DC1C722A4058023 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instantiatedObject0, bool ___parentPooler1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>::MoveNext()
inline bool Enumerator_MoveNext_mD956870668D4185EEB9EDD8E9F37761330605115 (Enumerator_tD09996E2D7BF24BF9A7A97B1BD082487422214C6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD09996E2D7BF24BF9A7A97B1BD082487422214C6*, const RuntimeMethod*))Enumerator_MoveNext_mEC41FBB870870C5619D7F3054E0A355D3C5B8D17_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>::Remove(TKey)
inline bool Dictionary_2_Remove_mA5AA65AE6600F69DA73A9482E01A9C7E1EB1AA8C (Dictionary_2_t508F4CB243B163280E2C476A4977BED583F2ABEF* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t508F4CB243B163280E2C476A4977BED583F2ABEF*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Dictionary_2_Remove_mE103A907BBF9A608987418182B57368C197041C5_gshared)(__this, ___key0, method);
}
// System.Int32 System.Collections.Generic.List`1<GameKit.Dependencies.Utilities.ObjectPooling.PoolData>::get_Count()
inline int32_t List_1_get_Count_mFDC83DC798EFC2F108B93C1FB32F1EF9F1987FFC_inline (List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<GameKit.Dependencies.Utilities.ObjectPooling.PoolData>::get_Item(System.Int32)
inline PoolData_t80E4C4FD24F727D017C06769387611B94D561514* List_1_get_Item_m1D50CAD13A3F962AA9023E58E1CA31D3A49299F0 (List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  PoolData_t80E4C4FD24F727D017C06769387611B94D561514* (*) (List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean GameKit.Dependencies.Utilities.ObjectPooling.PoolData::PoolExpired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoolData_PoolExpired_mB7877E34B926FC4589F608405C8EF9DC472FE2AE (PoolData_t80E4C4FD24F727D017C06769387611B94D561514* __this, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::DestroyPool(GameKit.Dependencies.Utilities.ObjectPooling.PoolData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_DestroyPool_m583BEFCED2133B296625E0C6D541B0FBE45B1A70 (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, PoolData_t80E4C4FD24F727D017C06769387611B94D561514* ___poolData0, bool ___removeFromList1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<GameKit.Dependencies.Utilities.ObjectPooling.PoolData>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mA852B2303B6D398DB9364A4644C6E3FB2F937DED (List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Collections.Generic.List`1<UnityEngine.GameObject> GameKit.Dependencies.Utilities.ObjectPooling.PoolData::Cull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* PoolData_Cull_m5A4C006706852526AA7C0990071C40F4B50BEAC3 (PoolData_t80E4C4FD24F727D017C06769387611B94D561514* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData>::Clear()
inline void Dictionary_2_Clear_mA5AD7A322EF82C29C737978C227E7FDA6363809B (Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<GameKit.Dependencies.Utilities.ObjectPooling.PoolData>::Clear()
inline void List_1_Clear_m6A56E543624C20998FAF394128301812F0735A90_inline (List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData>::Clear()
inline void Dictionary_2_Clear_m93DE10A8B7FB144BFF486534086B965B8744B235 (Dictionary_2_t508F4CB243B163280E2C476A4977BED583F2ABEF* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t508F4CB243B163280E2C476A4977BED583F2ABEF*, const RuntimeMethod*))Dictionary_2_Clear_m0C545E90DA4EA51B2942F2834F38E1F0BBE9F90F_gshared)(__this, method);
}
// System.Void GameKit.Dependencies.Utilities.Transforms::DestroyChildren(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transforms_DestroyChildren_mA2FAF62522A251F014F7F12FCA9B82B7F274A770 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___t0, bool ___destroyImmediately1, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData>::GetEnumerator()
inline Enumerator_tE37673C8E892467091D89DFAFF5197B50243ABC5 Dictionary_2_GetEnumerator_mCF5610BCC916CD07B0FDA9719D2599BDDA9DC204 (Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE37673C8E892467091D89DFAFF5197B50243ABC5 (*) (Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData>::Dispose()
inline void Enumerator_Dispose_m328BFA89C97C733CC6AD076DB07BF7C54260DA40 (Enumerator_tE37673C8E892467091D89DFAFF5197B50243ABC5* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE37673C8E892467091D89DFAFF5197B50243ABC5*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData>::get_Current()
inline KeyValuePair_2_tC55380E7813CAA616F1EA07EA30FE0108A387124 Enumerator_get_Current_mFF80B3C1EEA2272DC9C9C406B8B4C133B5783C96_inline (Enumerator_tE37673C8E892467091D89DFAFF5197B50243ABC5* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tC55380E7813CAA616F1EA07EA30FE0108A387124 (*) (Enumerator_tE37673C8E892467091D89DFAFF5197B50243ABC5*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData>::get_Key()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* KeyValuePair_2_get_Key_m80AF8133DC5E5D3146C5E1C409C954C4489C11BD_inline (KeyValuePair_2_tC55380E7813CAA616F1EA07EA30FE0108A387124* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (KeyValuePair_2_tC55380E7813CAA616F1EA07EA30FE0108A387124*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData>::MoveNext()
inline bool Enumerator_MoveNext_m13162FAE74B984D6C013F3A5B05A728DBCAF83FF (Enumerator_tE37673C8E892467091D89DFAFF5197B50243ABC5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE37673C8E892467091D89DFAFF5197B50243ABC5*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ListStack`1<UnityEngine.GameObject>::.ctor()
inline void ListStack_1__ctor_mCB196DE8D59C337293C52ACCA90613724BFD447E (ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F* __this, const RuntimeMethod* method)
{
	((  void (*) (ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F*, const RuntimeMethod*))ListStack_1__ctor_m11994DA3CD306E3A2F40BFB8707F7AF9A4D414C0_gshared)(__this, method);
}
// System.Boolean GameKit.Dependencies.Utilities.ObjectPooling.ListStack`1<UnityEngine.GameObject>::AccessedRecently(System.Single)
inline bool ListStack_1_AccessedRecently_mDB63793BF580F4D7A3FF131DDF0E9D8257B2BEED (ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F* __this, float ___threshold0, const RuntimeMethod* method)
{
	return ((  bool (*) (ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F*, float, const RuntimeMethod*))ListStack_1_AccessedRecently_m6A88A8356ECD5E24119C78780E7EB93368FC8D5C_gshared)(__this, ___threshold0, method);
}
// System.Collections.Generic.List`1<GameObject> GameKit.Dependencies.Utilities.ObjectPooling.ListStack`1<UnityEngine.GameObject>::Cull(System.Single)
inline List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ListStack_1_Cull_m93CA704A6B3DECFA5D9E063FE21F9143032C15F7 (ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F* __this, float ___threshold0, const RuntimeMethod* method)
{
	return ((  List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* (*) (ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F*, float, const RuntimeMethod*))ListStack_1_Cull_m3184D401806B62BD89D5A919A2CBE203FA3F25AE_gshared)(__this, ___threshold0, method);
}
// T UnityEngine.Object::FindObjectOfType<GameKit.Dependencies.Utilities.ObjectPooling.Examples.ProjectileSpawner>()
inline ProjectileSpawner_t0149853AA262DB8F2CD0D139A39133C4809F6742* Object_FindObjectOfType_TisProjectileSpawner_t0149853AA262DB8F2CD0D139A39133C4809F6742_m286210AD5F16C3AF5C49154964D2B195AC9FB493 (const RuntimeMethod* method)
{
	return ((  ProjectileSpawner_t0149853AA262DB8F2CD0D139A39133C4809F6742* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.MeshRenderer>()
inline MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* Component_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m820D038F52BDC71ECDEAE04ED05D98CCF63E9243 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::Store(UnityEngine.GameObject,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_Store_m3E5F07E1D9086E38BF00DB32E34DB2DAD0857249 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instantiatedObject0, float ___delay1, bool ___parentPooler2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503 (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// UnityEngine.GameObject GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::Retrieve(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPool_Retrieve_m74A7B334A965D936DD9AD491B8004E4A3BA28604 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___poolObject0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
inline int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean GameKit.Dependencies.Utilities.Types.CanvasTracker::IsEmptyCollectionOrLastEntry(System.Object,System.Collections.Generic.List`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CanvasTracker_IsEmptyCollectionOrLastEntry_mDACFC9963D15D593FCDDDEC15DA0328533EDC936 (RuntimeObject* ___canvas0, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___collection1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
inline void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasTracker::<RemoveNullReferences>g__RemoveNullEntries|12_0(System.Collections.Generic.List`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasTracker_U3CRemoveNullReferencesU3Eg__RemoveNullEntriesU7C12_0_mDA60B80DC1BF6205B32AEB8EF1F3BD54F69FEB5A (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___collection0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
inline bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Boolean GameKit.Dependencies.Utilities.Arrays::AddUnique<System.Object>(System.Collections.Generic.List`1<T>,T)
inline bool Arrays_AddUnique_TisRuntimeObject_mC7A8A9DAAE6CC900FBECED30182E25BF66346AE9 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___list0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))Arrays_AddUnique_TisRuntimeObject_mC7A8A9DAAE6CC900FBECED30182E25BF66346AE9_gshared)(___list0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
inline bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeData>::GetEnumerator()
inline Enumerator_t0BD96D30E72411E84B0DCD31D4274694CA2BC402 List_1_GetEnumerator_m7665DD52EEA724599E7B40EDA7833B2A95AAF5DC (List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t0BD96D30E72411E84B0DCD31D4274694CA2BC402 (*) (List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeData>::Dispose()
inline void Enumerator_Dispose_mB4FAD14AEE4B5BBCD54B018F6E476B5520E614D2 (Enumerator_t0BD96D30E72411E84B0DCD31D4274694CA2BC402* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0BD96D30E72411E84B0DCD31D4274694CA2BC402*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeData>::get_Current()
inline ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF* Enumerator_get_Current_mAAE5A1AF305D3C07675A3CB48978DFA3DBBDE105_inline (Enumerator_t0BD96D30E72411E84B0DCD31D4274694CA2BC402* __this, const RuntimeMethod* method)
{
	return ((  ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF* (*) (Enumerator_t0BD96D30E72411E84B0DCD31D4274694CA2BC402*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void GameKit.Dependencies.Utilities.ResettableObjectCaches`1<GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeData>::Store(T)
inline void ResettableObjectCaches_1_Store_mC686120FAA0A00C911F82C7C4E6480C05400F071 (ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF* ___value0, const RuntimeMethod* method)
{
	((  void (*) (ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF*, const RuntimeMethod*))ResettableObjectCaches_1_Store_mDB336FA2DF176C79D1801174EB6751CEC14B98DA_gshared)(___value0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeData>::MoveNext()
inline bool Enumerator_MoveNext_m05A8722B7EEB4A9C0808D59E2D7BC7CAB3541251 (Enumerator_t0BD96D30E72411E84B0DCD31D4274694CA2BC402* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t0BD96D30E72411E84B0DCD31D4274694CA2BC402*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void GameKit.Dependencies.Utilities.Types.RectTransformResizer::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransformResizer_Resize_m8E1D6BC0DE85406BA19A433E01C8265348C9C704 (RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeData>::get_Item(System.Int32)
inline ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF* List_1_get_Item_m679A39A544A69D1F9F69D06CFA77FED4F15706D8 (List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF* (*) (List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeDelegate::Invoke(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ResizeDelegate_Invoke_m73EA3C7483D6F50719066DCF51ECF1705AE5183A_inline (ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800* __this, bool ___complete0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeData>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m3E21F21AF1EC55BEEFDDB85D7C1FB068A6C6FD5D (List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeData>::get_Count()
inline int32_t List_1_get_Count_mB2916C38F51CA0A8D84F9912D6DD9E6A92CA3050_inline (List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<GameKit.Dependencies.Utilities.Types.RectTransformResizer>()
inline RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E* GameObject_AddComponent_TisRectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E_mFC967C747EBD9243645338F6354950607860E587 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.Types.RectTransformResizer::Resize_Internal(GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransformResizer_Resize_Internal_mB9024FABF2BBCDD37F4EA28089DFED8D300C6B16 (RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E* __this, ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800* ___del0, const RuntimeMethod* method) ;
// T GameKit.Dependencies.Utilities.ResettableObjectCaches`1<GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeData>::Retrieve()
inline ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF* ResettableObjectCaches_1_Retrieve_m9A4A159CECD5222E873447F13384D70B96D80F60 (const RuntimeMethod* method)
{
	return ((  ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF* (*) (const RuntimeMethod*))ResettableObjectCaches_1_Retrieve_mF87502939351012CC0A6D41A83AD062E090019F4_gshared)(method);
}
// System.Void System.Collections.Generic.List`1<GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeData>::Add(T)
inline void List_1_Add_m22C2CA8AE542817D5A101CFB12F54763C17AD395_inline (List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A* __this, ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A*, ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeData>::.ctor()
inline void List_1__ctor_m22C2613354A2FA86E71281167C1F1659EC2850B6 (List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// GameKit.Dependencies.Utilities.Types.CanvasGroupFader/FadeGoalType GameKit.Dependencies.Utilities.Types.CanvasGroupFader::get_FadeGoal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CanvasGroupFader_get_FadeGoal_m995F4C89615A3735054CE3A41F972BBB9A07D3C0_inline (CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.CanvasGroup::get_alpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::set_FadeGoal(GameKit.Dependencies.Utilities.Types.CanvasGroupFader/FadeGoalType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasGroupFader_set_FadeGoal_mC111C5B45030759E2E1E8C30DC9513FA325DF58B_inline (CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::Fade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroupFader_Fade_mC6563C9D69042C978FB8E8D6DA3A70320300E943 (CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* __this, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::SetFadeGoal(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroupFader_SetFadeGoal_m2B4B940AED8AF2449C64A793029DCE4B8E9CE7CD (CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* __this, bool ___fadeIn0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<GameKit.Dependencies.Utilities.Types.DDOL>()
inline DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3* GameObject_AddComponent_TisDDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3_m3F6C330F016464C1194FC6BA1B19F9EECD75EECB (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void GameKit.Dependencies.Utilities.Types.FloatRange::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatRange__ctor_m9EE180C6C3AA894E8E2E49FA22EC5289650F1075 (FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96* __this, float ___minimum0, float ___maximum1, const RuntimeMethod* method) ;
// System.Single GameKit.Dependencies.Utilities.Types.FloatRange::RandomInclusive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatRange_RandomInclusive_m81CF15B4488923F3A0EE88EE9BE8A27EDF1D4A39 (FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single GameKit.Dependencies.Utilities.Types.FloatRange::Lerp(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatRange_Lerp_m243C1E3C6E6BC8412DF2E99B1F571A87B186EBF8 (FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96* __this, float ___percent0, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.Types.FloatRange2D::.ctor(GameKit.Dependencies.Utilities.Types.FloatRange,GameKit.Dependencies.Utilities.Types.FloatRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatRange2D__ctor_m164B4B23981CB572A7D7D6F7E16E024D13BE9EFB (FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A* __this, FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 ___x0, FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 ___y1, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.Types.FloatRange2D::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatRange2D__ctor_mA0B09015F162D5B02000A6E2F3643207F99CBAB7 (FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A* __this, float ___xMin0, float ___xMax1, float ___yMin2, float ___yMax3, const RuntimeMethod* method) ;
// System.Single GameKit.Dependencies.Utilities.Types.FloatRange2D::ClampX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatRange2D_ClampX_mC70B3B0628E89A4521C3FBEAA9770CCC6196D72D (FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A* __this, float ___original0, const RuntimeMethod* method) ;
// System.Single GameKit.Dependencies.Utilities.Types.FloatRange2D::ClampY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatRange2D_ClampY_mF99C691E4B99035179E0E110B395A349F91EE5BE (FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A* __this, float ___original0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 GameKit.Dependencies.Utilities.Types.FloatRange2D::Clamp(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 FloatRange2D_Clamp_mDD221A525BEF604F2A8FC1BAC591F90FE39E53E6 (FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___original0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 GameKit.Dependencies.Utilities.Types.FloatRange2D::Clamp(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FloatRange2D_Clamp_m1734114C562D1D17273A8A8B19F919DC139A51A4 (FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___original0, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.Types.IntRange::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntRange__ctor_mDB536BC377D76FEEA57F87A83CF27B3A93A12F46 (IntRange_tDBF89C29334F29F61F3725518A96191FB4F4D951* __this, int32_t ___minimum0, int32_t ___maximum1, const RuntimeMethod* method) ;
// System.Int32 GameKit.Dependencies.Utilities.Ints::RandomExclusiveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ints_RandomExclusiveRange_m1139031BB599099D1BE4F28D6B05A7223C40CBDE (int32_t ___minimum0, int32_t ___maximum1, const RuntimeMethod* method) ;
// System.Single GameKit.Dependencies.Utilities.Types.IntRange::RandomExclusive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IntRange_RandomExclusive_m1389CE12AF9410F6B1B3F1EB99C01378608EDE8F (IntRange_tDBF89C29334F29F61F3725518A96191FB4F4D951* __this, const RuntimeMethod* method) ;
// System.Single GameKit.Dependencies.Utilities.Types.IntRange::RandomInclusive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IntRange_RandomInclusive_m954A68E5449B23E54277008830C0E494BBC4375A (IntRange_tDBF89C29334F29F61F3725518A96191FB4F4D951* __this, const RuntimeMethod* method) ;
// System.Int32 GameKit.Dependencies.Utilities.Types.IntRange::Clamp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntRange_Clamp_m32F60608282E4F5046BAD3B4EA80AC177DA83D75 (IntRange_tDBF89C29334F29F61F3725518A96191FB4F4D951* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D (PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Scrollbar::set_value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrollbar_set_value_m8F7815DB02D4A69B33B091FC5F674609F070D804 (Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor()
inline void Dictionary_2__ctor_m3B9D7D2783B71FBCFA8E7A4FCD0DC1D832AF15ED (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9*, const RuntimeMethod*))Dictionary_2__ctor_m7090A0C6890D4FE1C83844A6616D8E9A5AEC802C_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m00D6D868F0770BBF0C19BAC1227F731D4B7DACBA (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* __this, String_t* ___key0, float* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9*, String_t*, float*, const RuntimeMethod*))Dictionary_2_TryGetValue_m2326BEBCBC09583A4D6574D1D222A11000AE43F5_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m14CD98262463C5CFD081DE1CF30325E54465CD3A (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* __this, String_t* ___key0, float ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9*, String_t*, float, const RuntimeMethod*))Dictionary_2_set_Item_mB3364B977072656B662C984B4F7E39394C341B2A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void GameKit.Dependencies.Utilities.Types.Vector2Range::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Range__ctor_mBE19C97F904372B4AADD000FE071577881BF1C5D (Vector2Range_t928456C4CB441EE9A1A037819DA897A13F5B0BA4* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___minimum0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___maximum1, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.Types.Vector2Range::.ctor(GameKit.Dependencies.Utilities.Types.FloatRange,GameKit.Dependencies.Utilities.Types.FloatRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Range__ctor_mCCC98F47EC71B577774F9FC231785DEB228459A9 (Vector2Range_t928456C4CB441EE9A1A037819DA897A13F5B0BA4* __this, FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 ___minimum0, FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 ___maximum1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 GameKit.Dependencies.Utilities.Types.Vector2Range::RandomInclusive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2Range_RandomInclusive_mE0C641791898C67749E16C7A6151DA8214F3CF97 (Vector2Range_t928456C4CB441EE9A1A037819DA897A13F5B0BA4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData>::Add(T)
inline void List_1_Add_m86D816DEC0B16450B896FF97C0FDAD3198408672_inline (List_1_t479A7E3D4251D7C7ED14CDAB6C24C659F23D70D1* __this, ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t479A7E3D4251D7C7ED14CDAB6C24C659F23D70D1*, ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData>::GetEnumerator()
inline Enumerator_tACBE48EF11B345D0AFBEE76B21A4EBC4161923EF List_1_GetEnumerator_mEC4C1C10CEDABC59A848BF3EDEED1F1EAFD7F49A (List_1_t479A7E3D4251D7C7ED14CDAB6C24C659F23D70D1* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tACBE48EF11B345D0AFBEE76B21A4EBC4161923EF (*) (List_1_t479A7E3D4251D7C7ED14CDAB6C24C659F23D70D1*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData>::Dispose()
inline void Enumerator_Dispose_mA9529ABC2FC47D5FDA7F19B99014BBDF143699AC (Enumerator_tACBE48EF11B345D0AFBEE76B21A4EBC4161923EF* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tACBE48EF11B345D0AFBEE76B21A4EBC4161923EF*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData>::get_Current()
inline ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* Enumerator_get_Current_m6726F1A1B6003C68E41A87DF5B95E12C9E2D3FAD_inline (Enumerator_tACBE48EF11B345D0AFBEE76B21A4EBC4161923EF* __this, const RuntimeMethod* method)
{
	return ((  ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* (*) (Enumerator_tACBE48EF11B345D0AFBEE76B21A4EBC4161923EF*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void GameKit.Dependencies.Utilities.ResettableObjectCaches`1<GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData>::Store(T)
inline void ResettableObjectCaches_1_Store_mD143930884778AB7AF3D25B7D93F0077E389251E (ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* ___value0, const RuntimeMethod* method)
{
	((  void (*) (ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11*, const RuntimeMethod*))ResettableObjectCaches_1_Store_mDB336FA2DF176C79D1801174EB6751CEC14B98DA_gshared)(___value0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData>::MoveNext()
inline bool Enumerator_MoveNext_mFE4F71DA033C9E46B7D121D12459797E95E28F98 (Enumerator_tACBE48EF11B345D0AFBEE76B21A4EBC4161923EF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tACBE48EF11B345D0AFBEE76B21A4EBC4161923EF*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData>::Clear()
inline void List_1_Clear_m31BE6C97595546CE522A25B08FE8A197128A1C23_inline (List_1_t479A7E3D4251D7C7ED14CDAB6C24C659F23D70D1* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t479A7E3D4251D7C7ED14CDAB6C24C659F23D70D1*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData>::.ctor()
inline void List_1__ctor_m32596732A6F500B4A40C36BB953BA173BA96F61B (List_1_t479A7E3D4251D7C7ED14CDAB6C24C659F23D70D1* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t479A7E3D4251D7C7ED14CDAB6C24C659F23D70D1*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroupFader__ctor_m256A608946D36F255E29ADA20713499ADCDDD365 (CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* __this, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData::set_Text(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ButtonData_set_Text_m9BAE0ED3909A19D6ED82519C3965D3528C937824_inline (ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData::set_Key(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ButtonData_set_Key_m2F659F0E7DAA4BE038C38EAE97D110B9D4AE9E1A_inline (ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ButtonData_get_Key_m4FF6C98061FC55F5897F470A14517FE9A20B27DE_inline (ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* __this, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData/PressedDelegate::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PressedDelegate_Invoke_m6414BB491C0BE9DAEF1F3DBDEA910AC4279EA825_inline (PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D* __this, String_t* ___key0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroupFader_Show_mF508138AB55CB17A44D8BCA6ABF413EB532B7BFD (CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Vector2>::get_HasValue()
inline bool Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD*, const RuntimeMethod*))Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.Vector2>::get_Value()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7 (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD*, const RuntimeMethod*))Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_gshared)(__this, method);
}
// System.Void System.Nullable`1<UnityEngine.Vector2>::.ctor(T)
inline void Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73 (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_gshared)(__this, ___value0, method);
}
// UnityEngine.Vector3 GameKit.Dependencies.Utilities.Transforms::GetOnScreenPosition(UnityEngine.RectTransform,UnityEngine.Vector3,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transforms_GetOnScreenPosition_mAE95388475C35D4F325A82F3459FF6D35F8B2228 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___desiredPosition1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___padding2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_inline (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.Vector3>::get_Value()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792 (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE*, const RuntimeMethod*))Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Sprite::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Sprite_get_bounds_m042F847F6C5118E6B14A3F79A1E1C53E7DFBF452 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Sprite::get_pixelsPerUnit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Sprite_get_pixelsPerUnit_m5A5984BC298062DF4CD2CB3E8534443FFCF31826 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingContainer__ctor_m7AB7C37BA01EC7A3ADA9EFAC566FBE96E533CAC1 (FloatingContainer_tD4E61098F9070AA28CF23BB647982FEECE88483B* __this, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData::Initialize(System.String,GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData/PressedDelegate,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonData_Initialize_m36EF22ADEF431AE452DFB6B3BD773B0ED1961A0E (ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* __this, String_t* ___text0, PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D* ___callback1, String_t* ___key2, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.ImageButtonData::set_DisplayImage(UnityEngine.Sprite)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageButtonData_set_DisplayImage_m3CCD38D8DE9B1EF7994751C885966A1D9935A0E8_inline (ImageButtonData_tB44D13315533BA4A897470789513A2FAAD2ED6BC* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData::ResetState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonData_ResetState_m43986AC19CA911CE374A43942929B2FF56DD5F7D (ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* __this, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonData__ctor_mE865C3DE2A67C126354F8C72AFADE12E4365FBDD (ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* __this, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.OptionMenuButton::Initialize(GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionMenuButton_Initialize_mD2E9EE70B6F9A46FE53105CC08391FB2472C7560 (OptionMenuButton_t5FBC86B97F4399FEB00518C805878822E8938D22* __this, ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* ___buttonData0, const RuntimeMethod* method) ;
// UnityEngine.Sprite GameKit.Dependencies.Utilities.Types.CanvasContainers.ImageButtonData::get_DisplayImage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ImageButtonData_get_DisplayImage_m91A295FB1D37D025284060760B13C5EFA0728F0B_inline (ImageButtonData_tB44D13315533BA4A897470789513A2FAAD2ED6BC* __this, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.OptionMenuButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionMenuButton__ctor_m42AA68DCB7E1FB191464D946528D2C921E2C8FD8 (OptionMenuButton_t5FBC86B97F4399FEB00518C805878822E8938D22* __this, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.OptionMenuButton::set_ButtonData(GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionMenuButton_set_ButtonData_m736905FAAC3ABDC3B3BD0B5C72D86C0BB615C529_inline (OptionMenuButton_t5FBC86B97F4399FEB00518C805878822E8938D22* __this, ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* ___value0, const RuntimeMethod* method) ;
// System.String GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData::get_Text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ButtonData_get_Text_m68F1D5388ECAF9FC14DD748E7B05ABC00E651A14_inline (ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* __this, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingContainer_Move_m3620B635D1633C806036FBC9DA3E769B9CD34A54 (FloatingContainer_tD4E61098F9070AA28CF23BB647982FEECE88483B* __this, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Inspectors.ShowIfAttribute::set_comparedPropertyName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ShowIfAttribute_set_comparedPropertyName_m3AE28C3177DA505B5D8582532720D14AB645F33D_inline (ShowIfAttribute_t8E349A53643E969632B14FD4801DAE98D3CDBC32* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Inspectors.ShowIfAttribute::set_comparedValue(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ShowIfAttribute_set_comparedValue_m8B15FD4A44986B091D25FBFBF521C76E89618855_inline (ShowIfAttribute_t8E349A53643E969632B14FD4801DAE98D3CDBC32* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void GameKit.Dependencies.Inspectors.ShowIfAttribute::set_disablingType(GameKit.Dependencies.Inspectors.ShowIfAttribute/DisablingType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ShowIfAttribute_set_disablingType_m0ECA258954D66FCC93265703DCB38436A463FCE8_inline (ShowIfAttribute_t8E349A53643E969632B14FD4801DAE98D3CDBC32* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___dot0, const RuntimeMethod* method) ;
// System.Int32 System.BitConverter::SingleToInt32Bits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.ApplicationState::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationState__cctor_m7B337D2EDC476A65E39F456E62DB518904F641F3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationState_Application_quitting_m03200B663FE586745ABD2F23D72449E8A3BC9982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationState_tA96D168E847A237D20FE79D7BC103CBB4A46E61B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _isQuitting = false;
		((ApplicationState_tA96D168E847A237D20FE79D7BC103CBB4A46E61B_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationState_tA96D168E847A237D20FE79D7BC103CBB4A46E61B_il2cpp_TypeInfo_var))->____isQuitting_0 = (bool)0;
		// Application.quitting -= Application_quitting;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, NULL, (intptr_t)((void*)ApplicationState_Application_quitting_m03200B663FE586745ABD2F23D72449E8A3BC9982_RuntimeMethod_var), NULL);
		Application_remove_quitting_m9DC9D4165EDB0FD93AB893655E26BF73566D2C1B(L_0, NULL);
		// Application.quitting += Application_quitting;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, NULL, (intptr_t)((void*)ApplicationState_Application_quitting_m03200B663FE586745ABD2F23D72449E8A3BC9982_RuntimeMethod_var), NULL);
		Application_add_quitting_m5767AC63F23ABFD5BC3D60710906643BA536CCC5(L_1, NULL);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.ApplicationState::Application_quitting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationState_Application_quitting_m03200B663FE586745ABD2F23D72449E8A3BC9982 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationState_tA96D168E847A237D20FE79D7BC103CBB4A46E61B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _isQuitting = true;
		il2cpp_codegen_runtime_class_init_inline(ApplicationState_tA96D168E847A237D20FE79D7BC103CBB4A46E61B_il2cpp_TypeInfo_var);
		((ApplicationState_tA96D168E847A237D20FE79D7BC103CBB4A46E61B_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationState_tA96D168E847A237D20FE79D7BC103CBB4A46E61B_il2cpp_TypeInfo_var))->____isQuitting_0 = (bool)1;
		// }
		return;
	}
}
// System.Boolean GameKit.Dependencies.Utilities.ApplicationState::IsQuitting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ApplicationState_IsQuitting_m14D8FBF40D3737D8AD1AB93AFC8CBD52E8185D69 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationState_tA96D168E847A237D20FE79D7BC103CBB4A46E61B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return _isQuitting;
		il2cpp_codegen_runtime_class_init_inline(ApplicationState_tA96D168E847A237D20FE79D7BC103CBB4A46E61B_il2cpp_TypeInfo_var);
		bool L_0 = ((ApplicationState_tA96D168E847A237D20FE79D7BC103CBB4A46E61B_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationState_tA96D168E847A237D20FE79D7BC103CBB4A46E61B_il2cpp_TypeInfo_var))->____isQuitting_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GameKit.Dependencies.Utilities.ApplicationState::IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ApplicationState_IsPlaying_mFF4006DCCEADA71381FB3EC7FAE12790581C4239 (const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return Application.isPlaying;
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void GameKit.Dependencies.Utilities.ApplicationState::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationState_Quit_mD93BAC4C3C873E76E1E55CD03A89FB7591505426 (const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.Arrays::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrays__cctor_mECDF594C81BBED68E1030578162E398A97B33C56 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t586CFF62C78640B28034251F78E8B7B1C6EAAD92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static System.Random _random = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		((Arrays_t586CFF62C78640B28034251F78E8B7B1C6EAAD92_StaticFields*)il2cpp_codegen_static_fields_for(Arrays_t586CFF62C78640B28034251F78E8B7B1C6EAAD92_il2cpp_TypeInfo_var))->____random_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Arrays_t586CFF62C78640B28034251F78E8B7B1C6EAAD92_StaticFields*)il2cpp_codegen_static_fields_for(Arrays_t586CFF62C78640B28034251F78E8B7B1C6EAAD92_il2cpp_TypeInfo_var))->____random_0), (void*)L_0);
		// private static StringBuilder _stringBuilder = new StringBuilder();
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		((Arrays_t586CFF62C78640B28034251F78E8B7B1C6EAAD92_StaticFields*)il2cpp_codegen_static_fields_for(Arrays_t586CFF62C78640B28034251F78E8B7B1C6EAAD92_il2cpp_TypeInfo_var))->____stringBuilder_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Arrays_t586CFF62C78640B28034251F78E8B7B1C6EAAD92_StaticFields*)il2cpp_codegen_static_fields_for(Arrays_t586CFF62C78640B28034251F78E8B7B1C6EAAD92_il2cpp_TypeInfo_var))->____stringBuilder_1), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 GameKit.Dependencies.Utilities.Booleans::ToInt(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Booleans_ToInt_m98D17043F2CB650F87CD4325517E7C50FCB42BB8 (bool ___b0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// return (b) ? 1 : 0;
		bool L_0 = ___b0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0008;
	}

IL_0007:
	{
		G_B3_0 = 1;
	}

IL_0008:
	{
		V_0 = G_B3_0;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.CanvaseGroups::SetBlockingType(UnityEngine.CanvasGroup,GameKit.Dependencies.Utilities.CanvasGroupBlockingType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvaseGroups_SetBlockingType_m772F467E25CDA46863D019EAFA71EF1B3A6781E5 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___group0, int32_t ___blockingType1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (blockingType == CanvasGroupBlockingType.Unchanged)
		int32_t L_0 = ___blockingType1;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		goto IL_0020;
	}

IL_000b:
	{
		// bool block = (blockingType == CanvasGroupBlockingType.Block);
		int32_t L_2 = ___blockingType1;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		// group.blocksRaycasts = block;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_3 = ___group0;
		bool L_4 = V_0;
		NullCheck(L_3);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_3, L_4, NULL);
		// group.interactable = block;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_5 = ___group0;
		bool L_6 = V_0;
		NullCheck(L_5);
		CanvasGroup_set_interactable_m86928BB0894EF3F06BC7BE63594272FBA0DAC757(L_5, L_6, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.CanvaseGroups::SetActive(UnityEngine.CanvasGroup,GameKit.Dependencies.Utilities.CanvasGroupBlockingType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvaseGroups_SetActive_m56AFB78BC9743670B511C8E4C584E68CE53F0886 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___group0, int32_t ___blockingType1, float ___alpha2, const RuntimeMethod* method) 
{
	{
		// group.SetBlockingType(blockingType);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0 = ___group0;
		int32_t L_1 = ___blockingType1;
		CanvaseGroups_SetBlockingType_m772F467E25CDA46863D019EAFA71EF1B3A6781E5(L_0, L_1, NULL);
		// group.alpha = alpha;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_2 = ___group0;
		float L_3 = ___alpha2;
		NullCheck(L_2);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.CanvaseGroups::SetActive(UnityEngine.CanvasGroup,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvaseGroups_SetActive_m564074480F4A3C0AA9F6482FE4C6BF3598B57564 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___group0, float ___alpha1, const RuntimeMethod* method) 
{
	{
		// group.SetActive(true, false);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0 = ___group0;
		CanvaseGroups_SetActive_m43D078FF6B0D2B3FE8C91A4116B1269E8C3126B6(L_0, (bool)1, (bool)0, NULL);
		// group.alpha = alpha;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_1 = ___group0;
		float L_2 = ___alpha1;
		NullCheck(L_1);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.CanvaseGroups::SetInactive(UnityEngine.CanvasGroup,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvaseGroups_SetInactive_m08CDA03917F1EFBC55729AA579DCCD7F39851426 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___group0, float ___alpha1, const RuntimeMethod* method) 
{
	{
		// group.SetActive(false, false);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0 = ___group0;
		CanvaseGroups_SetActive_m43D078FF6B0D2B3FE8C91A4116B1269E8C3126B6(L_0, (bool)0, (bool)0, NULL);
		// group.alpha = alpha;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_1 = ___group0;
		float L_2 = ___alpha1;
		NullCheck(L_1);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.CanvaseGroups::SetActive(UnityEngine.CanvasGroup,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvaseGroups_SetActive_m43D078FF6B0D2B3FE8C91A4116B1269E8C3126B6 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___group0, bool ___active1, bool ___setAlpha2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (group == null)
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0 = ___group0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		goto IL_0044;
	}

IL_000e:
	{
		// if (setAlpha)
		bool L_3 = ___setAlpha2;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// if (active)
		bool L_5 = ___active1;
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0027;
		}
	}
	{
		// group.alpha = 1f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_7 = ___group0;
		NullCheck(L_7);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_7, (1.0f), NULL);
		goto IL_0033;
	}

IL_0027:
	{
		// group.alpha = 0f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_8 = ___group0;
		NullCheck(L_8);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_8, (0.0f), NULL);
	}

IL_0033:
	{
	}

IL_0034:
	{
		// group.interactable = active;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_9 = ___group0;
		bool L_10 = ___active1;
		NullCheck(L_9);
		CanvasGroup_set_interactable_m86928BB0894EF3F06BC7BE63594272FBA0DAC757(L_9, L_10, NULL);
		// group.blocksRaycasts = active;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_11 = ___group0;
		bool L_12 = ___active1;
		NullCheck(L_11);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_11, L_12, NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.CanvaseGroups::SetActive(UnityEngine.CanvasGroup,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvaseGroups_SetActive_m2950F833BE4E8C3EBCCE34A159AA497E7B6B28AC (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___group0, bool ___active1, float ___alpha2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (group == null)
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0 = ___group0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		goto IL_0026;
	}

IL_000e:
	{
		// group.alpha = alpha;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_3 = ___group0;
		float L_4 = ___alpha2;
		NullCheck(L_3);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_3, L_4, NULL);
		// group.interactable = active;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_5 = ___group0;
		bool L_6 = ___active1;
		NullCheck(L_5);
		CanvasGroup_set_interactable_m86928BB0894EF3F06BC7BE63594272FBA0DAC757(L_5, L_6, NULL);
		// group.blocksRaycasts = active;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_7 = ___group0;
		bool L_8 = ___active1;
		NullCheck(L_7);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_7, L_8, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.ColliderExtensions::GetBoxOverlapParams(UnityEngine.BoxCollider,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderExtensions_GetBoxOverlapParams_m94F5C42040BE854D64FFCED4B79F70D54A7969F3 (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___boxCollider0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___center1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___halfExtents2, const RuntimeMethod* method) 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// Transform cachedTransform = boxCollider.transform;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_0 = ___boxCollider0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		V_0 = L_1;
		// center = cachedTransform.TransformPoint(boxCollider.center);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___center1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = V_0;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_4 = ___boxCollider0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = BoxCollider_get_center_mC370C79F9FC9398D0DD080500FA2EE14FC6E36C7(L_4, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_3, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_2 = L_6;
		// Vector3 lossyScale = cachedTransform.lossyScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_0;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_7, NULL);
		V_1 = L_8;
		// Vector3 size = boxCollider.size;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_9 = ___boxCollider0;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E(L_9, NULL);
		V_2 = L_10;
		// float x = size.x * 0.5f * lossyScale.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_2;
		float L_12 = L_11.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_1;
		float L_14 = L_13.___x_2;
		V_3 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_12, (0.5f))), L_14));
		// float y = size.y * 0.5f * lossyScale.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_2;
		float L_16 = L_15.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		float L_18 = L_17.___y_3;
		V_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_16, (0.5f))), L_18));
		// float z = size.z * 0.5f * lossyScale.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_2;
		float L_20 = L_19.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_1;
		float L_22 = L_21.___z_4;
		V_5 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_20, (0.5f))), L_22));
		// halfExtents = new Vector3(x, y, z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = ___halfExtents2;
		float L_24 = V_3;
		float L_25 = V_4;
		float L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_27), L_24, L_25, L_26, /*hidden argument*/NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_23 = L_27;
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.ColliderExtensions::GetCapsuleCastParams(UnityEngine.CapsuleCollider,UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderExtensions_GetCapsuleCastParams_m9C6B7548F25DD5DEDBF9FEDF74E627C21C00082A (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___capsuleCollider0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___point11, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___point22, float* ___radius3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	{
		// Transform cachedTransform = capsuleCollider.transform;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_0 = ___capsuleCollider0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		V_0 = L_1;
		// Vector3 lossyScale = cachedTransform.lossyScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = V_0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_2, NULL);
		V_1 = L_3;
		// float absX = Math.Abs(lossyScale.x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_1;
		float L_5 = L_4.___x_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_6;
		L_6 = fabsf(L_5);
		V_2 = L_6;
		// float absY = Math.Abs(lossyScale.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		float L_8 = L_7.___y_3;
		float L_9;
		L_9 = fabsf(L_8);
		V_3 = L_9;
		// float absZ = Math.Abs(lossyScale.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		float L_11 = L_10.___z_4;
		float L_12;
		L_12 = fabsf(L_11);
		V_4 = L_12;
		// switch (capsuleCollider.direction)
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_13 = ___capsuleCollider0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = CapsuleCollider_get_direction_mE6D56B0990E3F2FACA983679C251949FE3FC6DFA(L_13, NULL);
		V_16 = L_14;
		int32_t L_15 = V_16;
		V_15 = L_15;
		int32_t L_16 = V_15;
		if ((((int32_t)L_16) == ((int32_t)1)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0047;
	}

IL_0047:
	{
		int32_t L_17 = V_15;
		if ((((int32_t)L_17) == ((int32_t)2)))
		{
			goto IL_0073;
		}
	}
	{
		goto IL_0098;
	}

IL_004e:
	{
		// radius = capsuleCollider.radius * Math.Max(absX, absZ);
		float* L_18 = ___radius3;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_19 = ___capsuleCollider0;
		NullCheck(L_19);
		float L_20;
		L_20 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_19, NULL);
		float L_21 = V_2;
		float L_22 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_23;
		L_23 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_21, L_22, NULL);
		*((float*)L_18) = (float)((float)il2cpp_codegen_multiply(L_20, L_23));
		// height = capsuleCollider.height * absY;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_24 = ___capsuleCollider0;
		NullCheck(L_24);
		float L_25;
		L_25 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_24, NULL);
		float L_26 = V_3;
		V_5 = ((float)il2cpp_codegen_multiply(L_25, L_26));
		// direction = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		V_6 = L_27;
		// break;
		goto IL_00bd;
	}

IL_0073:
	{
		// radius = capsuleCollider.radius * Math.Max(absX, absY);
		float* L_28 = ___radius3;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_29 = ___capsuleCollider0;
		NullCheck(L_29);
		float L_30;
		L_30 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_29, NULL);
		float L_31 = V_2;
		float L_32 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_33;
		L_33 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_31, L_32, NULL);
		*((float*)L_28) = (float)((float)il2cpp_codegen_multiply(L_30, L_33));
		// height = capsuleCollider.height * absZ;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_34 = ___capsuleCollider0;
		NullCheck(L_34);
		float L_35;
		L_35 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_34, NULL);
		float L_36 = V_4;
		V_5 = ((float)il2cpp_codegen_multiply(L_35, L_36));
		// direction = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		V_6 = L_37;
		// break;
		goto IL_00bd;
	}

IL_0098:
	{
		// radius = capsuleCollider.radius * Math.Max(absY, absZ);
		float* L_38 = ___radius3;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_39 = ___capsuleCollider0;
		NullCheck(L_39);
		float L_40;
		L_40 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_39, NULL);
		float L_41 = V_3;
		float L_42 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_43;
		L_43 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_41, L_42, NULL);
		*((float*)L_38) = (float)((float)il2cpp_codegen_multiply(L_40, L_43));
		// height = capsuleCollider.height * absX;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_44 = ___capsuleCollider0;
		NullCheck(L_44);
		float L_45;
		L_45 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_44, NULL);
		float L_46 = V_2;
		V_5 = ((float)il2cpp_codegen_multiply(L_45, L_46));
		// direction = Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		V_6 = L_47;
		// break;
		goto IL_00bd;
	}

IL_00bd:
	{
		// Vector3 center = cachedTransform.TransformPoint(capsuleCollider.center);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = V_0;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_49 = ___capsuleCollider0;
		NullCheck(L_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = CapsuleCollider_get_center_mC12CE0A66A1104CEB7D23F39596D0E45578419C2(L_49, NULL);
		NullCheck(L_48);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_48, L_50, NULL);
		V_7 = L_51;
		// Vector3 offset = height < radius * 2.0f ? Vector3.zero : cachedTransform.TransformDirection(direction * (height * 0.5f - radius));
		float L_52 = V_5;
		float* L_53 = ___radius3;
		float L_54 = *((float*)L_53);
		if ((((float)L_52) < ((float)((float)il2cpp_codegen_multiply(L_54, (2.0f))))))
		{
			goto IL_00f1;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = V_6;
		float L_57 = V_5;
		float* L_58 = ___radius3;
		float L_59 = *((float*)L_58);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_56, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_57, (0.5f))), L_59)), NULL);
		NullCheck(L_55);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_55, L_60, NULL);
		G_B10_0 = L_61;
		goto IL_00f6;
	}

IL_00f1:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		G_B10_0 = L_62;
	}

IL_00f6:
	{
		V_8 = G_B10_0;
		// float x1 = center.x + offset.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_7;
		float L_64 = L_63.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = V_8;
		float L_66 = L_65.___x_2;
		V_9 = ((float)il2cpp_codegen_add(L_64, L_66));
		// float y1 = center.y + offset.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = V_7;
		float L_68 = L_67.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = V_8;
		float L_70 = L_69.___y_3;
		V_10 = ((float)il2cpp_codegen_add(L_68, L_70));
		// float z1 = center.z + offset.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71 = V_7;
		float L_72 = L_71.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = V_8;
		float L_74 = L_73.___z_4;
		V_11 = ((float)il2cpp_codegen_add(L_72, L_74));
		// float x2 = center.x - offset.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = V_7;
		float L_76 = L_75.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = V_8;
		float L_78 = L_77.___x_2;
		V_12 = ((float)il2cpp_codegen_subtract(L_76, L_78));
		// float y2 = center.y - offset.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = V_7;
		float L_80 = L_79.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = V_8;
		float L_82 = L_81.___y_3;
		V_13 = ((float)il2cpp_codegen_subtract(L_80, L_82));
		// float z2 = center.z - offset.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = V_7;
		float L_84 = L_83.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = V_8;
		float L_86 = L_85.___z_4;
		V_14 = ((float)il2cpp_codegen_subtract(L_84, L_86));
		// point1 = new Vector3(x1, y1, z1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_87 = ___point11;
		float L_88 = V_9;
		float L_89 = V_10;
		float L_90 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		memset((&L_91), 0, sizeof(L_91));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_91), L_88, L_89, L_90, /*hidden argument*/NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_87 = L_91;
		// point2 = new Vector3(x2, y2, z2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_92 = ___point22;
		float L_93 = V_12;
		float L_94 = V_13;
		float L_95 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		memset((&L_96), 0, sizeof(L_96));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_96), L_93, L_94, L_95, /*hidden argument*/NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_92 = L_96;
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.ColliderExtensions::GetSphereOverlapParams(UnityEngine.SphereCollider,UnityEngine.Vector3&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderExtensions_GetSphereOverlapParams_mAB81D095077AC77C9FF4E3D89B0FA952014D39C6 (SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* ___sphereCollider0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___center1, float* ___radius2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// Transform cachedTransform = sphereCollider.transform;
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_0 = ___sphereCollider0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		V_0 = L_1;
		// center = cachedTransform.TransformPoint(sphereCollider.center);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___center1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = V_0;
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_4 = ___sphereCollider0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = SphereCollider_get_center_m122A197607CD350873539A0EEE3BA10E8BE1759E(L_4, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_3, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_2 = L_6;
		// Vector3 lossyScale = cachedTransform.lossyScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_0;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_7, NULL);
		V_1 = L_8;
		// float x = Math.Abs(lossyScale.x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_1;
		float L_10 = L_9.___x_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_11;
		L_11 = fabsf(L_10);
		V_2 = L_11;
		// float y = Math.Abs(lossyScale.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		float L_13 = L_12.___y_3;
		float L_14;
		L_14 = fabsf(L_13);
		V_3 = L_14;
		// float z = Math.Abs(lossyScale.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		float L_16 = L_15.___z_4;
		float L_17;
		L_17 = fabsf(L_16);
		V_4 = L_17;
		// radius = sphereCollider.radius * Math.Max(Math.Max(x, y), z);
		float* L_18 = ___radius2;
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_19 = ___sphereCollider0;
		NullCheck(L_19);
		float L_20;
		L_20 = SphereCollider_get_radius_m1BB513491906E76A4F71929E3DB72A1542309697(L_19, NULL);
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23;
		L_23 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_21, L_22, NULL);
		float L_24 = V_4;
		float L_25;
		L_25 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_23, L_24, NULL);
		*((float*)L_18) = (float)((float)il2cpp_codegen_multiply(L_20, L_25));
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.Collider2DExtensions::GetBox2DOverlapParams(UnityEngine.BoxCollider2D,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider2DExtensions_GetBox2DOverlapParams_mC48FBF16E273135F6EC9FB9558FB84497B5A23C8 (BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___boxCollider0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___center1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___halfExtents2, const RuntimeMethod* method) 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// Transform cachedTransform = boxCollider.transform;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0 = ___boxCollider0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		V_0 = L_1;
		// center = cachedTransform.TransformPoint(boxCollider.offset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___center1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = V_0;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_4 = ___boxCollider0;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Collider2D_get_offset_m6DC45B352DDE28C7B08607BFA3BECEC6E5F31914(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_5, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_3, L_6, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_2 = L_7;
		// Vector3 lossyScale = cachedTransform.lossyScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_0;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_8, NULL);
		V_1 = L_9;
		// Vector3 size = boxCollider.size;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_10 = ___boxCollider0;
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = BoxCollider2D_get_size_mBB657ADFC58A79CDFDB7478956BBD9032E41D3D1(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_11, NULL);
		V_2 = L_12;
		// float x = size.x * 0.5f * lossyScale.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_2;
		float L_14 = L_13.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		float L_16 = L_15.___x_2;
		V_3 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_14, (0.5f))), L_16));
		// float y = size.y * 0.5f * lossyScale.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_2;
		float L_18 = L_17.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		float L_20 = L_19.___y_3;
		V_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_18, (0.5f))), L_20));
		// float z = size.z * 0.5f * lossyScale.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_2;
		float L_22 = L_21.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_1;
		float L_24 = L_23.___z_4;
		V_5 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_22, (0.5f))), L_24));
		// halfExtents = new Vector3(x, y, z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_25 = ___halfExtents2;
		float L_26 = V_3;
		float L_27 = V_4;
		float L_28 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_29), L_26, L_27, L_28, /*hidden argument*/NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_25 = L_29;
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Collider2DExtensions::GetCircleOverlapParams(UnityEngine.CircleCollider2D,UnityEngine.Vector3&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider2DExtensions_GetCircleOverlapParams_m5FD16EC79B0FEAC104B46F1B2906D9497CC8C2E2 (CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* ___circleCollider0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___center1, float* ___radius2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// Transform cachedTransform = circleCollider.transform;
		CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* L_0 = ___circleCollider0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		V_0 = L_1;
		// Vector3 offset = new Vector3(circleCollider.offset.x, circleCollider.offset.y, circleCollider.transform.position.z);
		CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* L_2 = ___circleCollider0;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Collider2D_get_offset_m6DC45B352DDE28C7B08607BFA3BECEC6E5F31914(L_2, NULL);
		float L_4 = L_3.___x_0;
		CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* L_5 = ___circleCollider0;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Collider2D_get_offset_m6DC45B352DDE28C7B08607BFA3BECEC6E5F31914(L_5, NULL);
		float L_7 = L_6.___y_1;
		CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* L_8 = ___circleCollider0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), L_4, L_7, L_11, NULL);
		// center = cachedTransform.TransformPoint(offset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = ___center1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_13, L_14, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_12 = L_15;
		// Vector3 lossyScale = cachedTransform.lossyScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = V_0;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_16, NULL);
		V_2 = L_17;
		// float x = Math.Abs(lossyScale.x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_2;
		float L_19 = L_18.___x_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_20;
		L_20 = fabsf(L_19);
		V_3 = L_20;
		// float y = Math.Abs(lossyScale.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_2;
		float L_22 = L_21.___y_3;
		float L_23;
		L_23 = fabsf(L_22);
		V_4 = L_23;
		// float z = Math.Abs(lossyScale.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_2;
		float L_25 = L_24.___z_4;
		float L_26;
		L_26 = fabsf(L_25);
		V_5 = L_26;
		// radius = circleCollider.radius * Math.Max(Math.Max(x, y), z);
		float* L_27 = ___radius2;
		CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* L_28 = ___circleCollider0;
		NullCheck(L_28);
		float L_29;
		L_29 = CircleCollider2D_get_radius_m767A7E871FC706A078E903C3A96780884F844444(L_28, NULL);
		float L_30 = V_3;
		float L_31 = V_4;
		float L_32;
		L_32 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_30, L_31, NULL);
		float L_33 = V_5;
		float L_34;
		L_34 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_32, L_33, NULL);
		*((float*)L_27) = (float)((float)il2cpp_codegen_multiply(L_29, L_34));
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.Disks::WriteToFile(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Disks_WriteToFile_m8B219A8592E5FF929BEFD7AC4BD23D542BA7ED9F (String_t* ___text0, String_t* ___path1, bool ___formatPath2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2724DD20D997B911554D8FCB554B88353F28A4A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_4 = NULL;
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* V_5 = NULL;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (formatPath)
		bool L_0 = ___formatPath2;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// path = FormatPlatformPath(path);
		String_t* L_2 = ___path1;
		String_t* L_3;
		L_3 = Disks_FormatPlatformPath_m53338F9F4326E5FB1FF1103B192E666EBD532D4B(L_2, NULL);
		___path1 = L_3;
	}

IL_000e:
	{
		// if (path == string.Empty)
		String_t* L_4 = ___path1;
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_5, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.LogError("Path cannot be null.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralD2724DD20D997B911554D8FCB554B88353F28A4A, NULL);
		// return;
		goto IL_00ec;
	}

IL_002e:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// string directory = Path.GetDirectoryName(path);
			String_t* L_8 = ___path1;
			il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
			String_t* L_9;
			L_9 = Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6(L_8, NULL);
			V_2 = L_9;
			// if (!Directory.Exists(directory))
			String_t* L_10 = V_2;
			bool L_11;
			L_11 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_10, NULL);
			V_3 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
			bool L_12 = V_3;
			if (!L_12)
			{
				goto IL_004b_1;
			}
		}
		{
			// Directory.CreateDirectory(directory);
			String_t* L_13 = V_2;
			DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_14;
			L_14 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_13, NULL);
		}

IL_004b_1:
		{
			// using (FileStream fs = new FileStream(path, FileMode.Create))
			String_t* L_15 = ___path1;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_16 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
			NullCheck(L_16);
			FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6(L_16, L_15, 2, NULL);
			V_4 = L_16;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0079_1:
				{// begin finally (depth: 2)
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_17 = V_4;
						if (!L_17)
						{
							goto IL_0085_1;
						}
					}
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_18 = V_4;
						NullCheck(L_18);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_18);
					}

IL_0085_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					// using (StreamWriter writer = new StreamWriter(fs))
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_19 = V_4;
					StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_20 = (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4*)il2cpp_codegen_object_new(StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
					NullCheck(L_20);
					StreamWriter__ctor_m54CE9C47ED974C0589400DA9BC2AB3F7F481595B(L_20, L_19, NULL);
					V_5 = L_20;
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_0069_2:
						{// begin finally (depth: 3)
							{
								StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_21 = V_5;
								if (!L_21)
								{
									goto IL_0075_2;
								}
							}
							{
								StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_22 = V_5;
								NullCheck(L_22);
								InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_22);
							}

IL_0075_2:
							{
								return;
							}
						}// end finally (depth: 3)
					});
					try
					{// begin try (depth: 3)
						// writer.Write(text);
						StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_23 = V_5;
						String_t* L_24 = ___text0;
						NullCheck(L_23);
						VirtualActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_23, L_24);
						goto IL_0076_2;
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_0076_2:
				{
					goto IL_0086_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0086_1:
		{
			goto IL_00ec;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0089;
		}
		throw e;
	}

CATCH_0089:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.LogError($"An error occured during a file write. Error: {ex.Message} {Environment.NewLine} File path: {path} {Environment.NewLine} Text: {text}");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)((int32_t)10));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD77B3E6FE34588181670AD33AADDCF7851C93952)));
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD77B3E6FE34588181670AD33AADDCF7851C93952)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		Exception_t* L_28 = V_6;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_28);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_29);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_29);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_27;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745)));
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		String_t* L_32;
		L_32 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_31;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral82C6EC10295EEFD4972589F9437828BA0551AB71)));
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral82C6EC10295EEFD4972589F9437828BA0551AB71)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
		String_t* L_35 = ___path1;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_35);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_34;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745)));
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_36;
		String_t* L_38;
		L_38 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_38);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_37;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4C067C1DC94D7C88107C16AADB27E06C3779644B)));
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4C067C1DC94D7C88107C16AADB27E06C3779644B)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_39;
		String_t* L_41 = ___text0;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_41);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_41);
		String_t* L_42;
		L_42 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_40, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_42, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ec;
	}// end catch (depth: 1)

IL_00ec:
	{
		// }
		return;
	}
}
// System.String GameKit.Dependencies.Utilities.Disks::FormatPlatformPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Disks_FormatPlatformPath_m53338F9F4326E5FB1FF1103B192E666EBD532D4B (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2A208375550A323A5F1C2021F4EEBEE43D90A9);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		// if (path == string.Empty)
		String_t* L_0 = ___path0;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_1, NULL);
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// Debug.LogError("Path cannot be empty.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralBD2A208375550A323A5F1C2021F4EEBEE43D90A9, NULL);
		// return string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_3 = L_4;
		goto IL_0076;
	}

IL_0024:
	{
		// string convertedPath = string.Empty;
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_5;
		// string[] directories = path.Split(Path.DirectorySeparatorChar);
		String_t* L_6 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_7 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		NullCheck(L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8;
		L_8 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_6, L_7, 0, NULL);
		V_1 = L_8;
		// for (int i = 0; i < directories.Length; i++)
		V_4 = 0;
		goto IL_0065;
	}

IL_003c:
	{
		// if (directories.Length == 1)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_1;
		NullCheck(L_9);
		V_5 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))) == ((int32_t)1))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_0051;
		}
	}
	{
		// convertedPath = directories[i];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_1;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		String_t* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_0 = L_14;
		// break;
		goto IL_0072;
	}

IL_0051:
	{
		// convertedPath = Path.Combine(convertedPath, directories[i]);
		String_t* L_15 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_1;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		String_t* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_20;
		L_20 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_15, L_19, NULL);
		V_0 = L_20;
		// for (int i = 0; i < directories.Length; i++)
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0065:
	{
		// for (int i = 0; i < directories.Length; i++)
		int32_t L_22 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_1;
		NullCheck(L_23);
		V_6 = (bool)((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))? 1 : 0);
		bool L_24 = V_6;
		if (L_24)
		{
			goto IL_003c;
		}
	}

IL_0072:
	{
		// return convertedPath;
		String_t* L_25 = V_0;
		V_3 = L_25;
		goto IL_0076;
	}

IL_0076:
	{
		// }
		String_t* L_26 = V_3;
		return L_26;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean GameKit.Dependencies.Utilities.Enums::Contains(System.Enum,System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enums_Contains_m5E4C9E82D264114E719A864D413038A5674B59DB (Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* ___whole0, Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* ___part1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	bool V_2 = false;
	{
		// ulong wholeNum = Convert.ToUInt64(whole);
		Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* L_0 = ___whole0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = Convert_ToUInt64_mAED581BDC2A2EC0295EC6FB7C7D525571FEA4A0B(L_0, NULL);
		V_0 = L_1;
		// ulong partNum = Convert.ToUInt64(part);
		Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* L_2 = ___part1;
		uint64_t L_3;
		L_3 = Convert_ToUInt64_mAED581BDC2A2EC0295EC6FB7C7D525571FEA4A0B(L_2, NULL);
		V_1 = L_3;
		// return ((wholeNum & partNum) != 0);
		uint64_t L_4 = V_0;
		uint64_t L_5 = V_1;
		V_2 = (bool)((!(((uint64_t)((int64_t)((int64_t)L_4&(int64_t)L_5))) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		goto IL_0019;
	}

IL_0019:
	{
		// }
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Boolean GameKit.Dependencies.Utilities.Enums::ReverseContains(System.Enum,System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enums_ReverseContains_m91F4D9F744D7D42C1F2EF2C90037DC15933DFBE4 (Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* ___whole0, Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* ___part1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	bool V_2 = false;
	{
		// ulong wholeNum = Convert.ToUInt64(whole);
		Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* L_0 = ___whole0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = Convert_ToUInt64_mAED581BDC2A2EC0295EC6FB7C7D525571FEA4A0B(L_0, NULL);
		V_0 = L_1;
		// ulong partNum = Convert.ToUInt64(part);
		Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* L_2 = ___part1;
		uint64_t L_3;
		L_3 = Convert_ToUInt64_mAED581BDC2A2EC0295EC6FB7C7D525571FEA4A0B(L_2, NULL);
		V_1 = L_3;
		// return ((partNum & wholeNum) != 0);
		uint64_t L_4 = V_1;
		uint64_t L_5 = V_0;
		V_2 = (bool)((!(((uint64_t)((int64_t)((int64_t)L_4&(int64_t)L_5))) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		goto IL_0019;
	}

IL_0019:
	{
		// }
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Boolean GameKit.Dependencies.Utilities.Enums::Equals(System.Enum,System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enums_Equals_mB30EE0B4FEF53EF1C8847E986EAB3B6B850EB9CE (Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* ___value0, Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* ___target1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	bool V_2 = false;
	{
		// ulong valueNum = Convert.ToUInt64(value);
		Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = Convert_ToUInt64_mAED581BDC2A2EC0295EC6FB7C7D525571FEA4A0B(L_0, NULL);
		V_0 = L_1;
		// ulong wholeNum = Convert.ToUInt64(target);
		Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* L_2 = ___target1;
		uint64_t L_3;
		L_3 = Convert_ToUInt64_mAED581BDC2A2EC0295EC6FB7C7D525571FEA4A0B(L_2, NULL);
		V_1 = L_3;
		// return (valueNum == wholeNum);
		uint64_t L_4 = V_0;
		uint64_t L_5 = V_1;
		V_2 = (bool)((((int64_t)L_4) == ((int64_t)L_5))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		// }
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Boolean GameKit.Dependencies.Utilities.Enums::SameType(System.Enum,System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enums_SameType_m1C3A4AB5BFB3C555CF3B6E797877DE0B62255469 (Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* ___a0, Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return (a.GetType() == b.GetType());
		Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* L_0 = ___a0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* L_2 = ___b1;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single GameKit.Dependencies.Utilities.Floats::SetIfOverTolerance(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Floats_SetIfOverTolerance_mF70DCA80BEBA0107983BFEEE74D6DFA71BA221EB (float ___source0, float ___tolerance1, float ___value2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		// if (source >= tolerance)
		float L_0 = ___source0;
		float L_1 = ___tolerance1;
		V_0 = (bool)((((int32_t)((!(((float)L_0) >= ((float)L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// source = value;
		float L_3 = ___value2;
		___source0 = L_3;
	}

IL_000f:
	{
		// return source;
		float L_4 = ___source0;
		V_1 = L_4;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		float L_5 = V_1;
		return L_5;
	}
}
// System.Single GameKit.Dependencies.Utilities.Floats::SetIfUnderTolerance(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Floats_SetIfUnderTolerance_m80C07FD3E7E466BAC2A6BAD47DCDD4A6871029F1 (float ___source0, float ___tolerance1, float ___value2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		// if (source <= tolerance)
		float L_0 = ___source0;
		float L_1 = ___tolerance1;
		V_0 = (bool)((((int32_t)((!(((float)L_0) <= ((float)L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// source = value;
		float L_3 = ___value2;
		___source0 = L_3;
	}

IL_000f:
	{
		// return source;
		float L_4 = ___source0;
		V_1 = L_4;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		float L_5 = V_1;
		return L_5;
	}
}
// System.Single GameKit.Dependencies.Utilities.Floats::TimeRemainingValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Floats_TimeRemainingValue_mB5610BC61507AE0438860C90F2A3A413B482A8A8 (float ___endTime0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		// float remaining = endTime - Time.time;
		float L_0 = ___endTime0;
		float L_1;
		L_1 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (remaining < 0f)
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) < ((float)(0.0f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return -1f;
		V_2 = (-1.0f);
		goto IL_0027;
	}

IL_001d:
	{
		// return (endTime - Time.time);
		float L_4 = ___endTime0;
		float L_5;
		L_5 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		V_2 = ((float)il2cpp_codegen_subtract(L_4, L_5));
		goto IL_0027;
	}

IL_0027:
	{
		// }
		float L_6 = V_2;
		return L_6;
	}
}
// System.Int32 GameKit.Dependencies.Utilities.Floats::TimeRemainingValue(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Floats_TimeRemainingValue_m593330C93FAA90BA09ECCD56C8176145AEFB6305 (float ___endTime0, bool ___useFloor1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t G_B5_0 = 0;
	{
		// float remaining = endTime - Time.time;
		float L_0 = ___endTime0;
		float L_1;
		L_1 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (remaining < 0f)
		float L_2 = V_0;
		V_2 = (bool)((((float)L_2) < ((float)(0.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		// return -1;
		V_3 = (-1);
		goto IL_0035;
	}

IL_0019:
	{
		// float result = (endTime - Time.time);
		float L_4 = ___endTime0;
		float L_5;
		L_5 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		V_1 = ((float)il2cpp_codegen_subtract(L_4, L_5));
		// return (useFloor) ? Mathf.FloorToInt(result) : Mathf.CeilToInt(result);
		bool L_6 = ___useFloor1;
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		float L_7 = V_1;
		int32_t L_8;
		L_8 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(L_7, NULL);
		G_B5_0 = L_8;
		goto IL_0032;
	}

IL_002c:
	{
		float L_9 = V_1;
		int32_t L_10;
		L_10 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(L_9, NULL);
		G_B5_0 = L_10;
	}

IL_0032:
	{
		V_3 = G_B5_0;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		int32_t L_11 = V_3;
		return L_11;
	}
}
// System.String GameKit.Dependencies.Utilities.Floats::TimeRemainingText(System.Single,System.Byte,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Floats_TimeRemainingText_mC3A3231E07A744A6C7D851962827843A0D304D0E (float ___value0, uint8_t ___segments1, bool ___emptyOnZero2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D57CB08C0BDA4B355B51FE76856B92A02400F50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2774AE9610CAB8B564AEA7618945AAAFA295BAD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral525F5C8DBE02A4413AF96F338A4166104DA95AE4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	bool V_6 = false;
	String_t* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B3_0 = 0;
	{
		// if (emptyOnZero && value <= 0f)
		bool L_0 = ___emptyOnZero2;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		float L_1 = ___value0;
		G_B3_0 = ((((int32_t)((!(((float)L_1) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 0;
	}

IL_0012:
	{
		V_6 = (bool)G_B3_0;
		bool L_2 = V_6;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// return string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_7 = L_3;
		goto IL_00ef;
	}

IL_0024:
	{
		// int timeRounded = Math.Max(Mathf.RoundToInt(value), 0);
		float L_4 = ___value0;
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_5, 0, NULL);
		V_0 = L_6;
		// TimeSpan t = TimeSpan.FromSeconds(timeRounded);
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_8;
		L_8 = TimeSpan_FromSeconds_m4401B50C0CA831134068595C6AF2F1CA92AAF80F(((double)L_7), NULL);
		V_1 = L_8;
		// int hours = Mathf.FloorToInt(t.Hours);
		int32_t L_9;
		L_9 = TimeSpan_get_Hours_m770B4B777A816E051EFDA317C28DA9A4F39D6CFB((&V_1), NULL);
		int32_t L_10;
		L_10 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)L_9), NULL);
		V_2 = L_10;
		// int minutes = Mathf.FloorToInt(t.Minutes);
		int32_t L_11;
		L_11 = TimeSpan_get_Minutes_m93E37D01CD6DA2DE5B35609D740D322E270B678F((&V_1), NULL);
		int32_t L_12;
		L_12 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)L_11), NULL);
		V_3 = L_12;
		// int seconds = Mathf.FloorToInt(t.Seconds);
		int32_t L_13;
		L_13 = TimeSpan_get_Seconds_m8CA21613DC31BD025C5D30D41BAD0ED50827578B((&V_1), NULL);
		int32_t L_14;
		L_14 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)L_13), NULL);
		V_4 = L_14;
		// if (segments == 1)
		uint8_t L_15 = ___segments1;
		V_8 = (bool)((((int32_t)L_15) == ((int32_t)1))? 1 : 0);
		bool L_16 = V_8;
		if (!L_16)
		{
			goto IL_009a;
		}
	}
	{
		// seconds += (minutes * 60);
		int32_t L_17 = V_4;
		int32_t L_18 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)60)))));
		// seconds += (hours * 3600);
		int32_t L_19 = V_4;
		int32_t L_20 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, ((int32_t)il2cpp_codegen_multiply(L_20, ((int32_t)3600)))));
		// timeText = string.Format("{0:D2}", seconds);
		int32_t L_21 = V_4;
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
		String_t* L_24;
		L_24 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral1D57CB08C0BDA4B355B51FE76856B92A02400F50, L_23, NULL);
		V_5 = L_24;
		goto IL_00e9;
	}

IL_009a:
	{
		// else if (segments == 2)
		uint8_t L_25 = ___segments1;
		V_9 = (bool)((((int32_t)L_25) == ((int32_t)2))? 1 : 0);
		bool L_26 = V_9;
		if (!L_26)
		{
			goto IL_00c8;
		}
	}
	{
		// minutes += (hours * 60);
		int32_t L_27 = V_3;
		int32_t L_28 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, ((int32_t)il2cpp_codegen_multiply(L_28, ((int32_t)60)))));
		// timeText = string.Format("{0:D2}:{1:D2}", minutes, seconds);
		int32_t L_29 = V_3;
		int32_t L_30 = L_29;
		RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
		int32_t L_32 = V_4;
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_33);
		String_t* L_35;
		L_35 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral525F5C8DBE02A4413AF96F338A4166104DA95AE4, L_31, L_34, NULL);
		V_5 = L_35;
		goto IL_00e9;
	}

IL_00c8:
	{
		// timeText = string.Format("{0:D2}:{1:D2}:{2:D2}", hours, minutes, seconds);
		int32_t L_36 = V_2;
		int32_t L_37 = L_36;
		RuntimeObject* L_38 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_37);
		int32_t L_39 = V_3;
		int32_t L_40 = L_39;
		RuntimeObject* L_41 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_40);
		int32_t L_42 = V_4;
		int32_t L_43 = L_42;
		RuntimeObject* L_44 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_43);
		String_t* L_45;
		L_45 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral2774AE9610CAB8B564AEA7618945AAAFA295BAD9, L_38, L_41, L_44, NULL);
		V_5 = L_45;
	}

IL_00e9:
	{
		// return timeText;
		String_t* L_46 = V_5;
		V_7 = L_46;
		goto IL_00ef;
	}

IL_00ef:
	{
		// }
		String_t* L_47 = V_7;
		return L_47;
	}
}
// System.Single GameKit.Dependencies.Utilities.Floats::RandomInclusiveRange(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Floats_RandomInclusiveRange_m7B475B6ED935825A0594E14DFA589F4F4990AFA0 (float ___minimum0, float ___maximum1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Floats_t54BC254F0C30D7F4D5A75148FE42847BA7143FCA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	float V_3 = 0.0f;
	{
		// double min = Convert.ToDouble(minimum);
		float L_0 = ___minimum0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = Convert_ToDouble_mA0069B20491E14DA829FAD261C279A5143B2FAED(L_0, NULL);
		V_0 = L_1;
		// double max = Convert.ToDouble(maximum);
		float L_2 = ___maximum1;
		double L_3;
		L_3 = Convert_ToDouble_mA0069B20491E14DA829FAD261C279A5143B2FAED(L_2, NULL);
		V_1 = L_3;
		// double result = (_random.NextDouble() * (max - min)) + min;
		il2cpp_codegen_runtime_class_init_inline(Floats_t54BC254F0C30D7F4D5A75148FE42847BA7143FCA_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_4 = ((Floats_t54BC254F0C30D7F4D5A75148FE42847BA7143FCA_StaticFields*)il2cpp_codegen_static_fields_for(Floats_t54BC254F0C30D7F4D5A75148FE42847BA7143FCA_il2cpp_TypeInfo_var))->____random_0;
		NullCheck(L_4);
		double L_5;
		L_5 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_4);
		double L_6 = V_1;
		double L_7 = V_0;
		double L_8 = V_0;
		V_2 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_5, ((double)il2cpp_codegen_subtract(L_6, L_7)))), L_8));
		// return Convert.ToSingle(result);
		double L_9 = V_2;
		float L_10;
		L_10 = Convert_ToSingle_mF6ADEF60A6A97E9E7E410D8D15B26F2D5995151E(L_9, NULL);
		V_3 = L_10;
		goto IL_0029;
	}

IL_0029:
	{
		// }
		float L_11 = V_3;
		return L_11;
	}
}
// System.Single GameKit.Dependencies.Utilities.Floats::Random01()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Floats_Random01_m287C9AE22460508C2B7A93C3AFE6B01E2FD6DE42 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Floats_t54BC254F0C30D7F4D5A75148FE42847BA7143FCA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// return RandomInclusiveRange(0f, 1f);
		il2cpp_codegen_runtime_class_init_inline(Floats_t54BC254F0C30D7F4D5A75148FE42847BA7143FCA_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = Floats_RandomInclusiveRange_m7B475B6ED935825A0594E14DFA589F4F4990AFA0((0.0f), (1.0f), NULL);
		V_0 = L_0;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GameKit.Dependencies.Utilities.Floats::Near(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Floats_Near_m1AED76AC38E814FBA475C78427FAE7669C84D788 (float ___a0, float ___b1, float ___tolerance2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return (Mathf.Abs(a - b) <= tolerance);
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___tolerance2;
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Single GameKit.Dependencies.Utilities.Floats::Clamp(System.Single,System.Single,System.Single,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Floats_Clamp_mCBD7AA021841BC3EBC47AFC9332B794342686CE9 (float ___value0, float ___min1, float ___max2, bool* ___clamped3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		// clamped = (value < min);
		bool* L_0 = ___clamped3;
		float L_1 = ___value0;
		float L_2 = ___min1;
		*((int8_t*)L_0) = (int8_t)((((float)L_1) < ((float)L_2))? 1 : 0);
		// if (clamped)
		bool* L_3 = ___clamped3;
		int32_t L_4 = *((uint8_t*)L_3);
		V_0 = (bool)L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0011;
		}
	}
	{
		// return min;
		float L_6 = ___min1;
		V_1 = L_6;
		goto IL_0028;
	}

IL_0011:
	{
		// clamped = (value > min);
		bool* L_7 = ___clamped3;
		float L_8 = ___value0;
		float L_9 = ___min1;
		*((int8_t*)L_7) = (int8_t)((((float)L_8) > ((float)L_9))? 1 : 0);
		// if (clamped)
		bool* L_10 = ___clamped3;
		int32_t L_11 = *((uint8_t*)L_10);
		V_2 = (bool)L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0021;
		}
	}
	{
		// return max;
		float L_13 = ___max2;
		V_1 = L_13;
		goto IL_0028;
	}

IL_0021:
	{
		// clamped = false;
		bool* L_14 = ___clamped3;
		*((int8_t*)L_14) = (int8_t)0;
		// return value;
		float L_15 = ___value0;
		V_1 = L_15;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		float L_16 = V_1;
		return L_16;
	}
}
// System.Single GameKit.Dependencies.Utilities.Floats::Variance(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Floats_Variance_m087C168F59A2ADBFA9DE335780B211E527B759DE (float ___source0, float ___variance1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Floats_t54BC254F0C30D7F4D5A75148FE42847BA7143FCA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float pickedVariance = RandomInclusiveRange(1f - variance, 1f + variance);
		float L_0 = ___variance1;
		float L_1 = ___variance1;
		il2cpp_codegen_runtime_class_init_inline(Floats_t54BC254F0C30D7F4D5A75148FE42847BA7143FCA_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = Floats_RandomInclusiveRange_m7B475B6ED935825A0594E14DFA589F4F4990AFA0(((float)il2cpp_codegen_subtract((1.0f), L_0)), ((float)il2cpp_codegen_add((1.0f), L_1)), NULL);
		V_0 = L_2;
		// return (source * pickedVariance);
		float L_3 = ___source0;
		float L_4 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply(L_3, L_4));
		goto IL_001b;
	}

IL_001b:
	{
		// }
		float L_5 = V_1;
		return L_5;
	}
}
// System.Void GameKit.Dependencies.Utilities.Floats::Variance(System.Single,System.Single,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Floats_Variance_m49F373FC50ECD3057EFA23267EC5D49FBDBA6571 (float ___source0, float ___variance1, float* ___result2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Floats_t54BC254F0C30D7F4D5A75148FE42847BA7143FCA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float pickedVariance = RandomInclusiveRange(1f - variance, 1f + variance);
		float L_0 = ___variance1;
		float L_1 = ___variance1;
		il2cpp_codegen_runtime_class_init_inline(Floats_t54BC254F0C30D7F4D5A75148FE42847BA7143FCA_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = Floats_RandomInclusiveRange_m7B475B6ED935825A0594E14DFA589F4F4990AFA0(((float)il2cpp_codegen_subtract((1.0f), L_0)), ((float)il2cpp_codegen_add((1.0f), L_1)), NULL);
		V_0 = L_2;
		// result = (source * pickedVariance);
		float* L_3 = ___result2;
		float L_4 = ___source0;
		float L_5 = V_0;
		*((float*)L_3) = (float)((float)il2cpp_codegen_multiply(L_4, L_5));
		// }
		return;
	}
}
// System.Single GameKit.Dependencies.Utilities.Floats::PreciseSign(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Floats_PreciseSign_mD00D779C1A78A5DE35D462C5FE7881B81633D0B8 (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		// if (value == 0f)
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) == ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return 0f;
		V_1 = (0.0f);
		goto IL_001e;
	}

IL_0015:
	{
		// return (Mathf.Sign(value));
		float L_2 = ___value0;
		float L_3;
		L_3 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_2, NULL);
		V_1 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		float L_4 = V_1;
		return L_4;
	}
}
// System.Boolean GameKit.Dependencies.Utilities.Floats::InRange(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Floats_InRange_mC3F0B9AFE7AFC38E71481ECD4585A3A447990BB1 (float ___source0, float ___rangeMin1, float ___rangeMax2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return (source >= rangeMin && source <= rangeMax);
		float L_0 = ___source0;
		float L_1 = ___rangeMin1;
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		float L_2 = ___source0;
		float L_3 = ___rangeMax2;
		G_B3_0 = ((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 0;
	}

IL_000f:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Single GameKit.Dependencies.Utilities.Floats::RandomlyFlip(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Floats_RandomlyFlip_m58972E424C014AFFD44EC67A5EC51F33A1584437 (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ints_tC6848D8097CAB468EA0114D30F81F9746AFCF275_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		// if (Ints.RandomInclusiveRange(0, 1) == 0)
		il2cpp_codegen_runtime_class_init_inline(Ints_tC6848D8097CAB468EA0114D30F81F9746AFCF275_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Ints_RandomInclusiveRange_mCAD43967ADE3D9E3F06CB36A00DA61E1EC7CD165(0, 1, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return value;
		float L_2 = ___value0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0013:
	{
		// return (value *= -1f);
		float L_3 = ___value0;
		float L_4 = ((float)il2cpp_codegen_multiply(L_3, (-1.0f)));
		___value0 = L_4;
		V_1 = L_4;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		float L_5 = V_1;
		return L_5;
	}
}
// System.Void GameKit.Dependencies.Utilities.Floats::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Floats__cctor_m95C6F7738B5D741DDAC9FBD97635E2E54763DEEB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Floats_t54BC254F0C30D7F4D5A75148FE42847BA7143FCA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static System.Random _random = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		((Floats_t54BC254F0C30D7F4D5A75148FE42847BA7143FCA_StaticFields*)il2cpp_codegen_static_fields_for(Floats_t54BC254F0C30D7F4D5A75148FE42847BA7143FCA_il2cpp_TypeInfo_var))->____random_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Floats_t54BC254F0C30D7F4D5A75148FE42847BA7143FCA_StaticFields*)il2cpp_codegen_static_fields_for(Floats_t54BC254F0C30D7F4D5A75148FE42847BA7143FCA_il2cpp_TypeInfo_var))->____random_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt16 GameKit.Dependencies.Utilities.Hashing::GetStableHashU16(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Hashing_GetStableHashU16_m88BF96CC7DC012318213DA73071E0E2D5C57E983 (String_t* ___txt0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		// uint hash32 = txt.GetStableHashU32();
		String_t* L_0 = ___txt0;
		uint32_t L_1;
		L_1 = Hashing_GetStableHashU32_m401FAE346226B5872FB9117BA0A0644E3DB15925(L_0, NULL);
		V_0 = L_1;
		// return (ushort)((hash32 >> 16) ^ hash32);
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		V_1 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((uint32_t)L_2>>((int32_t)16)))^(int32_t)L_3)));
		goto IL_0012;
	}

IL_0012:
	{
		// }
		uint16_t L_4 = V_1;
		return L_4;
	}
}
// System.UInt32 GameKit.Dependencies.Utilities.Hashing::GetStableHashU32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Hashing_GetStableHashU32_m401FAE346226B5872FB9117BA0A0644E3DB15925 (String_t* ___txt0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	bool V_3 = false;
	uint32_t V_4 = 0;
	{
		// uint hash = FNV_offset_basis32;
		V_0 = ((int32_t)-2128831035);
		// for (int i = 0; i < txt.Length; i++)
		V_1 = 0;
		goto IL_0026;
	}

IL_000c:
	{
		// uint ch = txt[i];
		String_t* L_0 = ___txt0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, L_1, NULL);
		V_2 = L_2;
		// hash = hash * FNV_prime32;
		uint32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)16777619)));
		// hash = hash ^ ch;
		uint32_t L_4 = V_0;
		uint32_t L_5 = V_2;
		V_0 = ((int32_t)((int32_t)L_4^(int32_t)L_5));
		// for (int i = 0; i < txt.Length; i++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0026:
	{
		// for (int i = 0; i < txt.Length; i++)
		int32_t L_7 = V_1;
		String_t* L_8 = ___txt0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		V_3 = (bool)((((int32_t)L_7) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_3;
		if (L_10)
		{
			goto IL_000c;
		}
	}
	{
		// return hash;
		uint32_t L_11 = V_0;
		V_4 = L_11;
		goto IL_0038;
	}

IL_0038:
	{
		// }
		uint32_t L_12 = V_4;
		return L_12;
	}
}
// System.UInt64 GameKit.Dependencies.Utilities.Hashing::GetStableHashU64(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Hashing_GetStableHashU64_m9F330384CA1EF12DF934D526861B792EA8E342E7 (String_t* ___txt0, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	bool V_3 = false;
	uint64_t V_4 = 0;
	{
		// ulong hash = FNV_offset_basis64;
		V_0 = ((int64_t)-3750763034362895579LL);
		// for (int i = 0; i < txt.Length; i++)
		V_1 = 0;
		goto IL_002f;
	}

IL_0010:
	{
		// ulong ch = txt[i];
		String_t* L_0 = ___txt0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, L_1, NULL);
		V_2 = ((int64_t)(uint64_t)L_2);
		// hash = hash * FNV_prime64;
		uint64_t L_3 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_3, ((int64_t)1099511628211LL)));
		// hash = hash ^ ch;
		uint64_t L_4 = V_0;
		uint64_t L_5 = V_2;
		V_0 = ((int64_t)((int64_t)L_4^(int64_t)L_5));
		// for (int i = 0; i < txt.Length; i++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_002f:
	{
		// for (int i = 0; i < txt.Length; i++)
		int32_t L_7 = V_1;
		String_t* L_8 = ___txt0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		V_3 = (bool)((((int32_t)L_7) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_3;
		if (L_10)
		{
			goto IL_0010;
		}
	}
	{
		// return hash;
		uint64_t L_11 = V_0;
		V_4 = L_11;
		goto IL_0041;
	}

IL_0041:
	{
		// }
		uint64_t L_12 = V_4;
		return L_12;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String GameKit.Dependencies.Utilities.Ints::PadInt(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Ints_PadInt_mFD7BCD9491E0BF1306ADCAE495EC295AAACA7E85 (int32_t ___value0, int32_t ___padding1, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return value.ToString().PadLeft(padding, '0');
		String_t* L_0;
		L_0 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___value0), NULL);
		int32_t L_1 = ___padding1;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_0, L_1, ((int32_t)48), NULL);
		V_0 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Int32 GameKit.Dependencies.Utilities.Ints::RandomInclusiveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ints_RandomInclusiveRange_mCAD43967ADE3D9E3F06CB36A00DA61E1EC7CD165 (int32_t ___minimum0, int32_t ___maximum1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ints_tC6848D8097CAB468EA0114D30F81F9746AFCF275_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return _random.Next(minimum, maximum + 1);
		il2cpp_codegen_runtime_class_init_inline(Ints_tC6848D8097CAB468EA0114D30F81F9746AFCF275_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = ((Ints_tC6848D8097CAB468EA0114D30F81F9746AFCF275_StaticFields*)il2cpp_codegen_static_fields_for(Ints_tC6848D8097CAB468EA0114D30F81F9746AFCF275_il2cpp_TypeInfo_var))->____random_0;
		int32_t L_1 = ___minimum0;
		int32_t L_2 = ___maximum1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_0, L_1, ((int32_t)il2cpp_codegen_add(L_2, 1)));
		V_0 = L_3;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 GameKit.Dependencies.Utilities.Ints::RandomExclusiveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ints_RandomExclusiveRange_m1139031BB599099D1BE4F28D6B05A7223C40CBDE (int32_t ___minimum0, int32_t ___maximum1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ints_tC6848D8097CAB468EA0114D30F81F9746AFCF275_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return _random.Next(minimum, maximum);
		il2cpp_codegen_runtime_class_init_inline(Ints_tC6848D8097CAB468EA0114D30F81F9746AFCF275_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = ((Ints_tC6848D8097CAB468EA0114D30F81F9746AFCF275_StaticFields*)il2cpp_codegen_static_fields_for(Ints_tC6848D8097CAB468EA0114D30F81F9746AFCF275_il2cpp_TypeInfo_var))->____random_0;
		int32_t L_1 = ___minimum0;
		int32_t L_2 = ___maximum1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_0, L_1, L_2);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 GameKit.Dependencies.Utilities.Ints::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ints_Clamp_m4A08226912F5231360763BE3808A1A2A1EEF7311 (int32_t ___value0, int32_t ___minimum1, int32_t ___maximum2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// if (value < minimum)
		int32_t L_0 = ___value0;
		int32_t L_1 = ___minimum1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		// value = minimum;
		int32_t L_3 = ___minimum1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		// else if (value > maximum)
		int32_t L_4 = ___value0;
		int32_t L_5 = ___maximum2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		// value = maximum;
		int32_t L_7 = ___maximum2;
		___value0 = L_7;
	}

IL_0019:
	{
		// return value;
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		int32_t L_9 = V_2;
		return L_9;
	}
}
// System.Boolean GameKit.Dependencies.Utilities.Ints::ValuesMatch(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ints_ValuesMatch_mCDACE36D6E65A7635608B4026384C0359C87FE91 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE62E3D8794381D662905D72B7CCA4EE4BE589C41);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (values.Length == 0)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___values0;
		NullCheck(L_0);
		V_1 = (bool)((((int32_t)(((RuntimeArray*)L_0)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// Debug.Log("Ints -> ValuesMatch -> values array is empty.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralE62E3D8794381D662905D72B7CCA4EE4BE589C41, NULL);
		// return false;
		V_2 = (bool)0;
		goto IL_004b;
	}

IL_001a:
	{
		// int firstValue = values[0];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___values0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		int32_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		// for (int i = 1; i < values.Length; i++)
		V_3 = 1;
		goto IL_003b;
	}

IL_0022:
	{
		// if (firstValue != values[i])
		int32_t L_5 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___values0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_4 = (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0036;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_004b;
	}

IL_0036:
	{
		// for (int i = 1; i < values.Length; i++)
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003b:
	{
		// for (int i = 1; i < values.Length; i++)
		int32_t L_12 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = ___values0;
		NullCheck(L_13);
		V_5 = (bool)((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))? 1 : 0);
		bool L_14 = V_5;
		if (L_14)
		{
			goto IL_0022;
		}
	}
	{
		// return true;
		V_2 = (bool)1;
		goto IL_004b;
	}

IL_004b:
	{
		// }
		bool L_15 = V_2;
		return L_15;
	}
}
// System.Void GameKit.Dependencies.Utilities.Ints::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ints__cctor_m70DA4906735A1A88BC76DEEF907A381C4ABAB724 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ints_tC6848D8097CAB468EA0114D30F81F9746AFCF275_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static System.Random _random = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		((Ints_tC6848D8097CAB468EA0114D30F81F9746AFCF275_StaticFields*)il2cpp_codegen_static_fields_for(Ints_tC6848D8097CAB468EA0114D30F81F9746AFCF275_il2cpp_TypeInfo_var))->____random_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Ints_tC6848D8097CAB468EA0114D30F81F9746AFCF275_StaticFields*)il2cpp_codegen_static_fields_for(Ints_tC6848D8097CAB468EA0114D30F81F9746AFCF275_il2cpp_TypeInfo_var))->____random_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.Layers::TryInitializeInteractableLayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Layers_TryInitializeInteractableLayers_m96B2110202A79747CB4D3AA20C786A6790E48205 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Layers_t4E7DAB7E32C44CB8266DEFBE777E6D649FB70834_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// if (_interactablesLayers != null)
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_0 = ((Layers_t4E7DAB7E32C44CB8266DEFBE777E6D649FB70834_StaticFields*)il2cpp_codegen_static_fields_for(Layers_t4E7DAB7E32C44CB8266DEFBE777E6D649FB70834_il2cpp_TypeInfo_var))->____interactablesLayers_0;
		V_0 = (bool)((!(((RuntimeObject*)(Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		goto IL_006d;
	}

IL_000f:
	{
		// _interactablesLayers = new Dictionary<int, int>();
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_2 = (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*)il2cpp_codegen_object_new(Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F(L_2, Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_RuntimeMethod_var);
		((Layers_t4E7DAB7E32C44CB8266DEFBE777E6D649FB70834_StaticFields*)il2cpp_codegen_static_fields_for(Layers_t4E7DAB7E32C44CB8266DEFBE777E6D649FB70834_il2cpp_TypeInfo_var))->____interactablesLayers_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Layers_t4E7DAB7E32C44CB8266DEFBE777E6D649FB70834_StaticFields*)il2cpp_codegen_static_fields_for(Layers_t4E7DAB7E32C44CB8266DEFBE777E6D649FB70834_il2cpp_TypeInfo_var))->____interactablesLayers_0), (void*)L_2);
		// for (int i = 0; i < 32; i++)
		V_1 = 0;
		goto IL_0062;
	}

IL_001d:
	{
		// int mask = 0;
		V_2 = 0;
		// for (int j = 0; j < 32; j++)
		V_3 = 0;
		goto IL_0045;
	}

IL_0024:
	{
		// if (!Physics.GetIgnoreLayerCollision(i, j))
		int32_t L_3 = V_1;
		int32_t L_4 = V_3;
		bool L_5;
		L_5 = Physics_GetIgnoreLayerCollision_m6FAFF3D7B295E3ECC55DF0F3032AD4DB6210255D(L_3, L_4, NULL);
		V_4 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		// mask |= 1 << j;
		int32_t L_7 = V_2;
		int32_t L_8 = V_3;
		V_2 = ((int32_t)(L_7|((int32_t)(1<<((int32_t)(L_8&((int32_t)31)))))));
	}

IL_0040:
	{
		// for (int j = 0; j < 32; j++)
		int32_t L_9 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0045:
	{
		// for (int j = 0; j < 32; j++)
		int32_t L_10 = V_3;
		V_5 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_11 = V_5;
		if (L_11)
		{
			goto IL_0024;
		}
	}
	{
		// _interactablesLayers[i] = mask;
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_12 = ((Layers_t4E7DAB7E32C44CB8266DEFBE777E6D649FB70834_StaticFields*)il2cpp_codegen_static_fields_for(Layers_t4E7DAB7E32C44CB8266DEFBE777E6D649FB70834_il2cpp_TypeInfo_var))->____interactablesLayers_0;
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		NullCheck(L_12);
		Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF(L_12, L_13, L_14, Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF_RuntimeMethod_var);
		// for (int i = 0; i < 32; i++)
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0062:
	{
		// for (int i = 0; i < 32; i++)
		int32_t L_16 = V_1;
		V_6 = (bool)((((int32_t)L_16) < ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_17 = V_6;
		if (L_17)
		{
			goto IL_001d;
		}
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Int32 GameKit.Dependencies.Utilities.Layers::GetInteractableLayersValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Layers_GetInteractableLayersValue_mC4B7C7931EF3A25B069A28EFBF2A9B845689F383 (int32_t ___layer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Layers_t4E7DAB7E32C44CB8266DEFBE777E6D649FB70834_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// TryInitializeInteractableLayers();
		Layers_TryInitializeInteractableLayers_m96B2110202A79747CB4D3AA20C786A6790E48205(NULL);
		// return _interactablesLayers[layer];
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_0 = ((Layers_t4E7DAB7E32C44CB8266DEFBE777E6D649FB70834_StaticFields*)il2cpp_codegen_static_fields_for(Layers_t4E7DAB7E32C44CB8266DEFBE777E6D649FB70834_il2cpp_TypeInfo_var))->____interactablesLayers_0;
		int32_t L_1 = ___layer0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F(L_0, L_1, Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		int32_t L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.LayerMask GameKit.Dependencies.Utilities.Layers::GetInteractableLayersMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB Layers_GetInteractableLayersMask_m5C5D0AB880FC0A9C3EF2D1B87113250897CB6EB0 (int32_t ___layer0, const RuntimeMethod* method) 
{
	{
		// public static LayerMask GetInteractableLayersMask(int layer) => (LayerMask)GetInteractableLayersValue(layer);
		int32_t L_0 = ___layer0;
		int32_t L_1;
		L_1 = Layers_GetInteractableLayersValue_mC4B7C7931EF3A25B069A28EFBF2A9B845689F383(L_0, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_2;
		L_2 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_1, NULL);
		return L_2;
	}
}
// System.Int32 GameKit.Dependencies.Utilities.Layers::GetInteractableLayersValue(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Layers_GetInteractableLayersValue_mFBB8F1418DFD918CF02D96E8492BB47E622E502A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method) 
{
	{
		// public static int GetInteractableLayersValue(GameObject go) => GetInteractableLayersValue(go.layer);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___go0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_0, NULL);
		int32_t L_2;
		L_2 = Layers_GetInteractableLayersValue_mC4B7C7931EF3A25B069A28EFBF2A9B845689F383(L_1, NULL);
		return L_2;
	}
}
// UnityEngine.LayerMask GameKit.Dependencies.Utilities.Layers::GetInteractableLayersMask(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB Layers_GetInteractableLayersMask_m81C5DFE8DCDDEACE9544C659B9576F944CF29987 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method) 
{
	{
		// public static LayerMask GetInteractableLayersMask(GameObject go) => (LayerMask)GetInteractableLayersValue(go.layer);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___go0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_0, NULL);
		int32_t L_2;
		L_2 = Layers_GetInteractableLayersValue_mC4B7C7931EF3A25B069A28EFBF2A9B845689F383(L_1, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_3;
		L_3 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_2, NULL);
		return L_3;
	}
}
// System.Int32 GameKit.Dependencies.Utilities.Layers::LayerMaskToLayerNumber(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Layers_LayerMaskToLayerNumber_mD28DA97F8039D39B566307F2F528FF650611FDE6 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return LayerValueToLayerNumber(mask.value);
		int32_t L_0;
		L_0 = LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974((&___mask0), NULL);
		int32_t L_1;
		L_1 = Layers_LayerValueToLayerNumber_m87885A124275BB2A10D5860B84BADCED0B393AD2(L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 GameKit.Dependencies.Utilities.Layers::LayerValueToLayerNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Layers_LayerValueToLayerNumber_m87885A124275BB2A10D5860B84BADCED0B393AD2 (int32_t ___bitmask0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		// int result = bitmask > 0 ? 0 : 31;
		int32_t L_0 = ___bitmask0;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		G_B3_0 = ((int32_t)31);
		goto IL_000a;
	}

IL_0009:
	{
		G_B3_0 = 0;
	}

IL_000a:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_000d:
	{
		// bitmask = bitmask >> 1;
		int32_t L_1 = ___bitmask0;
		___bitmask0 = ((int32_t)(L_1>>1));
		// result++;
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0018:
	{
		// while (bitmask > 1)
		int32_t L_3 = ___bitmask0;
		V_1 = (bool)((((int32_t)L_3) > ((int32_t)1))? 1 : 0);
		bool L_4 = V_1;
		if (L_4)
		{
			goto IL_000d;
		}
	}
	{
		// return result;
		int32_t L_5 = V_0;
		V_2 = L_5;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		int32_t L_6 = V_2;
		return L_6;
	}
}
// System.Boolean GameKit.Dependencies.Utilities.Layers::ContainsLayer(UnityEngine.LayerMask,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Layers_ContainsLayer_m95DC86B0AA4EE9BCE21E86312E94CE0E9FFC51DC (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask0, int32_t ___layer1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return (layerMask == (layerMask | (1 << layer)));
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = ___layerMask0;
		int32_t L_1;
		L_1 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_0, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_2 = ___layerMask0;
		int32_t L_3;
		L_3 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_2, NULL);
		int32_t L_4 = ___layer1;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)(L_3|((int32_t)(1<<((int32_t)(L_4&((int32_t)31)))))))))? 1 : 0);
		goto IL_0019;
	}

IL_0019:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 GameKit.Dependencies.Utilities.LayoutGroups::EntriesPerWidth(UnityEngine.UI.GridLayoutGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayoutGroups_EntriesPerWidth_mD4F5D2C4FB43B60E6B45A4C95BD65158B3B321AF (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* ___lg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// RectTransform rectTransform = lg.GetComponent<RectTransform>();
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_0 = ___lg0;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_0, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		V_0 = L_1;
		// return Mathf.CeilToInt(rectTransform.rect.width / lg.cellSize.x);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = V_0;
		NullCheck(L_2);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		L_3 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_2, NULL);
		V_1 = L_3;
		float L_4;
		L_4 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_1), NULL);
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_5 = ___lg0;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = GridLayoutGroup_get_cellSize_m30D8A051F44C8EE0C87B6D6CDDC00C2592A78B6D(L_5, NULL);
		float L_7 = L_6.___x_0;
		int32_t L_8;
		L_8 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)(L_4/L_7)), NULL);
		V_2 = L_8;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		int32_t L_9 = V_2;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Color GameKit.Dependencies.Utilities.Materials::GetColor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Materials_GetColor_mC91D8ECA6FDC3223434C26A7982B097D69B09F32 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// if (material.HasProperty("_Color"))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___material0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_0, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return material.color;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___material0;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_3, NULL);
		V_1 = L_4;
		goto IL_003e;
	}

IL_0019:
	{
		// else if (material.HasProperty("_TintColor"))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___material0;
		NullCheck(L_5);
		bool L_6;
		L_6 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_5, _stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7, NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		// return material.GetColor("_TintColor");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = ___material0;
		NullCheck(L_8);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609(L_8, _stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7, NULL);
		V_1 = L_9;
		goto IL_003e;
	}

IL_0036:
	{
		// return Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		V_1 = L_10;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = V_1;
		return L_11;
	}
}
// System.Void GameKit.Dependencies.Utilities.Materials::SetColor(UnityEngine.Material,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Materials_SetColor_m9082DEC90DB804C72834A35D75D4C779ADA39063 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (material.HasProperty("_Color"))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___material0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_0, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// material.color = color;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___material0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___color1;
		NullCheck(L_3);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_3, L_4, NULL);
		goto IL_0036;
	}

IL_001a:
	{
		// else if (material.HasProperty("_TintColor"))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___material0;
		NullCheck(L_5);
		bool L_6;
		L_6 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_5, _stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		// material.SetColor("_TintColor", color);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = ___material0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___color1;
		NullCheck(L_8);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_8, _stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7, L_9, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.SByte GameKit.Dependencies.Utilities.Maths::ClampSByte(System.Int64,System.SByte,System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t Maths_ClampSByte_mE2A22EF9C8E779B39756762C5F7F7D4C67EA576F (int64_t ___value0, int8_t ___min1, int8_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int8_t V_1 = 0x0;
	bool V_2 = false;
	{
		// if (value < min)
		int64_t L_0 = ___value0;
		int8_t L_1 = ___min1;
		V_0 = (bool)((((int64_t)L_0) < ((int64_t)((int64_t)L_1)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		// return min;
		int8_t L_3 = ___min1;
		V_1 = L_3;
		goto IL_0020;
	}

IL_000e:
	{
		// else if (value > max)
		int64_t L_4 = ___value0;
		int8_t L_5 = ___max2;
		V_2 = (bool)((((int64_t)L_4) > ((int64_t)((int64_t)L_5)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_001b;
		}
	}
	{
		// return max;
		int8_t L_7 = ___max2;
		V_1 = L_7;
		goto IL_0020;
	}

IL_001b:
	{
		// return (sbyte)value;
		int64_t L_8 = ___value0;
		V_1 = ((int8_t)L_8);
		goto IL_0020;
	}

IL_0020:
	{
		// }
		int8_t L_9 = V_1;
		return L_9;
	}
}
// System.Double GameKit.Dependencies.Utilities.Maths::ClampDouble(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Maths_ClampDouble_m48468C29718EDBC9FD18C3AD7E1936AF9749C9E3 (double ___value0, double ___min1, double ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	double V_1 = 0.0;
	bool V_2 = false;
	{
		// if (value < min)
		double L_0 = ___value0;
		double L_1 = ___min1;
		V_0 = (bool)((((double)L_0) < ((double)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000d;
		}
	}
	{
		// return min;
		double L_3 = ___min1;
		V_1 = L_3;
		goto IL_001d;
	}

IL_000d:
	{
		// else if (value > max)
		double L_4 = ___value0;
		double L_5 = ___max2;
		V_2 = (bool)((((double)L_4) > ((double)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		// return max;
		double L_7 = ___max2;
		V_1 = L_7;
		goto IL_001d;
	}

IL_0019:
	{
		// return value;
		double L_8 = ___value0;
		V_1 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		double L_9 = V_1;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean GameKit.Dependencies.Utilities.Objects::IsDestroyed(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Objects_IsDestroyed_m1D981D1493D50F878735EA211B68F47DC05FA00F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return (gameObject == null && !ReferenceEquals(gameObject, null));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___gameObject0;
		G_B3_0 = ((!(((RuntimeObject*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 0;
	}

IL_0011:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single GameKit.Dependencies.Utilities.Particles::StopParticleSystem(UnityEngine.ParticleSystem[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particles_StopParticleSystem_m20853AC4AF8E35075F414E8C765D1A68171F2D5F (ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* ___systems0, bool ___stopLoopingOnly1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return StopParticleSystem(systems, stopLoopingOnly, ParticleSystemStopBehavior.StopEmitting);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_0 = ___systems0;
		bool L_1 = ___stopLoopingOnly1;
		float L_2;
		L_2 = Particles_StopParticleSystem_mB6E38D4ED3B5D1EA387A26ABFC370B8724C03D9C(L_0, L_1, 1, NULL);
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		float L_3 = V_0;
		return L_3;
	}
}
// System.Single GameKit.Dependencies.Utilities.Particles::StopParticleSystem(UnityEngine.ParticleSystem[],UnityEngine.ParticleSystemStopBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particles_StopParticleSystem_m55122A44CCB8401A4D3769F3F954A7B3597111AE (ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* ___systems0, int32_t ___stopBehavior1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return StopParticleSystem(systems, false, stopBehavior);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_0 = ___systems0;
		int32_t L_1 = ___stopBehavior1;
		float L_2;
		L_2 = Particles_StopParticleSystem_mB6E38D4ED3B5D1EA387A26ABFC370B8724C03D9C(L_0, (bool)0, L_1, NULL);
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		float L_3 = V_0;
		return L_3;
	}
}
// System.Single GameKit.Dependencies.Utilities.Particles::StopParticleSystem(UnityEngine.ParticleSystem[],System.Boolean,UnityEngine.ParticleSystemStopBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particles_StopParticleSystem_mB6E38D4ED3B5D1EA387A26ABFC370B8724C03D9C (ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* ___systems0, bool ___stopLoopingOnly1, int32_t ___stopBehavior2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		// if (systems == null)
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_0 = ___systems0;
		V_1 = (bool)((((RuntimeObject*)(ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return 0f;
		V_2 = (0.0f);
		goto IL_0041;
	}

IL_0011:
	{
		// float playOutDuration = 0f;
		V_0 = (0.0f);
		// for (int i = 0; i < systems.Length; i++)
		V_3 = 0;
		goto IL_0031;
	}

IL_001b:
	{
		// playOutDuration = Mathf.Max(playOutDuration, StopParticleSystem(systems[i], stopLoopingOnly, stopBehavior));
		float L_2 = V_0;
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_3 = ___systems0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		bool L_7 = ___stopLoopingOnly1;
		int32_t L_8 = ___stopBehavior2;
		float L_9;
		L_9 = Particles_StopParticleSystem_m1A387442392D0BCFF363F412FEF93CBC9AB821B4(L_6, L_7, L_8, (bool)0, NULL);
		float L_10;
		L_10 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_2, L_9, NULL);
		V_0 = L_10;
		// for (int i = 0; i < systems.Length; i++)
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0031:
	{
		// for (int i = 0; i < systems.Length; i++)
		int32_t L_12 = V_3;
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_13 = ___systems0;
		NullCheck(L_13);
		V_4 = (bool)((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))? 1 : 0);
		bool L_14 = V_4;
		if (L_14)
		{
			goto IL_001b;
		}
	}
	{
		// return playOutDuration;
		float L_15 = V_0;
		V_2 = L_15;
		goto IL_0041;
	}

IL_0041:
	{
		// }
		float L_16 = V_2;
		return L_16;
	}
}
// System.Single GameKit.Dependencies.Utilities.Particles::StopParticleSystem(UnityEngine.ParticleSystem,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particles_StopParticleSystem_m270BA4B8C05CB2C0FA6333BC86FADE165CE7B196 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___system0, bool ___stopLoopingOnly1, bool ___stopChildren2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return StopParticleSystem(system, stopLoopingOnly, ParticleSystemStopBehavior.StopEmitting, stopChildren);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ___system0;
		bool L_1 = ___stopLoopingOnly1;
		bool L_2 = ___stopChildren2;
		float L_3;
		L_3 = Particles_StopParticleSystem_m1A387442392D0BCFF363F412FEF93CBC9AB821B4(L_0, L_1, 1, L_2, NULL);
		V_0 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		float L_4 = V_0;
		return L_4;
	}
}
// System.Single GameKit.Dependencies.Utilities.Particles::StopParticleSystem(UnityEngine.ParticleSystem,UnityEngine.ParticleSystemStopBehavior,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particles_StopParticleSystem_m349E9FCE1E4D0B01E0BB02CCDFA3E40F99AAB6B2 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___system0, int32_t ___stopBehavior1, bool ___stopChildren2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return StopParticleSystem(system, false, stopBehavior, stopChildren);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ___system0;
		int32_t L_1 = ___stopBehavior1;
		bool L_2 = ___stopChildren2;
		float L_3;
		L_3 = Particles_StopParticleSystem_m1A387442392D0BCFF363F412FEF93CBC9AB821B4(L_0, (bool)0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		float L_4 = V_0;
		return L_4;
	}
}
// System.Single GameKit.Dependencies.Utilities.Particles::StopParticleSystem(UnityEngine.ParticleSystem,System.Boolean,UnityEngine.ParticleSystemStopBehavior,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particles_StopParticleSystem_m1A387442392D0BCFF363F412FEF93CBC9AB821B4 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___system0, bool ___stopLoopingOnly1, int32_t ___stopBehavior2, bool ___stopChildren3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	bool V_4 = false;
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* V_5 = NULL;
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	{
		// if (system == null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ___system0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return 0f;
		V_3 = (0.0f);
		goto IL_008c;
	}

IL_0014:
	{
		// if (stopChildren)
		bool L_3 = ___stopChildren3;
		V_4 = L_3;
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// ParticleSystem[] all = system.GetComponentsInChildren<ParticleSystem>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_5 = ___system0;
		NullCheck(L_5);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_6;
		L_6 = Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D(L_5, Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D_RuntimeMethod_var);
		V_5 = L_6;
		// StopParticleSystem(all, stopLoopingOnly, stopBehavior);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_7 = V_5;
		bool L_8 = ___stopLoopingOnly1;
		int32_t L_9 = ___stopBehavior2;
		float L_10;
		L_10 = Particles_StopParticleSystem_mB6E38D4ED3B5D1EA387A26ABFC370B8724C03D9C(L_7, L_8, L_9, NULL);
	}

IL_002f:
	{
		// float playOutDuration = 0f;
		V_0 = (0.0f);
		// float timeLeft = system.main.duration - system.time;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_11 = ___system0;
		NullCheck(L_11);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_12;
		L_12 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_11, NULL);
		V_6 = L_12;
		float L_13;
		L_13 = MainModule_get_duration_mDCB80E6BD3B6B2DFB92E41FBCCA154D7E7150EB1((&V_6), NULL);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_14 = ___system0;
		NullCheck(L_14);
		float L_15;
		L_15 = ParticleSystem_get_time_mDB612DCED4B4345E40BE98597A5895F48BC0ECDC(L_14, NULL);
		V_1 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		// playOutDuration = Mathf.Max(playOutDuration, timeLeft);
		float L_16 = V_0;
		float L_17 = V_1;
		float L_18;
		L_18 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_16, L_17, NULL);
		V_0 = L_18;
		// if (stopLoopingOnly)
		bool L_19 = ___stopLoopingOnly1;
		V_7 = L_19;
		bool L_20 = V_7;
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		// if (system.main.loop)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_21 = ___system0;
		NullCheck(L_21);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_22;
		L_22 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_21, NULL);
		V_6 = L_22;
		bool L_23;
		L_23 = MainModule_get_loop_m4F75CD377C0555635995F7C1F8D580517473EDF8((&V_6), NULL);
		V_8 = L_23;
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_007a;
		}
	}
	{
		// system.Stop(false, stopBehavior);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_25 = ___system0;
		int32_t L_26 = ___stopBehavior2;
		NullCheck(L_25);
		ParticleSystem_Stop_mB5761CB85083F593FFEC3D27931CACF1855A6326(L_25, (bool)0, L_26, NULL);
	}

IL_007a:
	{
		goto IL_0088;
	}

IL_007d:
	{
		// system.Stop(false, stopBehavior);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_27 = ___system0;
		int32_t L_28 = ___stopBehavior2;
		NullCheck(L_27);
		ParticleSystem_Stop_mB5761CB85083F593FFEC3D27931CACF1855A6326(L_27, (bool)0, L_28, NULL);
	}

IL_0088:
	{
		// return playOutDuration;
		float L_29 = V_0;
		V_3 = L_29;
		goto IL_008c;
	}

IL_008c:
	{
		// }
		float L_30 = V_3;
		return L_30;
	}
}
// System.Single GameKit.Dependencies.Utilities.Particles::ReturnLongestCycle(UnityEngine.ParticleSystem[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particles_ReturnLongestCycle_mE7925CEC1A75219BE1CDAB11E009E61FAFCC517D (ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* ___systems0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	float V_5 = 0.0f;
	{
		// float longestPlayTime = 0f;
		V_0 = (0.0f);
		// for (int i = 0; i < systems.Length; i++)
		V_1 = 0;
		goto IL_0033;
	}

IL_000b:
	{
		// float timeLeft = systems[i].main.duration - systems[i].time;
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_0 = ___systems0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_4;
		L_4 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_3, NULL);
		V_3 = L_4;
		float L_5;
		L_5 = MainModule_get_duration_mDCB80E6BD3B6B2DFB92E41FBCCA154D7E7150EB1((&V_3), NULL);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_6 = ___systems0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		float L_10;
		L_10 = ParticleSystem_get_time_mDB612DCED4B4345E40BE98597A5895F48BC0ECDC(L_9, NULL);
		V_2 = ((float)il2cpp_codegen_subtract(L_5, L_10));
		// longestPlayTime = Mathf.Max(longestPlayTime, timeLeft);
		float L_11 = V_0;
		float L_12 = V_2;
		float L_13;
		L_13 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_11, L_12, NULL);
		V_0 = L_13;
		// for (int i = 0; i < systems.Length; i++)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0033:
	{
		// for (int i = 0; i < systems.Length; i++)
		int32_t L_15 = V_1;
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_16 = ___systems0;
		NullCheck(L_16);
		V_4 = (bool)((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_000b;
		}
	}
	{
		// return longestPlayTime;
		float L_18 = V_0;
		V_5 = L_18;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		float L_19 = V_5;
		return L_19;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single GameKit.Dependencies.Utilities.Quaternions::GetRate(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single&,System.UInt32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quaternions_GetRate_mF012047F884B3841AA65D60ED52A80F9450258DD (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___goal1, float ___duration2, float* ___angle3, uint32_t ___interval4, float ___tolerance5, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// angle = a.Angle(goal, true);
		float* L_0 = ___angle3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___a0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___goal1;
		float L_3;
		L_3 = Quaternions_Angle_mECF5A040D7422A660671D7004C88A33A633ADB28(L_1, L_2, (bool)1, NULL);
		*((float*)L_0) = (float)L_3;
		// return angle / (duration * interval);
		float* L_4 = ___angle3;
		float L_5 = *((float*)L_4);
		float L_6 = ___duration2;
		uint32_t L_7 = ___interval4;
		V_0 = ((float)(L_5/((float)il2cpp_codegen_multiply(L_6, ((float)((double)(uint32_t)L_7))))));
		goto IL_0017;
	}

IL_0017:
	{
		// }
		float L_8 = V_0;
		return L_8;
	}
}
// System.Boolean GameKit.Dependencies.Utilities.Quaternions::Matches(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternions_Matches_mE5B4DE8B09CF5016FED1637EDAC9A332C49C38BE (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, bool ___precise2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B6_0 = 0;
	{
		// if (precise)
		bool L_0 = ___precise2;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		// return (a.w == b.w && a.x == b.x && a.y == b.y && a.z == b.z);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___a0;
		float L_3 = L_2.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___b1;
		float L_5 = L_4.___w_3;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_0040;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___a0;
		float L_7 = L_6.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___b1;
		float L_9 = L_8.___x_0;
		if ((!(((float)L_7) == ((float)L_9))))
		{
			goto IL_0040;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___a0;
		float L_11 = L_10.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___b1;
		float L_13 = L_12.___y_1;
		if ((!(((float)L_11) == ((float)L_13))))
		{
			goto IL_0040;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___a0;
		float L_15 = L_14.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___b1;
		float L_17 = L_16.___z_2;
		G_B6_0 = ((((float)L_15) == ((float)L_17))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B6_0 = 0;
	}

IL_0041:
	{
		V_1 = (bool)G_B6_0;
		goto IL_004e;
	}

IL_0044:
	{
		// return (a == b);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___a0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = ___b1;
		bool L_20;
		L_20 = Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline(L_18, L_19, NULL);
		V_1 = L_20;
		goto IL_004e;
	}

IL_004e:
	{
		// }
		bool L_21 = V_1;
		return L_21;
	}
}
// System.Single GameKit.Dependencies.Utilities.Quaternions::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quaternions_Angle_mECF5A040D7422A660671D7004C88A33A633ADB28 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, bool ___precise2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// if (precise)
		bool L_0 = ___precise2;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0063;
		}
	}
	{
		// float dot = (a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___a0;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___b1;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___a0;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___b1;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___a0;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___b1;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___a0;
		float L_15 = L_14.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___b1;
		float L_17 = L_16.___w_3;
		V_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_3, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_9)))), ((float)il2cpp_codegen_multiply(L_11, L_13)))), ((float)il2cpp_codegen_multiply(L_15, L_17))));
		// return (Mathf.Acos(Mathf.Min(Mathf.Abs(dot), 1f)) * 2f * 57.29578f);
		float L_18 = V_1;
		float L_19;
		L_19 = fabsf(L_18);
		float L_20;
		L_20 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_19, (1.0f), NULL);
		float L_21;
		L_21 = acosf(L_20);
		V_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_21, (2.0f))), (57.2957802f)));
		goto IL_006e;
	}

IL_0063:
	{
		// return Quaternion.Angle(a, b);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___a0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = ___b1;
		float L_24;
		L_24 = Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline(L_22, L_23, NULL);
		V_2 = L_24;
		goto IL_006e;
	}

IL_006e:
	{
		// }
		float L_25 = V_2;
		return L_25;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String GameKit.Dependencies.Utilities.Strings::ReturnModifySuffix(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Strings_ReturnModifySuffix_mE987E06368A7B6B1801EB3AE8E8B9176A64E6969 (String_t* ___text0, String_t* ___suffix1, bool ___addExtension2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		// if (text.Length > (suffix.Length + 1))
		String_t* L_0 = ___text0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		String_t* L_2 = ___suffix1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)((int32_t)il2cpp_codegen_add(L_3, 1))))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0087;
		}
	}
	{
		// if (addExtension)
		bool L_5 = ___addExtension2;
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_004b;
		}
	}
	{
		// if (!text.Substring(text.Length - suffix.Length).Contains(suffix, StringComparison.CurrentCultureIgnoreCase))
		String_t* L_7 = ___text0;
		String_t* L_8 = ___text0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		String_t* L_10 = ___suffix1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		NullCheck(L_7);
		String_t* L_12;
		L_12 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_7, ((int32_t)il2cpp_codegen_subtract(L_9, L_11)), NULL);
		String_t* L_13 = ___suffix1;
		NullCheck(L_12);
		bool L_14;
		L_14 = String_Contains_m7A165D1B2CDCE967F4522BA710CE7FA05EFA2982(L_12, L_13, 1, NULL);
		V_2 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_0047;
		}
	}
	{
		// return (text + suffix);
		String_t* L_16 = ___text0;
		String_t* L_17 = ___suffix1;
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_16, L_17, NULL);
		V_3 = L_18;
		goto IL_008c;
	}

IL_0047:
	{
		// return text;
		String_t* L_19 = ___text0;
		V_3 = L_19;
		goto IL_008c;
	}

IL_004b:
	{
		// if (text.Substring(text.Length - suffix.Length).Contains(suffix, StringComparison.CurrentCultureIgnoreCase))
		String_t* L_20 = ___text0;
		String_t* L_21 = ___text0;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_21, NULL);
		String_t* L_23 = ___suffix1;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_23, NULL);
		NullCheck(L_20);
		String_t* L_25;
		L_25 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_20, ((int32_t)il2cpp_codegen_subtract(L_22, L_24)), NULL);
		String_t* L_26 = ___suffix1;
		NullCheck(L_25);
		bool L_27;
		L_27 = String_Contains_m7A165D1B2CDCE967F4522BA710CE7FA05EFA2982(L_25, L_26, 1, NULL);
		V_4 = L_27;
		bool L_28 = V_4;
		if (!L_28)
		{
			goto IL_0083;
		}
	}
	{
		// return text.Substring(0, text.Length - (suffix.Length));
		String_t* L_29 = ___text0;
		String_t* L_30 = ___text0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_30, NULL);
		String_t* L_32 = ___suffix1;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_32, NULL);
		NullCheck(L_29);
		String_t* L_34;
		L_34 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_29, 0, ((int32_t)il2cpp_codegen_subtract(L_31, L_33)), NULL);
		V_3 = L_34;
		goto IL_008c;
	}

IL_0083:
	{
		// return text;
		String_t* L_35 = ___text0;
		V_3 = L_35;
		goto IL_008c;
	}

IL_0087:
	{
		// return text;
		String_t* L_36 = ___text0;
		V_3 = L_36;
		goto IL_008c;
	}

IL_008c:
	{
		// }
		String_t* L_37 = V_3;
		return L_37;
	}
}
// System.Boolean GameKit.Dependencies.Utilities.Strings::Contains(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Strings_Contains_m55E35AF9029C2FA1B6C27ACC870D1985B1792EDE (String_t* ___s0, String_t* ___contains1, int32_t ___comp2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// int index = s.IndexOf(contains, comp);
		String_t* L_0 = ___s0;
		String_t* L_1 = ___contains1;
		int32_t L_2 = ___comp2;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = String_IndexOf_m490810CB7ADA9230AC0F8D78E213A8EFED129F55(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// return (index >= 0);
		int32_t L_4 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_5 = V_1;
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector2 GameKit.Dependencies.Utilities.Transforms::HalfSizeDelta(UnityEngine.RectTransform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Transforms_HalfSizeDelta_m827A8A0394A96C345157C06F178916C636337311 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform0, bool ___useScale1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// Vector2 sizeDelta = (useScale) ? rectTransform.SizeDeltaScaled() : rectTransform.sizeDelta;
		bool L_0 = ___useScale1;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ___rectTransform0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_0012;
	}

IL_000c:
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = ___rectTransform0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Transforms_SizeDeltaScaled_m4F725AF34B2C64A7F473E70F0B6B6FD29B226E8E(L_3, NULL);
		G_B3_0 = L_4;
	}

IL_0012:
	{
		V_0 = G_B3_0;
		// return (sizeDelta / 2f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_5, (2.0f), NULL);
		V_1 = L_6;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_1;
		return L_7;
	}
}
// UnityEngine.Vector2 GameKit.Dependencies.Utilities.Transforms::SizeDeltaScaled(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Transforms_SizeDeltaScaled_m4F725AF34B2C64A7F473E70F0B6B6FD29B226E8E (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return (rectTransform.sizeDelta * rectTransform.localScale);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___rectTransform0;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_0, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ___rectTransform0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_1, L_4, NULL);
		V_0 = L_5;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Vector3 GameKit.Dependencies.Utilities.Transforms::GetOnScreenPosition(UnityEngine.RectTransform,UnityEngine.Vector3,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transforms_GetOnScreenPosition_mAE95388475C35D4F325A82F3459FF6D35F8B2228 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___desiredPosition1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___padding2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		// RectTransform canvasRectTransform = rectTransform.GetComponentInParent<Canvas>().transform as RectTransform;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___rectTransform0;
		NullCheck(L_0);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_1;
		L_1 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(L_0, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		V_0 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_2, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		// Vector2 clampedPos = desiredPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___desiredPosition1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_3, NULL);
		V_1 = L_4;
		// Vector2 localScale = canvasRectTransform.localScale;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = V_0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_6, NULL);
		V_2 = L_7;
		// Vector2 oneMinusPivot = Vector2.one - rectTransform.pivot;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = ___rectTransform0;
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_8, L_10, NULL);
		V_3 = L_11;
		// Vector2 scaledSize = rectTransform.sizeDelta * localScale;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = ___rectTransform0;
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_12, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_13, L_14, NULL);
		V_4 = L_15;
		// Vector2 minClamp = scaledSize * rectTransform.pivot + padding;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_4;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = ___rectTransform0;
		NullCheck(L_17);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_16, L_18, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = ___padding2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_19, L_20, NULL);
		V_5 = L_21;
		// Vector2 maxClamp = ((canvasRectTransform.rect.size) - (rectTransform.sizeDelta * oneMinusPivot + padding)) * localScale;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_22 = V_0;
		NullCheck(L_22);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_23;
		L_23 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_22, NULL);
		V_9 = L_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_9), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_25 = ___rectTransform0;
		NullCheck(L_25);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_25, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_26, L_27, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = ___padding2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_28, L_29, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_24, L_30, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_31, L_32, NULL);
		V_6 = L_33;
		// float clampX = Mathf.Clamp(clampedPos.x, minClamp.x, maxClamp.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = V_1;
		float L_35 = L_34.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = V_5;
		float L_37 = L_36.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = V_6;
		float L_39 = L_38.___x_0;
		float L_40;
		L_40 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_35, L_37, L_39, NULL);
		V_7 = L_40;
		// float clampY = Mathf.Clamp(clampedPos.y, minClamp.y, maxClamp.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41 = V_1;
		float L_42 = L_41.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = V_5;
		float L_44 = L_43.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = V_6;
		float L_46 = L_45.___y_1;
		float L_47;
		L_47 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_42, L_44, L_46, NULL);
		V_8 = L_47;
		// return new Vector2(clampX, clampY);
		float L_48 = V_7;
		float L_49 = V_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_50), L_48, L_49, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_50, NULL);
		V_10 = L_51;
		goto IL_00cf;
	}

IL_00cf:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_10;
		return L_52;
	}
}
// System.Void GameKit.Dependencies.Utilities.Transforms::SetParentAndKeepTransform(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transforms_SetParentAndKeepTransform_mE18DAF0260A67940499FC44BB01B912937CB7E55 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___src0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector3 pos = src.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___src0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		// Quaternion rot = src.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___src0;
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_2, NULL);
		V_1 = L_3;
		// Vector3 scale = src.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___src0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_4, NULL);
		V_2 = L_5;
		// src.SetParent(parent);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___src0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ___parent1;
		NullCheck(L_6);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_6, L_7, NULL);
		// src.position = pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ___src0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_9, NULL);
		// src.rotation = rot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = ___src0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = V_1;
		NullCheck(L_10);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_10, L_11, NULL);
		// src.localScale = scale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = ___src0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_2;
		NullCheck(L_12);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_12, L_13, NULL);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Transforms::DestroyChildren(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transforms_DestroyChildren_mA2FAF62522A251F014F7F12FCA9B82B7F274A770 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___t0, bool ___destroyImmediately1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	{
		// foreach (Transform child in t)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___t0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_3;
					if (!L_3)
					{
						goto IL_0053;
					}
				}
				{
					RuntimeObject* L_4 = V_3;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0053:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0038_1;
			}

IL_000b_1:
			{
				// foreach (Transform child in t)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// if (destroyImmediately)
				bool L_7 = ___destroyImmediately1;
				V_2 = L_7;
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_002b_1;
				}
			}
			{
				// MonoBehaviour.DestroyImmediate(child.gameObject);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_1;
				NullCheck(L_9);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
				L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_10, NULL);
				goto IL_0037_1;
			}

IL_002b_1:
			{
				// MonoBehaviour.Destroy(child.gameObject);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = V_1;
				NullCheck(L_11);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
				L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_12, NULL);
			}

IL_0037_1:
			{
			}

IL_0038_1:
			{
				// foreach (Transform child in t)
				RuntimeObject* L_13 = V_0;
				NullCheck(L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				if (L_14)
				{
					goto IL_000b_1;
				}
			}
			{
				goto IL_0054;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0054:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 GameKit.Dependencies.Utilities.Transforms::GetPosition(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transforms_GetPosition_m8811D5A27406F46F1CB99F2B5222B5254CE0676B (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___t0, bool ___localSpace1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// return (localSpace) ? t.localPosition : t.position;
		bool L_0 = ___localSpace1;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___t0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_0012;
	}

IL_000c:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___t0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_3, NULL);
		G_B3_0 = L_4;
	}

IL_0012:
	{
		V_0 = G_B3_0;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Quaternion GameKit.Dependencies.Utilities.Transforms::GetRotation(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transforms_GetRotation_m730B1D248AC4C77ECD8C63B8A284D56AC8AB12B3 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___t0, bool ___localSpace1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// return (localSpace) ? t.localRotation : t.rotation;
		bool L_0 = ___localSpace1;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___t0;
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_0012;
	}

IL_000c:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___t0;
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_3, NULL);
		G_B3_0 = L_4;
	}

IL_0012:
	{
		V_0 = G_B3_0;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Vector3 GameKit.Dependencies.Utilities.Transforms::GetScale(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transforms_GetScale_m1D564D08C502CDB41C8F6608703CC95FCFFB33FC (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___t0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return t.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___t0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
// System.Void GameKit.Dependencies.Utilities.Transforms::SetPosition(UnityEngine.Transform,System.Boolean,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transforms_SetPosition_m9676CDAD209D791BA88EE6DA7F2549B5103802EC (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___t0, bool ___localSpace1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (localSpace)
		bool L_0 = ___localSpace1;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// t.localPosition = pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___t0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___pos2;
		NullCheck(L_2);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_2, L_3, NULL);
		goto IL_0018;
	}

IL_0010:
	{
		// t.position = pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___t0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___pos2;
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_5, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Transforms::SetRotation(UnityEngine.Transform,System.Boolean,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transforms_SetRotation_mC312ED83D144FA42F29D32867C7AD817669496F5 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___t0, bool ___localSpace1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (localSpace)
		bool L_0 = ___localSpace1;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// t.localRotation = rot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___t0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___rot2;
		NullCheck(L_2);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_2, L_3, NULL);
		goto IL_0018;
	}

IL_0010:
	{
		// t.rotation = rot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___t0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___rot2;
		NullCheck(L_4);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_4, L_5, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Transforms::SetScale(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transforms_SetScale_m6CA6A0B85855D31235AFDE0962B07448013E0DA2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___t0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale1, const RuntimeMethod* method) 
{
	{
		// t.localScale = scale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___t0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___scale1;
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_1, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single GameKit.Dependencies.Utilities.Vectors::GetRate(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vectors_GetRate_m26705C24616012E0612078082A5D65590F00260A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___goal1, float ___duration2, float* ___distance3, uint32_t ___interval4, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// distance = Vector3.Distance(a, goal);
		float* L_0 = ___distance3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___a0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___goal1;
		float L_3;
		L_3 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_2, NULL);
		*((float*)L_0) = (float)L_3;
		// return distance / (duration * interval);
		float* L_4 = ___distance3;
		float L_5 = *((float*)L_4);
		float L_6 = ___duration2;
		uint32_t L_7 = ___interval4;
		V_0 = ((float)(L_5/((float)il2cpp_codegen_multiply(L_6, ((float)((double)(uint32_t)L_7))))));
		goto IL_0016;
	}

IL_0016:
	{
		// }
		float L_8 = V_0;
		return L_8;
	}
}
// UnityEngine.Vector3 GameKit.Dependencies.Utilities.Vectors::Add(UnityEngine.Vector3,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vectors_Add_m72C5EAA3E8CD2CA067481B9979173C1E14CA3396 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v30, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v21, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return (v3 + new Vector3(v2.x, v2.y, 0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v30;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___v21;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___v21;
		float L_4 = L_3.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_2, L_4, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_5, NULL);
		V_0 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Vector3 GameKit.Dependencies.Utilities.Vectors::Subtract(UnityEngine.Vector3,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vectors_Subtract_m27C81C40D3AE9B87C966F3CE4E179BC3DCB5A57D (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v30, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v21, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return (v3 - new Vector3(v2.x, v2.y, 0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v30;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___v21;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___v21;
		float L_4 = L_3.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_2, L_4, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_5, NULL);
		V_0 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
// System.Single GameKit.Dependencies.Utilities.Vectors::InverseLerp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vectors_InverseLerp_mB4C88050C50A5035444D1D5A990EF31454D94F42 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		// Vector3 ab = b - a;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___b1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___a0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// Vector3 av = value - a;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___value2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_4, NULL);
		V_1 = L_5;
		// return Mathf.Clamp01(Vector3.Dot(av, ab) / Vector3.Dot(ab, ab));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8;
		L_8 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11;
		L_11 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_9, L_10, NULL);
		float L_12;
		L_12 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(L_8/L_11)), NULL);
		V_2 = L_12;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		float L_13 = V_2;
		return L_13;
	}
}
// System.Boolean GameKit.Dependencies.Utilities.Vectors::Near(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vectors_Near_m6EFEB98FEFAC3A3473B86B9287353E8068CD3B1C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___tolerance2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return (Vector3.Distance(a, b) <= tolerance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___b1;
		float L_2;
		L_2 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_0, L_1, NULL);
		float L_3 = ___tolerance2;
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0011;
	}

IL_0011:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean GameKit.Dependencies.Utilities.Vectors::IsNan(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vectors_IsNan_m1F0FC933AD9FD2CF4A092BAC45F8BC540ED91A61 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___source0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// return (float.IsNaN(source.x) || float.IsNaN(source.y) || float.IsNaN(source.z));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___source0;
		float L_1 = L_0.___x_2;
		bool L_2;
		L_2 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___source0;
		float L_4 = L_3.___y_3;
		bool L_5;
		L_5 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_4, NULL);
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___source0;
		float L_7 = L_6.___z_4;
		bool L_8;
		L_8 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_7, NULL);
		G_B4_0 = ((int32_t)(L_8));
		goto IL_0029;
	}

IL_0028:
	{
		G_B4_0 = 1;
	}

IL_0029:
	{
		V_0 = (bool)G_B4_0;
		goto IL_002c;
	}

IL_002c:
	{
		// }
		bool L_9 = V_0;
		return L_9;
	}
}
// UnityEngine.Vector3 GameKit.Dependencies.Utilities.Vectors::Lerp3(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vectors_Lerp3_m3B5447196DF45A1CCAC3FD641848189F9EE2E5FA (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___c2, float ___percent3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector3 r0 = Vector3.Lerp(a, b, percent);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___b1;
		float L_2 = ___percent3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// Vector3 r1 = Vector3.Lerp(b, c, percent);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___c2;
		float L_6 = ___percent3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_4, L_5, L_6, NULL);
		V_1 = L_7;
		// return Vector3.Lerp(r0, r1, percent);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_1;
		float L_10 = ___percent3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_8, L_9, L_10, NULL);
		V_2 = L_11;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_2;
		return L_12;
	}
}
// UnityEngine.Vector3 GameKit.Dependencies.Utilities.Vectors::Lerp3(UnityEngine.Vector3[],System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vectors_Lerp3_mED591C4E2D45BA24CD700ED35DEE48C3165F6860 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vectors0, float ___percent1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vectors_tB271C58533ED793021EEFFF605684AECF414D033_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15DC822959866835E349C6367C4C8C56A63C01EB);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (vectors.Length < 3)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___vectors0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) < ((int32_t)3))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.LogWarning("Vectors -> Lerp3 -> Vectors length must be 3.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral15DC822959866835E349C6367C4C8C56A63C01EB, NULL);
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_1 = L_2;
		goto IL_003d;
	}

IL_001f:
	{
		// return Lerp3(vectors[0], vectors[1], vectors[2], percent);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = ___vectors0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = ___vectors0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = ___vectors0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		float L_12 = ___percent1;
		il2cpp_codegen_runtime_class_init_inline(Vectors_tB271C58533ED793021EEFFF605684AECF414D033_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vectors_Lerp3_m3B5447196DF45A1CCAC3FD641848189F9EE2E5FA(L_5, L_8, L_11, L_12, NULL);
		V_1 = L_13;
		goto IL_003d;
	}

IL_003d:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		return L_14;
	}
}
// UnityEngine.Vector3 GameKit.Dependencies.Utilities.Vectors::Multiply(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vectors_Multiply_m08F1A37D0DEEE14575EC9638BBDD12D5343B08A0 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___src0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___multiplier1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Vector3(src.x * multiplier.x, src.y * multiplier.y, src.z * multiplier.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___src0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___multiplier1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___src0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___multiplier1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___src0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___multiplier1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
// System.Single GameKit.Dependencies.Utilities.Vectors::FastDistance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vectors_FastDistance_mE8C29D585D09ED4CD557E4EAE36E6BC18B1A89B3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// var distx = a.x - b.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		// var disty = a.y - b.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		// var distz = a.z - b.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		// return (float)Math.Sqrt(distx * distx + disty * disty + distz * distz);
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		// }
		float L_19 = V_3;
		return L_19;
	}
}
// System.Single GameKit.Dependencies.Utilities.Vectors::FastSqrMagnitude(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vectors_FastSqrMagnitude_m5CEFF2CC52B5DAE49CA916E9B1310A294DBFA4DC (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return vector.x * vector.x + vector.y * vector.y + vector.z * vector.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		// }
		float L_12 = V_0;
		return L_12;
	}
}
// UnityEngine.Vector3 GameKit.Dependencies.Utilities.Vectors::FastNormalize(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vectors_FastNormalize_m92EBAB962DF3F054E951E0BCDEFF206BFEEA5040 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vectors_tB271C58533ED793021EEFFF605684AECF414D033_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// float mag = (float)Math.Sqrt(value.x * value.x + value.y * value.y + value.z * value.z); //Magnitude(value);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___value0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___value0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___value0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___value0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		// if (mag > FLOAT_EPSILON)
		float L_13 = V_0;
		V_1 = (bool)((((float)L_13) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_0070;
		}
	}
	{
		// result.x = value.x / mag;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___value0;
		float L_16 = L_15.___x_2;
		float L_17 = V_0;
		(&V_2)->___x_2 = ((float)(L_16/L_17));
		// result.y = value.y / mag;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___value0;
		float L_19 = L_18.___y_3;
		float L_20 = V_0;
		(&V_2)->___y_3 = ((float)(L_19/L_20));
		// result.z = value.z / mag;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___value0;
		float L_22 = L_21.___z_4;
		float L_23 = V_0;
		(&V_2)->___z_4 = ((float)(L_22/L_23));
		// return result;// value / mag;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_2;
		V_3 = L_24;
		goto IL_0078;
	}

IL_0070:
	{
		// return VECTOR3_ZERO;
		il2cpp_codegen_runtime_class_init_inline(Vectors_tB271C58533ED793021EEFFF605684AECF414D033_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ((Vectors_tB271C58533ED793021EEFFF605684AECF414D033_StaticFields*)il2cpp_codegen_static_fields_for(Vectors_tB271C58533ED793021EEFFF605684AECF414D033_il2cpp_TypeInfo_var))->___VECTOR3_ZERO_0;
		V_3 = L_25;
		goto IL_0078;
	}

IL_0078:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_3;
		return L_26;
	}
}
// System.Single GameKit.Dependencies.Utilities.Vectors::GetRate(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vectors_GetRate_m0C8E42C37CB04A7A39B31B435C1A2EF940E65138 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___goal1, float ___duration2, float* ___distance3, uint32_t ___interval4, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// distance = Vector2.Distance(a, goal);
		float* L_0 = ___distance3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___a0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___goal1;
		float L_3;
		L_3 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_1, L_2, NULL);
		*((float*)L_0) = (float)L_3;
		// return distance / (duration * interval);
		float* L_4 = ___distance3;
		float L_5 = *((float*)L_4);
		float L_6 = ___duration2;
		uint32_t L_7 = ___interval4;
		V_0 = ((float)(L_5/((float)il2cpp_codegen_multiply(L_6, ((float)((double)(uint32_t)L_7))))));
		goto IL_0016;
	}

IL_0016:
	{
		// }
		float L_8 = V_0;
		return L_8;
	}
}
// UnityEngine.Vector2 GameKit.Dependencies.Utilities.Vectors::Lerp3(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vectors_Lerp3_m49BCDEAADFF8CC538CB3D3F4F796662CF3CF931A (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___c2, float ___percent3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector2 r0 = Vector2.Lerp(a, b, percent);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___b1;
		float L_2 = ___percent3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// Vector2 r1 = Vector2.Lerp(b, c, percent);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___b1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___c2;
		float L_6 = ___percent3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline(L_4, L_5, L_6, NULL);
		V_1 = L_7;
		// return Vector2.Lerp(r0, r1, percent);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_1;
		float L_10 = ___percent3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline(L_8, L_9, L_10, NULL);
		V_2 = L_11;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_2;
		return L_12;
	}
}
// UnityEngine.Vector2 GameKit.Dependencies.Utilities.Vectors::Lerp2(UnityEngine.Vector2[],System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vectors_Lerp2_m7C17AD80B57FB485D92949EDBA00708FA5A811C9 (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___vectors0, float ___percent1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vectors_tB271C58533ED793021EEFFF605684AECF414D033_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15DC822959866835E349C6367C4C8C56A63C01EB);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (vectors.Length < 3)
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = ___vectors0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) < ((int32_t)3))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.LogWarning("Vectors -> Lerp3 -> Vectors length must be 3.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral15DC822959866835E349C6367C4C8C56A63C01EB, NULL);
		// return Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_1 = L_2;
		goto IL_003d;
	}

IL_001f:
	{
		// return Lerp3(vectors[0], vectors[1], vectors[2], percent);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_3 = ___vectors0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = ___vectors0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_9 = ___vectors0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		float L_12 = ___percent1;
		il2cpp_codegen_runtime_class_init_inline(Vectors_tB271C58533ED793021EEFFF605684AECF414D033_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vectors_Lerp3_m49BCDEAADFF8CC538CB3D3F4F796662CF3CF931A(L_5, L_8, L_11, L_12, NULL);
		V_1 = L_13;
		goto IL_003d;
	}

IL_003d:
	{
		// }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_1;
		return L_14;
	}
}
// UnityEngine.Vector2 GameKit.Dependencies.Utilities.Vectors::Multiply(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vectors_Multiply_mAC47B5668128FBAEC696645A8D19DC7D4E6C92D6 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___src0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___multiplier1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Vector2(src.x * multiplier.x, src.y * multiplier.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___src0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___multiplier1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___src0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___multiplier1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
// System.Void GameKit.Dependencies.Utilities.Vectors::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vectors__cctor_m0100980EBA0183CF520B931C46BFD8E5C959F8EF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vectors_tB271C58533ED793021EEFFF605684AECF414D033_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Vector3 VECTOR3_ZERO = new Vector3(0.0f, 0.0f, 0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Vectors_tB271C58533ED793021EEFFF605684AECF414D033_StaticFields*)il2cpp_codegen_static_fields_for(Vectors_tB271C58533ED793021EEFFF605684AECF414D033_il2cpp_TypeInfo_var))->___VECTOR3_ZERO_0 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_Awake_m4BFE9E59421A5FED851E49026E2ADF19FABB2D0C (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC79390149DCD6199DE7C64E276DB100D086893FC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (_instance != null && _instance != this)
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_0 = ((ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74_il2cpp_TypeInfo_var))->____instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_2 = ((ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74_il2cpp_TypeInfo_var))->____instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, __this, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// if (Debug.isDebugBuild) Debug.LogWarning("Multiple ObjectPool scripts found. This script auto loads itself and does not need to be placed in your scenes.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01(NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		// if (Debug.isDebugBuild) Debug.LogWarning("Multiple ObjectPool scripts found. This script auto loads itself and does not need to be placed in your scenes.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralC79390149DCD6199DE7C64E276DB100D086893FC, NULL);
	}

IL_0035:
	{
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
		// return;
		goto IL_0046;
	}

IL_003e:
	{
		// _instance = this;
		((ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74_il2cpp_TypeInfo_var))->____instance_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74_il2cpp_TypeInfo_var))->____instance_5), (void*)__this);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_Update_mA526D9C7A69DF2E529778C76B7FAECA1437F75FF (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_Start_m17693004CD5663F30BF62B8F528ADC4722E438AC (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(__CleanupChecks());
		RuntimeObject* L_0;
		L_0 = ObjectPool___CleanupChecks_mB60EEAF5EF5F789DFA4D2CDA6B5B345778C1A576(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::__CleanupChecks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectPool___CleanupChecks_mB60EEAF5EF5F789DFA4D2CDA6B5B345778C1A576 (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3C__CleanupChecksU3Ed__12_tD80DBEC4FB6FA79CF82657DD30C4FFA83DDA0D9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3C__CleanupChecksU3Ed__12_tD80DBEC4FB6FA79CF82657DD30C4FFA83DDA0D9B* L_0 = (U3C__CleanupChecksU3Ed__12_tD80DBEC4FB6FA79CF82657DD30C4FFA83DDA0D9B*)il2cpp_codegen_object_new(U3C__CleanupChecksU3Ed__12_tD80DBEC4FB6FA79CF82657DD30C4FFA83DDA0D9B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3C__CleanupChecksU3Ed__12__ctor_m9682F4A185B134B59F7FBF8258779634E577ADB0(L_0, 0, NULL);
		U3C__CleanupChecksU3Ed__12_tD80DBEC4FB6FA79CF82657DD30C4FFA83DDA0D9B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::__Reset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectPool___Reset_mB564BF7232F8A743AE099A0E89D71AE4023715CC (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, bool ___destroyActive0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3C__ResetU3Ed__13_tAA6080EEC3AA5D7FB8E14FE3BACA96785E9E62BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3C__ResetU3Ed__13_tAA6080EEC3AA5D7FB8E14FE3BACA96785E9E62BB* L_0 = (U3C__ResetU3Ed__13_tAA6080EEC3AA5D7FB8E14FE3BACA96785E9E62BB*)il2cpp_codegen_object_new(U3C__ResetU3Ed__13_tAA6080EEC3AA5D7FB8E14FE3BACA96785E9E62BB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3C__ResetU3Ed__13__ctor_m749FCB699ACBC2D96C7AB923C381CC1DA123CAB4(L_0, 0, NULL);
		U3C__ResetU3Ed__13_tAA6080EEC3AA5D7FB8E14FE3BACA96785E9E62BB* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3C__ResetU3Ed__13_tAA6080EEC3AA5D7FB8E14FE3BACA96785E9E62BB* L_2 = L_1;
		bool L_3 = ___destroyActive0;
		NullCheck(L_2);
		L_2->___destroyActive_2 = L_3;
		return L_2;
	}
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::DestroyPool(GameKit.Dependencies.Utilities.ObjectPooling.PoolData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_DestroyPool_m583BEFCED2133B296625E0C6D541B0FBE45B1A70 (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, PoolData_t80E4C4FD24F727D017C06769387611B94D561514* ___poolData0, bool ___removeFromList1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListStack_1_get_Entries_mF8D69AA5E0F4661D119BB33F8891327AB465B350_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m8C9464A31156B49005C11C0839D6FF551D2C3C3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// for (int i = 0; i < poolData.Objects.Entries.Count; i++)
		V_0 = 0;
		goto IL_003d;
	}

IL_0005:
	{
		// if (poolData.Objects.Entries[i] != null)
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_0 = ___poolData0;
		NullCheck(L_0);
		ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F* L_1 = L_0->___Objects_1;
		NullCheck(L_1);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2;
		L_2 = ListStack_1_get_Entries_mF8D69AA5E0F4661D119BB33F8891327AB465B350_inline(L_1, ListStack_1_get_Entries_mF8D69AA5E0F4661D119BB33F8891327AB465B350_RuntimeMethod_var);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_2, L_3, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// Destroy(poolData.Objects.Entries[i]);
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_7 = ___poolData0;
		NullCheck(L_7);
		ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F* L_8 = L_7->___Objects_1;
		NullCheck(L_8);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9;
		L_9 = ListStack_1_get_Entries_mF8D69AA5E0F4661D119BB33F8891327AB465B350_inline(L_8, ListStack_1_get_Entries_mF8D69AA5E0F4661D119BB33F8891327AB465B350_RuntimeMethod_var);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_9, L_10, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_11, NULL);
	}

IL_0038:
	{
		// for (int i = 0; i < poolData.Objects.Entries.Count; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_003d:
	{
		// for (int i = 0; i < poolData.Objects.Entries.Count; i++)
		int32_t L_13 = V_0;
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_14 = ___poolData0;
		NullCheck(L_14);
		ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F* L_15 = L_14->___Objects_1;
		NullCheck(L_15);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_16;
		L_16 = ListStack_1_get_Entries_mF8D69AA5E0F4661D119BB33F8891327AB465B350_inline(L_15, ListStack_1_get_Entries_mF8D69AA5E0F4661D119BB33F8891327AB465B350_RuntimeMethod_var);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_16, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_13) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_2;
		if (L_18)
		{
			goto IL_0005;
		}
	}
	{
		// if (removeFromList)
		bool L_19 = ___removeFromList1;
		V_3 = L_19;
		bool L_20 = V_3;
		if (!L_20)
		{
			goto IL_0066;
		}
	}
	{
		// _pools.Remove(poolData);
		List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA* L_21 = __this->____pools_7;
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_22 = ___poolData0;
		NullCheck(L_21);
		bool L_23;
		L_23 = List_1_Remove_m8C9464A31156B49005C11C0839D6FF551D2C3C3F(L_21, L_22, List_1_Remove_m8C9464A31156B49005C11C0839D6FF551D2C3C3F_RuntimeMethod_var);
	}

IL_0066:
	{
		// }
		return;
	}
}
// GameKit.Dependencies.Utilities.ObjectPooling.PoolData GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::ReturnPoolData(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoolData_t80E4C4FD24F727D017C06769387611B94D561514* ObjectPool_ReturnPoolData_m343AB162E4AAAB6403A40E3D0136C90308FD8548 (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m5AC2A0C9304BBCACA03BF941DEE5EE45A304BA81_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PoolData_t80E4C4FD24F727D017C06769387611B94D561514* V_0 = NULL;
	bool V_1 = false;
	PoolData_t80E4C4FD24F727D017C06769387611B94D561514* V_2 = NULL;
	{
		// _poolPrefabs.TryGetValue(prefab, out result);
		Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D* L_0 = __this->____poolPrefabs_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___prefab0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m5AC2A0C9304BBCACA03BF941DEE5EE45A304BA81(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m5AC2A0C9304BBCACA03BF941DEE5EE45A304BA81_RuntimeMethod_var);
		// if (result == null)
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_3 = V_0;
		V_1 = (bool)((((RuntimeObject*)(PoolData_t80E4C4FD24F727D017C06769387611B94D561514*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		// result = CreatePool(prefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___prefab0;
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_6;
		L_6 = ObjectPool_CreatePool_mE4A64E88001A480AE7B7165261BE583C853ACE72(__this, L_5, NULL);
		V_0 = L_6;
	}

IL_0020:
	{
		// return result;
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_7 = V_0;
		V_2 = L_7;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_8 = V_2;
		return L_8;
	}
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::SetGameObjectPositionRotation(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_SetGameObjectPositionRotation_m8593A25BBE4B260A135BF113DAE161B4118A2CC1 (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___result0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) 
{
	{
		// result.transform.position = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___result0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___position1;
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_2, NULL);
		// result.transform.rotation = rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___result0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___rotation2;
		NullCheck(L_4);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_4, L_5, NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::Retrieve(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPool_Retrieve_m04D1345FF8A0A970D42F610970F5AA56EA11C1F8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___poolObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// return _instance.RetrieveInternal(poolObject);
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_0 = ((ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74_il2cpp_TypeInfo_var))->____instance_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___poolObject0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = ObjectPool_RetrieveInternal_mB374E0452149F015AA4A008ADB56BA9A0CFD85D1(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.GameObject GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::RetrieveInternal(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPool_RetrieveInternal_mB374E0452149F015AA4A008ADB56BA9A0CFD85D1 (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___poolObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PoolData_t80E4C4FD24F727D017C06769387611B94D561514* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	bool V_2 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	int32_t G_B3_0 = 0;
	{
		// GameObject result = ReturnPooledObject(poolObject, out pool);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___poolObject0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = ObjectPool_ReturnPooledObject_m327FBD45EA07B392BAA31CC2422CC6545C4A0C17(__this, L_0, (&V_0), NULL);
		V_1 = L_1;
		// if (result != null && pool != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_4 = V_0;
		G_B3_0 = ((!(((RuntimeObject*)(PoolData_t80E4C4FD24F727D017C06769387611B94D561514*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		V_2 = (bool)G_B3_0;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0056;
		}
	}
	{
		// SetGameObjectPositionRotation(result, pool.Prefab.transform.position, pool.Prefab.transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_1;
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_7 = V_0;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___Prefab_0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_11 = V_0;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___Prefab_0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		ObjectPool_SetGameObjectPositionRotation_m8593A25BBE4B260A135BF113DAE161B4118A2CC1(__this, L_6, L_10, L_14, NULL);
		// result.transform.SetParent(null);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_1;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		NullCheck(L_16);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_16, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
	}

IL_0056:
	{
		// return FinalizeRetrieve(result, pool);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_1;
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_18 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = ObjectPool_FinalizeRetrieve_mF9E383C97A08F0C5AFBA96AD47F4E5807B24D40D(__this, L_17, L_18, NULL);
		V_3 = L_19;
		goto IL_0061;
	}

IL_0061:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_3;
		return L_20;
	}
}
// UnityEngine.GameObject GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::Retrieve(UnityEngine.GameObject,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPool_Retrieve_m94F79041425FBD94ADFAE59319B1350DF56A4F5A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___poolObject0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___instantiateInWorldSpace2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// return _instance.RetrieveInternal(poolObject, parent, instantiateInWorldSpace);
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_0 = ((ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74_il2cpp_TypeInfo_var))->____instance_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___poolObject0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___parent1;
		bool L_3 = ___instantiateInWorldSpace2;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = ObjectPool_RetrieveInternal_mCCAFE842ED35585ED3EA5FAD6234564BA2593DA6(L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.GameObject GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::RetrieveInternal(UnityEngine.GameObject,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPool_RetrieveInternal_mCCAFE842ED35585ED3EA5FAD6234564BA2593DA6 (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___poolObject0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___instantiateInWorldSpace2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PoolData_t80E4C4FD24F727D017C06769387611B94D561514* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	bool V_2 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	int32_t G_B3_0 = 0;
	{
		// GameObject result = ReturnPooledObject(poolObject, out pool);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___poolObject0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = ObjectPool_ReturnPooledObject_m327FBD45EA07B392BAA31CC2422CC6545C4A0C17(__this, L_0, (&V_0), NULL);
		V_1 = L_1;
		// if (result != null && pool != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_4 = V_0;
		G_B3_0 = ((!(((RuntimeObject*)(PoolData_t80E4C4FD24F727D017C06769387611B94D561514*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		V_2 = (bool)G_B3_0;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0057;
		}
	}
	{
		// SetGameObjectPositionRotation(result, pool.Prefab.transform.position, pool.Prefab.transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_1;
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_7 = V_0;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___Prefab_0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_11 = V_0;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___Prefab_0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		ObjectPool_SetGameObjectPositionRotation_m8593A25BBE4B260A135BF113DAE161B4118A2CC1(__this, L_6, L_10, L_14, NULL);
		// result.transform.SetParent(parent, instantiateInWorldSpace);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_1;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = ___parent1;
		bool L_18 = ___instantiateInWorldSpace2;
		NullCheck(L_16);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_16, L_17, L_18, NULL);
	}

IL_0057:
	{
		// return FinalizeRetrieve(result, pool);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_1;
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_20 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = ObjectPool_FinalizeRetrieve_mF9E383C97A08F0C5AFBA96AD47F4E5807B24D40D(__this, L_19, L_20, NULL);
		V_3 = L_21;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_3;
		return L_22;
	}
}
// UnityEngine.GameObject GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::Retrieve(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPool_Retrieve_m74A7B334A965D936DD9AD491B8004E4A3BA28604 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___poolObject0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// return _instance.RetrieveInternal(poolObject, position, rotation);
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_0 = ((ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74_il2cpp_TypeInfo_var))->____instance_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___poolObject0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___position1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___rotation2;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = ObjectPool_RetrieveInternal_m34AD79FEB4721BCFF4499CE548B4A520975C9789(L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.GameObject GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::RetrieveInternal(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPool_RetrieveInternal_m34AD79FEB4721BCFF4499CE548B4A520975C9789 (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___poolObject0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PoolData_t80E4C4FD24F727D017C06769387611B94D561514* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	bool V_2 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		// GameObject result = ReturnPooledObject(poolObject, out pool);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___poolObject0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = ObjectPool_ReturnPooledObject_m327FBD45EA07B392BAA31CC2422CC6545C4A0C17(__this, L_0, (&V_0), NULL);
		V_1 = L_1;
		// if (result != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// SetGameObjectPositionRotation(result, position, rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___position1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = ___rotation2;
		ObjectPool_SetGameObjectPositionRotation_m8593A25BBE4B260A135BF113DAE161B4118A2CC1(__this, L_5, L_6, L_7, NULL);
		// result.transform.SetParent(null);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_1;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_9, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
	}

IL_002f:
	{
		// return FinalizeRetrieve(result, pool);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_1;
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_11 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = ObjectPool_FinalizeRetrieve_mF9E383C97A08F0C5AFBA96AD47F4E5807B24D40D(__this, L_10, L_11, NULL);
		V_3 = L_12;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_3;
		return L_13;
	}
}
// UnityEngine.GameObject GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::Retrieve(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPool_Retrieve_mD70983BE5D39FE673E7E45FA74E5374750EAF4EF (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___poolObject0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PoolData_t80E4C4FD24F727D017C06769387611B94D561514* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	bool V_2 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		// GameObject result = ReturnPooledObject(poolObject, out pool);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___poolObject0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = ObjectPool_ReturnPooledObject_m327FBD45EA07B392BAA31CC2422CC6545C4A0C17(__this, L_0, (&V_0), NULL);
		V_1 = L_1;
		// if (result != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// SetGameObjectPositionRotation(result, position, rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___position1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = ___rotation2;
		ObjectPool_SetGameObjectPositionRotation_m8593A25BBE4B260A135BF113DAE161B4118A2CC1(__this, L_5, L_6, L_7, NULL);
		// result.transform.SetParent(parent, true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_1;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = ___parent3;
		NullCheck(L_9);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_9, L_10, (bool)1, NULL);
	}

IL_0031:
	{
		// return FinalizeRetrieve(result, pool);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_1;
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_12 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = ObjectPool_FinalizeRetrieve_mF9E383C97A08F0C5AFBA96AD47F4E5807B24D40D(__this, L_11, L_12, NULL);
		V_3 = L_13;
		goto IL_003c;
	}

IL_003c:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_3;
		return L_14;
	}
}
// UnityEngine.GameObject GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::FinalizeRetrieve(UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPool_FinalizeRetrieve_mF9E383C97A08F0C5AFBA96AD47F4E5807B24D40D (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___result0, PoolData_t80E4C4FD24F727D017C06769387611B94D561514* ___pool1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mED474DD881A0663446A498339BBD9E1D886E8027_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// _activeObjects[result] = pool;
		Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D* L_0 = __this->____activeObjects_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___result0;
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_2 = ___pool1;
		NullCheck(L_0);
		Dictionary_2_set_Item_mED474DD881A0663446A498339BBD9E1D886E8027(L_0, L_1, L_2, Dictionary_2_set_Item_mED474DD881A0663446A498339BBD9E1D886E8027_RuntimeMethod_var);
		// if (pool != null)
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_3 = ___pool1;
		V_0 = (bool)((!(((RuntimeObject*)(PoolData_t80E4C4FD24F727D017C06769387611B94D561514*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// result.SetActive(pool.Prefab.activeSelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___result0;
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_6 = ___pool1;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___Prefab_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_7, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, L_8, NULL);
	}

IL_0029:
	{
		// return result;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = ___result0;
		V_1 = L_9;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_1;
		return L_10;
	}
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::Store(UnityEngine.GameObject,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_Store_m3E5F07E1D9086E38BF00DB32E34DB2DAD0857249 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instantiatedObject0, float ___delay1, bool ___parentPooler2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _instance.StoreInternal(instantiatedObject, delay, parentPooler);
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_0 = ((ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74_il2cpp_TypeInfo_var))->____instance_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___instantiatedObject0;
		float L_2 = ___delay1;
		bool L_3 = ___parentPooler2;
		NullCheck(L_0);
		ObjectPool_StoreInternal_m18E0F36B1F21E1DF44A4DB035505492EC47BE8F2(L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::StoreInternal(UnityEngine.GameObject,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_StoreInternal_m18E0F36B1F21E1DF44A4DB035505492EC47BE8F2 (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instantiatedObject0, float ___delay1, bool ___parentPooler2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m30D25249FAC0ABED05EC883C3769981CE997D506_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _delayedStoreObjects[instantiatedObject] = new DelayedStoreData(Time.time + delay, parentPooler);
		Dictionary_2_t508F4CB243B163280E2C476A4977BED583F2ABEF* L_0 = __this->____delayedStoreObjects_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___instantiatedObject0;
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_3 = ___delay1;
		bool L_4 = ___parentPooler2;
		DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		DelayedStoreData__ctor_mCA18EA5D75E4DAA028FF0A4ACC200A69DEAAC63D((&L_5), ((float)il2cpp_codegen_add(L_2, L_3)), L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_set_Item_m30D25249FAC0ABED05EC883C3769981CE997D506(L_0, L_1, L_5, Dictionary_2_set_Item_m30D25249FAC0ABED05EC883C3769981CE997D506_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::Store(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_Store_m71E6781EC58E9E6707E9E4720DC1C722A4058023 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instantiatedObject0, bool ___parentPooler1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _instance.StoreInternal(instantiatedObject, parentPooler);
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_0 = ((ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74_il2cpp_TypeInfo_var))->____instance_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___instantiatedObject0;
		bool L_2 = ___parentPooler1;
		NullCheck(L_0);
		ObjectPool_StoreInternal_mC83892C703062B762B1D138C15F1339FB0ACE051(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::StoreInternal(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_StoreInternal_mC83892C703062B762B1D138C15F1339FB0ACE051 (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instantiatedObject0, bool ___parentPooler1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m6CCF5B20C9236710066E82FF4E0F6D6556108A9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m5AC2A0C9304BBCACA03BF941DEE5EE45A304BA81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4A7DE87BA62666C4D3A7811A973650559A07FC0);
		s_Il2CppMethodInitialized = true;
	}
	PoolData_t80E4C4FD24F727D017C06769387611B94D561514* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (instantiatedObject == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___instantiatedObject0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// Debug.LogWarning("ObjectPooler -> StoreObject -> poolObject cannot be null.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralC4A7DE87BA62666C4D3A7811A973650559A07FC0, NULL);
		// return;
		goto IL_004d;
	}

IL_001a:
	{
		// if (_activeObjects.TryGetValue(instantiatedObject, out pool))
		Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D* L_3 = __this->____activeObjects_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___instantiatedObject0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_m5AC2A0C9304BBCACA03BF941DEE5EE45A304BA81(L_3, L_4, (&V_0), Dictionary_2_TryGetValue_m5AC2A0C9304BBCACA03BF941DEE5EE45A304BA81_RuntimeMethod_var);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		// _activeObjects.Remove(instantiatedObject);
		Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D* L_7 = __this->____activeObjects_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ___instantiatedObject0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_m6CCF5B20C9236710066E82FF4E0F6D6556108A9B(L_7, L_8, Dictionary_2_Remove_m6CCF5B20C9236710066E82FF4E0F6D6556108A9B_RuntimeMethod_var);
		goto IL_0043;
	}

IL_003b:
	{
		// pool = ReturnPoolData(instantiatedObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ___instantiatedObject0;
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_11;
		L_11 = ObjectPool_ReturnPoolData_m343AB162E4AAAB6403A40E3D0136C90308FD8548(__this, L_10, NULL);
		V_0 = L_11;
	}

IL_0043:
	{
		// AddToPool(instantiatedObject, pool, parentPooler);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = ___instantiatedObject0;
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_13 = V_0;
		bool L_14 = ___parentPooler1;
		ObjectPool_AddToPool_mEFB8308811E966677223F094E6A412B9D5F1FF6E(__this, L_12, L_13, L_14, NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::MakeCollector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_MakeCollector_m18E36258365BB73FABF7558A97973A7ADAA81C88 (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m7337575D54E678C7A71036F626F5061EB90D40C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA64FAA3912374FAD1222EBB6A14534DB5FC554C6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_collector == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____collector_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		// _categoryChildren.Clear();
		Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4* L_3 = __this->____categoryChildren_8;
		NullCheck(L_3);
		Dictionary_2_Clear_m7337575D54E678C7A71036F626F5061EB90D40C2(L_3, Dictionary_2_Clear_m7337575D54E678C7A71036F626F5061EB90D40C2_RuntimeMethod_var);
		// _collector = new GameObject().transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_4, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		__this->____collector_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____collector_6), (void*)L_5);
		// _collector.name = "ObjectPoolerCollector";
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->____collector_6;
		NullCheck(L_6);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_6, _stringLiteralA64FAA3912374FAD1222EBB6A14534DB5FC554C6, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// UnityEngine.GameObject GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::ReturnPooledObject(UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPool_ReturnPooledObject_m327FBD45EA07B392BAA31CC2422CC6545C4A0C17 (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab0, PoolData_t80E4C4FD24F727D017C06769387611B94D561514** ___pool1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListStack_1_Pop_m0D7F6D399D6A2446E28E80505CB2CFA7DF26EAC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A178357174A7CDC7CEB0F7DD98D49656E9E5D2B);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	bool V_1 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	bool V_3 = false;
	{
		// if (prefab == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___prefab0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// pool = null;
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514** L_3 = ___pool1;
		*((RuntimeObject**)L_3) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)NULL);
		// Debug.LogError("ObjectPooler -> RetrieveObject -> prefab cannot be null.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral3A178357174A7CDC7CEB0F7DD98D49656E9E5D2B, NULL);
		// return null;
		V_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		goto IL_004b;
	}

IL_001f:
	{
		// pool = ReturnPoolData(prefab);
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514** L_4 = ___pool1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___prefab0;
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_6;
		L_6 = ObjectPool_ReturnPoolData_m343AB162E4AAAB6403A40E3D0136C90308FD8548(__this, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// GameObject result = pool.Objects.Pop();
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514** L_7 = ___pool1;
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_8 = *((PoolData_t80E4C4FD24F727D017C06769387611B94D561514**)L_7);
		NullCheck(L_8);
		ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F* L_9 = L_8->___Objects_1;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = ListStack_1_Pop_m0D7F6D399D6A2446E28E80505CB2CFA7DF26EAC9(L_9, ListStack_1_Pop_m0D7F6D399D6A2446E28E80505CB2CFA7DF26EAC9_RuntimeMethod_var);
		V_0 = L_10;
		// if (result == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0047;
		}
	}
	{
		// result = Instantiate(prefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = ___prefab0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_14, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_0 = L_15;
	}

IL_0047:
	{
		// return result;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_0;
		V_2 = L_16;
		goto IL_004b;
	}

IL_004b:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_2;
		return L_17;
	}
}
// GameKit.Dependencies.Utilities.ObjectPooling.PoolData GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::CreatePool(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoolData_t80E4C4FD24F727D017C06769387611B94D561514* ObjectPool_CreatePool_mE4A64E88001A480AE7B7165261BE583C853ACE72 (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mED474DD881A0663446A498339BBD9E1D886E8027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD20FB87F36F039EAC79BD464D074D4528169EA25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoolData_t80E4C4FD24F727D017C06769387611B94D561514_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69E8C4E5C67E12A41FF071BAABC442EE91C56EC3);
		s_Il2CppMethodInitialized = true;
	}
	PoolData_t80E4C4FD24F727D017C06769387611B94D561514* V_0 = NULL;
	bool V_1 = false;
	PoolData_t80E4C4FD24F727D017C06769387611B94D561514* V_2 = NULL;
	bool V_3 = false;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (prefab == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___prefab0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// Debug.LogError("ObjectPooler -> CreatePool -> prefab cannot be null.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral69E8C4E5C67E12A41FF071BAABC442EE91C56EC3, NULL);
		// return null;
		V_2 = (PoolData_t80E4C4FD24F727D017C06769387611B94D561514*)NULL;
		goto IL_0068;
	}

IL_001c:
	{
		// PoolData pool = new PoolData(prefab, _dataExpirationDelay);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___prefab0;
		float L_4 = __this->____dataExpirationDelay_4;
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_5 = (PoolData_t80E4C4FD24F727D017C06769387611B94D561514*)il2cpp_codegen_object_new(PoolData_t80E4C4FD24F727D017C06769387611B94D561514_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		PoolData__ctor_m2B71B627EE442771E6DA154F34A45D83935C26F7(L_5, L_3, L_4, NULL);
		V_0 = L_5;
		// if (prefab.scene.name != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___prefab0;
		NullCheck(L_6);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_7;
		L_7 = GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01(L_6, NULL);
		V_4 = L_7;
		String_t* L_8;
		L_8 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_4), NULL);
		V_3 = (bool)((!(((RuntimeObject*)(String_t*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		// AddToPool(prefab, pool, true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ___prefab0;
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_11 = V_0;
		ObjectPool_AddToPool_mEFB8308811E966677223F094E6A412B9D5F1FF6E(__this, L_10, L_11, (bool)1, NULL);
	}

IL_0049:
	{
		// _pools.Add(pool);
		List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA* L_12 = __this->____pools_7;
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_13 = V_0;
		NullCheck(L_12);
		List_1_Add_mD20FB87F36F039EAC79BD464D074D4528169EA25_inline(L_12, L_13, List_1_Add_mD20FB87F36F039EAC79BD464D074D4528169EA25_RuntimeMethod_var);
		// _poolPrefabs[prefab] = pool;
		Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D* L_14 = __this->____poolPrefabs_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = ___prefab0;
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_16 = V_0;
		NullCheck(L_14);
		Dictionary_2_set_Item_mED474DD881A0663446A498339BBD9E1D886E8027(L_14, L_15, L_16, Dictionary_2_set_Item_mED474DD881A0663446A498339BBD9E1D886E8027_RuntimeMethod_var);
		// return pool;
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_17 = V_0;
		V_2 = L_17;
		goto IL_0068;
	}

IL_0068:
	{
		// }
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_18 = V_2;
		return L_18;
	}
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::AddToPool(UnityEngine.GameObject,GameKit.Dependencies.Utilities.ObjectPooling.PoolData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_AddToPool_mEFB8308811E966677223F094E6A412B9D5F1FF6E (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instantiatedObject0, PoolData_t80E4C4FD24F727D017C06769387611B94D561514* ___pool1, bool ___parentPooler2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListStack_1_Push_m91645A6ED34849D1CE95C77F4085867D2A3D96B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17976A05DE6DAB230F991414B5FABF01AC6E94B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68EF67438DF019954C1ABE006C308B6E986245FE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (instantiatedObject == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___instantiatedObject0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// Debug.LogError("ObjectPooler -> AddToPool -> instantiatedObject is null.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral68EF67438DF019954C1ABE006C308B6E986245FE, NULL);
		// return;
		goto IL_0053;
	}

IL_001a:
	{
		// if (pool == null)
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_3 = ___pool1;
		V_1 = (bool)((((RuntimeObject*)(PoolData_t80E4C4FD24F727D017C06769387611B94D561514*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// Debug.LogError("ObjectPooler -> AddToPool -> pool is null.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral17976A05DE6DAB230F991414B5FABF01AC6E94B8, NULL);
		// return;
		goto IL_0053;
	}

IL_0030:
	{
		// instantiatedObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___instantiatedObject0;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// pool.Objects.Push(instantiatedObject);
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_6 = ___pool1;
		NullCheck(L_6);
		ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F* L_7 = L_6->___Objects_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ___instantiatedObject0;
		NullCheck(L_7);
		ListStack_1_Push_m91645A6ED34849D1CE95C77F4085867D2A3D96B5(L_7, L_8, ListStack_1_Push_m91645A6ED34849D1CE95C77F4085867D2A3D96B5_RuntimeMethod_var);
		// if (parentPooler)
		bool L_9 = ___parentPooler2;
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0053;
		}
	}
	{
		// ParentPooler(instantiatedObject, true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = ___instantiatedObject0;
		ObjectPool_ParentPooler_m33A3F613EB1B3F45ECA4BAB1D1A33ED88D1034B2(__this, L_11, (bool)1, NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::ParentPooler(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_ParentPooler_m33A3F613EB1B3F45ECA4BAB1D1A33ED88D1034B2 (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___poolObject0, bool ___worldPositionStays1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD19A272B7E29A5C74EE2B009A730A415B987C20E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m5B9250B911BF687C8756F9FC2E00CB1A4FD64261_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	{
		// MakeCollector();
		ObjectPool_MakeCollector_m18E36258365BB73FABF7558A97973A7ADAA81C88(__this, NULL);
		// string tag = poolObject.tag;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___poolObject0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_0, NULL);
		V_1 = L_1;
		// if (!_categoryChildren.TryGetValue(tag, out newParent))
		Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4* L_2 = __this->____categoryChildren_8;
		String_t* L_3 = V_1;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_mD19A272B7E29A5C74EE2B009A730A415B987C20E(L_2, L_3, (&V_0), Dictionary_2_TryGetValue_mD19A272B7E29A5C74EE2B009A730A415B987C20E_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0054;
		}
	}
	{
		// newParent = new GameObject().transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_6, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		V_0 = L_7;
		// newParent.name = tag;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_0;
		String_t* L_9 = V_1;
		NullCheck(L_8);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_8, L_9, NULL);
		// newParent.SetParent(_collector);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->____collector_6;
		NullCheck(L_10);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_10, L_11, NULL);
		// _categoryChildren[tag] = newParent;
		Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4* L_12 = __this->____categoryChildren_8;
		String_t* L_13 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = V_0;
		NullCheck(L_12);
		Dictionary_2_set_Item_m5B9250B911BF687C8756F9FC2E00CB1A4FD64261(L_12, L_13, L_14, Dictionary_2_set_Item_m5B9250B911BF687C8756F9FC2E00CB1A4FD64261_RuntimeMethod_var);
	}

IL_0054:
	{
		// poolObject.transform.SetParent(newParent, worldPositionStays);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = ___poolObject0;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_0;
		bool L_18 = ___worldPositionStays1;
		NullCheck(L_16);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_16, L_17, L_18, NULL);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool__ctor_m264279A8619287AD3809D61084EE055E3A07F76F (ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m02984D3944FBC28155D08313117BD97B33BD34ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m55F8FD407CB162716E61407D1402A5BD4777CDA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAF22C7EEE7291D6105DF5BE9A731BCF8ABCE416F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t508F4CB243B163280E2C476A4977BED583F2ABEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m233B19BA48716E4C5523F9EB4C12BD4F37183AEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float _dataExpirationDelay = 60f;
		__this->____dataExpirationDelay_4 = (60.0f);
		// private Transform _collector = null;
		__this->____collector_6 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____collector_6), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// private List<PoolData> _pools = new List<PoolData>();
		List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA* L_0 = (List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA*)il2cpp_codegen_object_new(List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m233B19BA48716E4C5523F9EB4C12BD4F37183AEF(L_0, List_1__ctor_m233B19BA48716E4C5523F9EB4C12BD4F37183AEF_RuntimeMethod_var);
		__this->____pools_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pools_7), (void*)L_0);
		// private Dictionary<string, Transform> _categoryChildren = new Dictionary<string, Transform>();
		Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4* L_1 = (Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4*)il2cpp_codegen_object_new(Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mAF22C7EEE7291D6105DF5BE9A731BCF8ABCE416F(L_1, Dictionary_2__ctor_mAF22C7EEE7291D6105DF5BE9A731BCF8ABCE416F_RuntimeMethod_var);
		__this->____categoryChildren_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____categoryChildren_8), (void*)L_1);
		// private Dictionary<GameObject, PoolData> _poolPrefabs = new Dictionary<GameObject, PoolData>();
		Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D* L_2 = (Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D*)il2cpp_codegen_object_new(Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m55F8FD407CB162716E61407D1402A5BD4777CDA8(L_2, Dictionary_2__ctor_m55F8FD407CB162716E61407D1402A5BD4777CDA8_RuntimeMethod_var);
		__this->____poolPrefabs_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____poolPrefabs_9), (void*)L_2);
		// private Dictionary<GameObject, PoolData> _activeObjects = new Dictionary<GameObject, PoolData>();
		Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D* L_3 = (Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D*)il2cpp_codegen_object_new(Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m55F8FD407CB162716E61407D1402A5BD4777CDA8(L_3, Dictionary_2__ctor_m55F8FD407CB162716E61407D1402A5BD4777CDA8_RuntimeMethod_var);
		__this->____activeObjects_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeObjects_10), (void*)L_3);
		// private Dictionary<GameObject, DelayedStoreData> _delayedStoreObjects = new Dictionary<GameObject, DelayedStoreData>();
		Dictionary_2_t508F4CB243B163280E2C476A4977BED583F2ABEF* L_4 = (Dictionary_2_t508F4CB243B163280E2C476A4977BED583F2ABEF*)il2cpp_codegen_object_new(Dictionary_2_t508F4CB243B163280E2C476A4977BED583F2ABEF_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_m02984D3944FBC28155D08313117BD97B33BD34ED(L_4, Dictionary_2__ctor_m02984D3944FBC28155D08313117BD97B33BD34ED_RuntimeMethod_var);
		__this->____delayedStoreObjects_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____delayedStoreObjects_11), (void*)L_4);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData
IL2CPP_EXTERN_C void DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2_marshal_pinvoke(const DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2& unmarshaled, DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2_marshaled_pinvoke& marshaled)
{
	marshaled.___StoreTime_0 = unmarshaled.___StoreTime_0;
	marshaled.___ParentPooler_1 = static_cast<int32_t>(unmarshaled.___ParentPooler_1);
}
IL2CPP_EXTERN_C void DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2_marshal_pinvoke_back(const DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2_marshaled_pinvoke& marshaled, DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2& unmarshaled)
{
	float unmarshaledStoreTime_temp_0 = 0.0f;
	unmarshaledStoreTime_temp_0 = marshaled.___StoreTime_0;
	unmarshaled.___StoreTime_0 = unmarshaledStoreTime_temp_0;
	bool unmarshaledParentPooler_temp_1 = false;
	unmarshaledParentPooler_temp_1 = static_cast<bool>(marshaled.___ParentPooler_1);
	unmarshaled.___ParentPooler_1 = unmarshaledParentPooler_temp_1;
}
// Conversion method for clean up from marshalling of: GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData
IL2CPP_EXTERN_C void DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2_marshal_pinvoke_cleanup(DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData
IL2CPP_EXTERN_C void DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2_marshal_com(const DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2& unmarshaled, DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2_marshaled_com& marshaled)
{
	marshaled.___StoreTime_0 = unmarshaled.___StoreTime_0;
	marshaled.___ParentPooler_1 = static_cast<int32_t>(unmarshaled.___ParentPooler_1);
}
IL2CPP_EXTERN_C void DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2_marshal_com_back(const DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2_marshaled_com& marshaled, DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2& unmarshaled)
{
	float unmarshaledStoreTime_temp_0 = 0.0f;
	unmarshaledStoreTime_temp_0 = marshaled.___StoreTime_0;
	unmarshaled.___StoreTime_0 = unmarshaledStoreTime_temp_0;
	bool unmarshaledParentPooler_temp_1 = false;
	unmarshaledParentPooler_temp_1 = static_cast<bool>(marshaled.___ParentPooler_1);
	unmarshaled.___ParentPooler_1 = unmarshaledParentPooler_temp_1;
}
// Conversion method for clean up from marshalling of: GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData
IL2CPP_EXTERN_C void DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2_marshal_com_cleanup(DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2_marshaled_com& marshaled)
{
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/DelayedStoreData::.ctor(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelayedStoreData__ctor_mCA18EA5D75E4DAA028FF0A4ACC200A69DEAAC63D (DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2* __this, float ___storeTime0, bool ___parentPooler1, const RuntimeMethod* method) 
{
	{
		// StoreTime = storeTime;
		float L_0 = ___storeTime0;
		__this->___StoreTime_0 = L_0;
		// ParentPooler = parentPooler;
		bool L_1 = ___parentPooler1;
		__this->___ParentPooler_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DelayedStoreData__ctor_mCA18EA5D75E4DAA028FF0A4ACC200A69DEAAC63D_AdjustorThunk (RuntimeObject* __this, float ___storeTime0, bool ___parentPooler1, const RuntimeMethod* method)
{
	DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2*>(__this + _offset);
	DelayedStoreData__ctor_mCA18EA5D75E4DAA028FF0A4ACC200A69DEAAC63D(_thisAdjusted, ___storeTime0, ___parentPooler1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__CleanupChecks>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C__CleanupChecksU3Ed__12__ctor_m9682F4A185B134B59F7FBF8258779634E577ADB0 (U3C__CleanupChecksU3Ed__12_tD80DBEC4FB6FA79CF82657DD30C4FFA83DDA0D9B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__CleanupChecks>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C__CleanupChecksU3Ed__12_System_IDisposable_Dispose_mD60B6FB2D2DDC56726CF6209CBBA7FAB29CA7B3F (U3C__CleanupChecksU3Ed__12_tD80DBEC4FB6FA79CF82657DD30C4FFA83DDA0D9B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__CleanupChecks>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3C__CleanupChecksU3Ed__12_MoveNext_mA795FC9E13D5875EFD4F7F65C46EC4D39A0B0085 (U3C__CleanupChecksU3Ed__12_tD80DBEC4FB6FA79CF82657DD30C4FFA83DDA0D9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mE4496161F9AFD9888660CE4DF8DB0D7018709415_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m6CCF5B20C9236710066E82FF4E0F6D6556108A9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mA5AA65AE6600F69DA73A9482E01A9C7E1EB1AA8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mAB26A499275E27048FCA112A9A09B44A246E3439_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC8AC4D30BC88505D41B56F1E36EBB808FC865EEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD956870668D4185EEB9EDD8E9F37761330605115_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m00D4E1B3A1CF1CFAF76A909E9685EAA967F36FC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA2B9D3A6C3ABC4854B390752B661771C006B970D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m8401F6267478520608AB44F8974AFFA8149E3885_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mA852B2303B6D398DB9364A4644C6E3FB2F937DED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mFDC83DC798EFC2F108B93C1FB32F1EF9F1987FFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1D50CAD13A3F962AA9023E58E1CA31D3A49299F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B24_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_02fe;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int poolIndex = 0;
		__this->___U3CpoolIndexU3E5__1_3 = 0;
		goto IL_0306;
	}

IL_002f:
	{
		// if (_delayedStoreObjects.Count > 0)
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		Dictionary_2_t508F4CB243B163280E2C476A4977BED583F2ABEF* L_4 = L_3->____delayedStoreObjects_11;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mAB26A499275E27048FCA112A9A09B44A246E3439(L_4, Dictionary_2_get_Count_mAB26A499275E27048FCA112A9A09B44A246E3439_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0173;
		}
	}
	{
		// List<GameObject> keysToRemove = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_7, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___U3CkeysToRemoveU3E5__2_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CkeysToRemoveU3E5__2_4), (void*)L_7);
		// foreach (KeyValuePair<GameObject, DelayedStoreData> item in _delayedStoreObjects)
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_8 = __this->___U3CU3E4__this_2;
		NullCheck(L_8);
		Dictionary_2_t508F4CB243B163280E2C476A4977BED583F2ABEF* L_9 = L_8->____delayedStoreObjects_11;
		NullCheck(L_9);
		Enumerator_tD09996E2D7BF24BF9A7A97B1BD082487422214C6 L_10;
		L_10 = Dictionary_2_GetEnumerator_mE4496161F9AFD9888660CE4DF8DB0D7018709415(L_9, Dictionary_2_GetEnumerator_mE4496161F9AFD9888660CE4DF8DB0D7018709415_RuntimeMethod_var);
		__this->___U3CU3Es__3_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Es__3_5))->____dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Es__3_5))->____current_3))->___key_0), (void*)NULL);
		#endif
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f8:
			{// begin finally (depth: 1)
				Enumerator_tD09996E2D7BF24BF9A7A97B1BD082487422214C6* L_11 = (&__this->___U3CU3Es__3_5);
				Enumerator_Dispose_mC8AC4D30BC88505D41B56F1E36EBB808FC865EEE(L_11, Enumerator_Dispose_mC8AC4D30BC88505D41B56F1E36EBB808FC865EEE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00e6_1;
			}

IL_006f_1:
			{
				// foreach (KeyValuePair<GameObject, DelayedStoreData> item in _delayedStoreObjects)
				Enumerator_tD09996E2D7BF24BF9A7A97B1BD082487422214C6* L_12 = (&__this->___U3CU3Es__3_5);
				KeyValuePair_2_t8795A67BF30F3E7DC0C1C03E9B1BF6EAEFBD996D L_13;
				L_13 = Enumerator_get_Current_m00D4E1B3A1CF1CFAF76A909E9685EAA967F36FC9_inline(L_12, Enumerator_get_Current_m00D4E1B3A1CF1CFAF76A909E9685EAA967F36FC9_RuntimeMethod_var);
				__this->___U3CitemU3E5__4_6 = L_13;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CitemU3E5__4_6))->___key_0), (void*)NULL);
				// if (Time.time >= item.Value.StoreTime)
				float L_14;
				L_14 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
				KeyValuePair_2_t8795A67BF30F3E7DC0C1C03E9B1BF6EAEFBD996D* L_15 = (&__this->___U3CitemU3E5__4_6);
				DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2 L_16;
				L_16 = KeyValuePair_2_get_Value_m8401F6267478520608AB44F8974AFFA8149E3885_inline(L_15, KeyValuePair_2_get_Value_m8401F6267478520608AB44F8974AFFA8149E3885_RuntimeMethod_var);
				float L_17 = L_16.___StoreTime_0;
				V_2 = (bool)((((int32_t)((!(((float)L_14) >= ((float)L_17)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_18 = V_2;
				if (!L_18)
				{
					goto IL_00d9_1;
				}
			}
			{
				// keysToRemove.Add(item.Key);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_19 = __this->___U3CkeysToRemoveU3E5__2_4;
				KeyValuePair_2_t8795A67BF30F3E7DC0C1C03E9B1BF6EAEFBD996D* L_20 = (&__this->___U3CitemU3E5__4_6);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
				L_21 = KeyValuePair_2_get_Key_mA2B9D3A6C3ABC4854B390752B661771C006B970D_inline(L_20, KeyValuePair_2_get_Key_mA2B9D3A6C3ABC4854B390752B661771C006B970D_RuntimeMethod_var);
				NullCheck(L_19);
				List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_19, L_21, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
				// Store(item.Key, item.Value.ParentPooler);
				KeyValuePair_2_t8795A67BF30F3E7DC0C1C03E9B1BF6EAEFBD996D* L_22 = (&__this->___U3CitemU3E5__4_6);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
				L_23 = KeyValuePair_2_get_Key_mA2B9D3A6C3ABC4854B390752B661771C006B970D_inline(L_22, KeyValuePair_2_get_Key_mA2B9D3A6C3ABC4854B390752B661771C006B970D_RuntimeMethod_var);
				KeyValuePair_2_t8795A67BF30F3E7DC0C1C03E9B1BF6EAEFBD996D* L_24 = (&__this->___U3CitemU3E5__4_6);
				DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2 L_25;
				L_25 = KeyValuePair_2_get_Value_m8401F6267478520608AB44F8974AFFA8149E3885_inline(L_24, KeyValuePair_2_get_Value_m8401F6267478520608AB44F8974AFFA8149E3885_RuntimeMethod_var);
				bool L_26 = L_25.___ParentPooler_1;
				ObjectPool_Store_m71E6781EC58E9E6707E9E4720DC1C722A4058023(L_23, L_26, NULL);
			}

IL_00d9_1:
			{
				KeyValuePair_2_t8795A67BF30F3E7DC0C1C03E9B1BF6EAEFBD996D* L_27 = (&__this->___U3CitemU3E5__4_6);
				il2cpp_codegen_initobj(L_27, sizeof(KeyValuePair_2_t8795A67BF30F3E7DC0C1C03E9B1BF6EAEFBD996D));
			}

IL_00e6_1:
			{
				// foreach (KeyValuePair<GameObject, DelayedStoreData> item in _delayedStoreObjects)
				Enumerator_tD09996E2D7BF24BF9A7A97B1BD082487422214C6* L_28 = (&__this->___U3CU3Es__3_5);
				bool L_29;
				L_29 = Enumerator_MoveNext_mD956870668D4185EEB9EDD8E9F37761330605115(L_28, Enumerator_MoveNext_mD956870668D4185EEB9EDD8E9F37761330605115_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_006f_1;
				}
			}
			{
				goto IL_010b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_010b:
	{
		Enumerator_tD09996E2D7BF24BF9A7A97B1BD082487422214C6* L_30 = (&__this->___U3CU3Es__3_5);
		il2cpp_codegen_initobj(L_30, sizeof(Enumerator_tD09996E2D7BF24BF9A7A97B1BD082487422214C6));
		// for (int i = 0; i < keysToRemove.Count; i++)
		__this->___U3CiU3E5__5_7 = 0;
		goto IL_0152;
	}

IL_0120:
	{
		// _delayedStoreObjects.Remove(keysToRemove[i]);
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_31 = __this->___U3CU3E4__this_2;
		NullCheck(L_31);
		Dictionary_2_t508F4CB243B163280E2C476A4977BED583F2ABEF* L_32 = L_31->____delayedStoreObjects_11;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_33 = __this->___U3CkeysToRemoveU3E5__2_4;
		int32_t L_34 = __this->___U3CiU3E5__5_7;
		NullCheck(L_33);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_33, L_34, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_32);
		bool L_36;
		L_36 = Dictionary_2_Remove_mA5AA65AE6600F69DA73A9482E01A9C7E1EB1AA8C(L_32, L_35, Dictionary_2_Remove_mA5AA65AE6600F69DA73A9482E01A9C7E1EB1AA8C_RuntimeMethod_var);
		// for (int i = 0; i < keysToRemove.Count; i++)
		int32_t L_37 = __this->___U3CiU3E5__5_7;
		V_3 = L_37;
		int32_t L_38 = V_3;
		__this->___U3CiU3E5__5_7 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0152:
	{
		// for (int i = 0; i < keysToRemove.Count; i++)
		int32_t L_39 = __this->___U3CiU3E5__5_7;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_40 = __this->___U3CkeysToRemoveU3E5__2_4;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_40, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_39) < ((int32_t)L_41))? 1 : 0);
		bool L_42 = V_4;
		if (L_42)
		{
			goto IL_0120;
		}
	}
	{
		__this->___U3CkeysToRemoveU3E5__2_4 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CkeysToRemoveU3E5__2_4), (void*)(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)NULL);
	}

IL_0173:
	{
		// if (_dataExpirationDelay > 0f && _pools.Count > 0)
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_43 = __this->___U3CU3E4__this_2;
		NullCheck(L_43);
		float L_44 = L_43->____dataExpirationDelay_4;
		if ((!(((float)L_44) > ((float)(0.0f)))))
		{
			goto IL_019a;
		}
	}
	{
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_45 = __this->___U3CU3E4__this_2;
		NullCheck(L_45);
		List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA* L_46 = L_45->____pools_7;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = List_1_get_Count_mFDC83DC798EFC2F108B93C1FB32F1EF9F1987FFC_inline(L_46, List_1_get_Count_mFDC83DC798EFC2F108B93C1FB32F1EF9F1987FFC_RuntimeMethod_var);
		G_B24_0 = ((((int32_t)L_47) > ((int32_t)0))? 1 : 0);
		goto IL_019b;
	}

IL_019a:
	{
		G_B24_0 = 0;
	}

IL_019b:
	{
		V_5 = (bool)G_B24_0;
		bool L_48 = V_5;
		if (!L_48)
		{
			goto IL_02ee;
		}
	}
	{
		// if (poolIndex >= _pools.Count)
		int32_t L_49 = __this->___U3CpoolIndexU3E5__1_3;
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_50 = __this->___U3CU3E4__this_2;
		NullCheck(L_50);
		List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA* L_51 = L_50->____pools_7;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = List_1_get_Count_mFDC83DC798EFC2F108B93C1FB32F1EF9F1987FFC_inline(L_51, List_1_get_Count_mFDC83DC798EFC2F108B93C1FB32F1EF9F1987FFC_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)((((int32_t)L_49) < ((int32_t)L_52))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_53 = V_6;
		if (!L_53)
		{
			goto IL_01cd;
		}
	}
	{
		// poolIndex = 0;
		__this->___U3CpoolIndexU3E5__1_3 = 0;
	}

IL_01cd:
	{
		// if (_pools[poolIndex].PoolExpired())
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_54 = __this->___U3CU3E4__this_2;
		NullCheck(L_54);
		List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA* L_55 = L_54->____pools_7;
		int32_t L_56 = __this->___U3CpoolIndexU3E5__1_3;
		NullCheck(L_55);
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_57;
		L_57 = List_1_get_Item_m1D50CAD13A3F962AA9023E58E1CA31D3A49299F0(L_55, L_56, List_1_get_Item_m1D50CAD13A3F962AA9023E58E1CA31D3A49299F0_RuntimeMethod_var);
		NullCheck(L_57);
		bool L_58;
		L_58 = PoolData_PoolExpired_mB7877E34B926FC4589F608405C8EF9DC472FE2AE(L_57, NULL);
		V_7 = L_58;
		bool L_59 = V_7;
		if (!L_59)
		{
			goto IL_0268;
		}
	}
	{
		// _poolPrefabs.Remove(_pools[poolIndex].Prefab);
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_60 = __this->___U3CU3E4__this_2;
		NullCheck(L_60);
		Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D* L_61 = L_60->____poolPrefabs_9;
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_62 = __this->___U3CU3E4__this_2;
		NullCheck(L_62);
		List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA* L_63 = L_62->____pools_7;
		int32_t L_64 = __this->___U3CpoolIndexU3E5__1_3;
		NullCheck(L_63);
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_65;
		L_65 = List_1_get_Item_m1D50CAD13A3F962AA9023E58E1CA31D3A49299F0(L_63, L_64, List_1_get_Item_m1D50CAD13A3F962AA9023E58E1CA31D3A49299F0_RuntimeMethod_var);
		NullCheck(L_65);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66 = L_65->___Prefab_0;
		NullCheck(L_61);
		bool L_67;
		L_67 = Dictionary_2_Remove_m6CCF5B20C9236710066E82FF4E0F6D6556108A9B(L_61, L_66, Dictionary_2_Remove_m6CCF5B20C9236710066E82FF4E0F6D6556108A9B_RuntimeMethod_var);
		// DestroyPool(_pools[poolIndex], false);
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_68 = __this->___U3CU3E4__this_2;
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_69 = __this->___U3CU3E4__this_2;
		NullCheck(L_69);
		List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA* L_70 = L_69->____pools_7;
		int32_t L_71 = __this->___U3CpoolIndexU3E5__1_3;
		NullCheck(L_70);
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_72;
		L_72 = List_1_get_Item_m1D50CAD13A3F962AA9023E58E1CA31D3A49299F0(L_70, L_71, List_1_get_Item_m1D50CAD13A3F962AA9023E58E1CA31D3A49299F0_RuntimeMethod_var);
		NullCheck(L_68);
		ObjectPool_DestroyPool_m583BEFCED2133B296625E0C6D541B0FBE45B1A70(L_68, L_72, (bool)0, NULL);
		// _pools.RemoveAt(poolIndex);
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_73 = __this->___U3CU3E4__this_2;
		NullCheck(L_73);
		List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA* L_74 = L_73->____pools_7;
		int32_t L_75 = __this->___U3CpoolIndexU3E5__1_3;
		NullCheck(L_74);
		List_1_RemoveAt_mA852B2303B6D398DB9364A4644C6E3FB2F937DED(L_74, L_75, List_1_RemoveAt_mA852B2303B6D398DB9364A4644C6E3FB2F937DED_RuntimeMethod_var);
		// poolIndex--;
		int32_t L_76 = __this->___U3CpoolIndexU3E5__1_3;
		V_3 = L_76;
		int32_t L_77 = V_3;
		__this->___U3CpoolIndexU3E5__1_3 = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		goto IL_02dd;
	}

IL_0268:
	{
		// List<GameObject> culledObjects = _pools[poolIndex].Cull();
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_78 = __this->___U3CU3E4__this_2;
		NullCheck(L_78);
		List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA* L_79 = L_78->____pools_7;
		int32_t L_80 = __this->___U3CpoolIndexU3E5__1_3;
		NullCheck(L_79);
		PoolData_t80E4C4FD24F727D017C06769387611B94D561514* L_81;
		L_81 = List_1_get_Item_m1D50CAD13A3F962AA9023E58E1CA31D3A49299F0(L_79, L_80, List_1_get_Item_m1D50CAD13A3F962AA9023E58E1CA31D3A49299F0_RuntimeMethod_var);
		NullCheck(L_81);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_82;
		L_82 = PoolData_Cull_m5A4C006706852526AA7C0990071C40F4B50BEAC3(L_81, NULL);
		__this->___U3CculledObjectsU3E5__6_8 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CculledObjectsU3E5__6_8), (void*)L_82);
		// for (int i = 0; i < culledObjects.Count; i++)
		__this->___U3CiU3E5__7_9 = 0;
		goto IL_02bc;
	}

IL_0293:
	{
		// Destroy(culledObjects[i]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_83 = __this->___U3CculledObjectsU3E5__6_8;
		int32_t L_84 = __this->___U3CiU3E5__7_9;
		NullCheck(L_83);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_85;
		L_85 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_83, L_84, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_85, NULL);
		// for (int i = 0; i < culledObjects.Count; i++)
		int32_t L_86 = __this->___U3CiU3E5__7_9;
		V_3 = L_86;
		int32_t L_87 = V_3;
		__this->___U3CiU3E5__7_9 = ((int32_t)il2cpp_codegen_add(L_87, 1));
	}

IL_02bc:
	{
		// for (int i = 0; i < culledObjects.Count; i++)
		int32_t L_88 = __this->___U3CiU3E5__7_9;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_89 = __this->___U3CculledObjectsU3E5__6_8;
		NullCheck(L_89);
		int32_t L_90;
		L_90 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_89, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_88) < ((int32_t)L_90))? 1 : 0);
		bool L_91 = V_8;
		if (L_91)
		{
			goto IL_0293;
		}
	}
	{
		__this->___U3CculledObjectsU3E5__6_8 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CculledObjectsU3E5__6_8), (void*)(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)NULL);
	}

IL_02dd:
	{
		// poolIndex++;
		int32_t L_92 = __this->___U3CpoolIndexU3E5__1_3;
		V_3 = L_92;
		int32_t L_93 = V_3;
		__this->___U3CpoolIndexU3E5__1_3 = ((int32_t)il2cpp_codegen_add(L_93, 1));
	}

IL_02ee:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_02fe:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0306:
	{
		// while (true)
		V_9 = (bool)1;
		goto IL_002f;
	}
}
// System.Object GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__CleanupChecks>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3C__CleanupChecksU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m906D2653CBA6AB3225F903E6397D4010B5482E3B (U3C__CleanupChecksU3Ed__12_tD80DBEC4FB6FA79CF82657DD30C4FFA83DDA0D9B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__CleanupChecks>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C__CleanupChecksU3Ed__12_System_Collections_IEnumerator_Reset_m43706A770C3402FDAE08127BCD6ED917B0FA73B7 (U3C__CleanupChecksU3Ed__12_tD80DBEC4FB6FA79CF82657DD30C4FFA83DDA0D9B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3C__CleanupChecksU3Ed__12_System_Collections_IEnumerator_Reset_m43706A770C3402FDAE08127BCD6ED917B0FA73B7_RuntimeMethod_var)));
	}
}
// System.Object GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__CleanupChecks>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3C__CleanupChecksU3Ed__12_System_Collections_IEnumerator_get_Current_m9BF2C08843B028A491A40B528669B6D8A5CFC498 (U3C__CleanupChecksU3Ed__12_tD80DBEC4FB6FA79CF82657DD30C4FFA83DDA0D9B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__Reset>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C__ResetU3Ed__13__ctor_m749FCB699ACBC2D96C7AB923C381CC1DA123CAB4 (U3C__ResetU3Ed__13_tAA6080EEC3AA5D7FB8E14FE3BACA96785E9E62BB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__Reset>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C__ResetU3Ed__13_System_IDisposable_Dispose_m6260020EE4C68FD619C0649090E3A61EA63154F9 (U3C__ResetU3Ed__13_tAA6080EEC3AA5D7FB8E14FE3BACA96785E9E62BB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__Reset>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3C__ResetU3Ed__13_MoveNext_m65E3B510704E88554E9E0AF4682C82640CF2D226 (U3C__ResetU3Ed__13_tAA6080EEC3AA5D7FB8E14FE3BACA96785E9E62BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m7337575D54E678C7A71036F626F5061EB90D40C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m93DE10A8B7FB144BFF486534086B965B8744B235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mA5AD7A322EF82C29C737978C227E7FDA6363809B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mCF5610BCC916CD07B0FDA9719D2599BDDA9DC204_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m328BFA89C97C733CC6AD076DB07BF7C54260DA40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m13162FAE74B984D6C013F3A5B05A728DBCAF83FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFF80B3C1EEA2272DC9C9C406B8B4C133B5783C96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m80AF8133DC5E5D3146C5E1C409C954C4489C11BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m6A56E543624C20998FAF394128301812F0735A90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_00a9;
	}

IL_0022:
	{
		goto IL_01b2;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _poolPrefabs.Clear();
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_2 = __this->___U3CU3E4__this_3;
		NullCheck(L_2);
		Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D* L_3 = L_2->____poolPrefabs_9;
		NullCheck(L_3);
		Dictionary_2_Clear_mA5AD7A322EF82C29C737978C227E7FDA6363809B(L_3, Dictionary_2_Clear_mA5AD7A322EF82C29C737978C227E7FDA6363809B_RuntimeMethod_var);
		// _categoryChildren.Clear();
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_4 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4* L_5 = L_4->____categoryChildren_8;
		NullCheck(L_5);
		Dictionary_2_Clear_m7337575D54E678C7A71036F626F5061EB90D40C2(L_5, Dictionary_2_Clear_m7337575D54E678C7A71036F626F5061EB90D40C2_RuntimeMethod_var);
		// _pools.Clear();
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_6 = __this->___U3CU3E4__this_3;
		NullCheck(L_6);
		List_1_tB7271C5068DA46F537B1C7DD5EC8CEF89AB4A8AA* L_7 = L_6->____pools_7;
		NullCheck(L_7);
		List_1_Clear_m6A56E543624C20998FAF394128301812F0735A90_inline(L_7, List_1_Clear_m6A56E543624C20998FAF394128301812F0735A90_RuntimeMethod_var);
		// _delayedStoreObjects.Clear();
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_8 = __this->___U3CU3E4__this_3;
		NullCheck(L_8);
		Dictionary_2_t508F4CB243B163280E2C476A4977BED583F2ABEF* L_9 = L_8->____delayedStoreObjects_11;
		NullCheck(L_9);
		Dictionary_2_Clear_m93DE10A8B7FB144BFF486534086B965B8744B235(L_9, Dictionary_2_Clear_m93DE10A8B7FB144BFF486534086B965B8744B235_RuntimeMethod_var);
		// transform.DestroyChildren(false);
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_10 = __this->___U3CU3E4__this_3;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Transforms_DestroyChildren_mA2FAF62522A251F014F7F12FCA9B82B7F274A770(L_11, (bool)0, NULL);
		// WaitForEndOfFrame endOfFrame = new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_12 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_12, NULL);
		__this->___U3CendOfFrameU3E5__1_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CendOfFrameU3E5__1_4), (void*)L_12);
		goto IL_00b0;
	}

IL_0094:
	{
		// yield return endOfFrame;
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_13 = __this->___U3CendOfFrameU3E5__1_4;
		__this->___U3CU3E2__current_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_13);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00a9:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00b0:
	{
		// while (transform.childCount > 0)
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_14 = __this->___U3CU3E4__this_3;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_15, NULL);
		V_1 = (bool)((((int32_t)L_16) > ((int32_t)0))? 1 : 0);
		bool L_17 = V_1;
		if (L_17)
		{
			goto IL_0094;
		}
	}
	{
		// if (destroyActive)
		bool L_18 = __this->___destroyActive_2;
		V_2 = L_18;
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_020e;
		}
	}
	{
		// List<GameObject> objects = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_20 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_20, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___U3CobjectsU3E5__2_5 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CobjectsU3E5__2_5), (void*)L_20);
		// foreach (KeyValuePair<GameObject, PoolData> value in _activeObjects)
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_21 = __this->___U3CU3E4__this_3;
		NullCheck(L_21);
		Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D* L_22 = L_21->____activeObjects_10;
		NullCheck(L_22);
		Enumerator_tE37673C8E892467091D89DFAFF5197B50243ABC5 L_23;
		L_23 = Dictionary_2_GetEnumerator_mCF5610BCC916CD07B0FDA9719D2599BDDA9DC204(L_22, Dictionary_2_GetEnumerator_mCF5610BCC916CD07B0FDA9719D2599BDDA9DC204_RuntimeMethod_var);
		__this->___U3CU3Es__3_6 = L_23;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Es__3_6))->____dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Es__3_6))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Es__3_6))->____current_3))->___value_1), (void*)NULL);
		#endif
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013c:
			{// begin finally (depth: 1)
				Enumerator_tE37673C8E892467091D89DFAFF5197B50243ABC5* L_24 = (&__this->___U3CU3Es__3_6);
				Enumerator_Dispose_m328BFA89C97C733CC6AD076DB07BF7C54260DA40(L_24, Enumerator_Dispose_m328BFA89C97C733CC6AD076DB07BF7C54260DA40_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_012d_1;
			}

IL_00f9_1:
			{
				// foreach (KeyValuePair<GameObject, PoolData> value in _activeObjects)
				Enumerator_tE37673C8E892467091D89DFAFF5197B50243ABC5* L_25 = (&__this->___U3CU3Es__3_6);
				KeyValuePair_2_tC55380E7813CAA616F1EA07EA30FE0108A387124 L_26;
				L_26 = Enumerator_get_Current_mFF80B3C1EEA2272DC9C9C406B8B4C133B5783C96_inline(L_25, Enumerator_get_Current_mFF80B3C1EEA2272DC9C9C406B8B4C133B5783C96_RuntimeMethod_var);
				__this->___U3CvalueU3E5__4_7 = L_26;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CvalueU3E5__4_7))->___key_0), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CvalueU3E5__4_7))->___value_1), (void*)NULL);
				#endif
				// objects.Add(value.Key);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_27 = __this->___U3CobjectsU3E5__2_5;
				KeyValuePair_2_tC55380E7813CAA616F1EA07EA30FE0108A387124* L_28 = (&__this->___U3CvalueU3E5__4_7);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
				L_29 = KeyValuePair_2_get_Key_m80AF8133DC5E5D3146C5E1C409C954C4489C11BD_inline(L_28, KeyValuePair_2_get_Key_m80AF8133DC5E5D3146C5E1C409C954C4489C11BD_RuntimeMethod_var);
				NullCheck(L_27);
				List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_27, L_29, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
				KeyValuePair_2_tC55380E7813CAA616F1EA07EA30FE0108A387124* L_30 = (&__this->___U3CvalueU3E5__4_7);
				il2cpp_codegen_initobj(L_30, sizeof(KeyValuePair_2_tC55380E7813CAA616F1EA07EA30FE0108A387124));
			}

IL_012d_1:
			{
				// foreach (KeyValuePair<GameObject, PoolData> value in _activeObjects)
				Enumerator_tE37673C8E892467091D89DFAFF5197B50243ABC5* L_31 = (&__this->___U3CU3Es__3_6);
				bool L_32;
				L_32 = Enumerator_MoveNext_m13162FAE74B984D6C013F3A5B05A728DBCAF83FF(L_31, Enumerator_MoveNext_m13162FAE74B984D6C013F3A5B05A728DBCAF83FF_RuntimeMethod_var);
				if (L_32)
				{
					goto IL_00f9_1;
				}
			}
			{
				goto IL_014f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014f:
	{
		Enumerator_tE37673C8E892467091D89DFAFF5197B50243ABC5* L_33 = (&__this->___U3CU3Es__3_6);
		il2cpp_codegen_initobj(L_33, sizeof(Enumerator_tE37673C8E892467091D89DFAFF5197B50243ABC5));
		// for (int i = 0; i < objects.Count; i++)
		__this->___U3CiU3E5__5_8 = 0;
		goto IL_01ea;
	}

IL_0167:
	{
		// if (objects[i] != null)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_34 = __this->___U3CobjectsU3E5__2_5;
		int32_t L_35 = __this->___U3CiU3E5__5_8;
		NullCheck(L_34);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_34, L_35, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_36, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_37;
		bool L_38 = V_3;
		if (!L_38)
		{
			goto IL_01d7;
		}
	}
	{
		// Destroy(objects[i]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_39 = __this->___U3CobjectsU3E5__2_5;
		int32_t L_40 = __this->___U3CiU3E5__5_8;
		NullCheck(L_39);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_39, L_40, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_41, NULL);
		goto IL_01b9;
	}

IL_019d:
	{
		// yield return endOfFrame;
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_42 = __this->___U3CendOfFrameU3E5__1_4;
		__this->___U3CU3E2__current_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_42);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_01b2:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_01b9:
	{
		// while (objects[i] != null)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_43 = __this->___U3CobjectsU3E5__2_5;
		int32_t L_44 = __this->___U3CiU3E5__5_8;
		NullCheck(L_43);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45;
		L_45 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_43, L_44, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_45, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_46;
		bool L_47 = V_4;
		if (L_47)
		{
			goto IL_019d;
		}
	}
	{
	}

IL_01d7:
	{
		// for (int i = 0; i < objects.Count; i++)
		int32_t L_48 = __this->___U3CiU3E5__5_8;
		V_5 = L_48;
		int32_t L_49 = V_5;
		__this->___U3CiU3E5__5_8 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_01ea:
	{
		// for (int i = 0; i < objects.Count; i++)
		int32_t L_50 = __this->___U3CiU3E5__5_8;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_51 = __this->___U3CobjectsU3E5__2_5;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_51, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_50) < ((int32_t)L_52))? 1 : 0);
		bool L_53 = V_6;
		if (L_53)
		{
			goto IL_0167;
		}
	}
	{
		__this->___U3CobjectsU3E5__2_5 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CobjectsU3E5__2_5), (void*)(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)NULL);
	}

IL_020e:
	{
		// _activeObjects.Clear();
		ObjectPool_t758DC43EB45EAC254309F98CAF0C0CC81553DD74* L_54 = __this->___U3CU3E4__this_3;
		NullCheck(L_54);
		Dictionary_2_tC740B9A025381B15E26B877D2681CCB1E1009F7D* L_55 = L_54->____activeObjects_10;
		NullCheck(L_55);
		Dictionary_2_Clear_mA5AD7A322EF82C29C737978C227E7FDA6363809B(L_55, Dictionary_2_Clear_mA5AD7A322EF82C29C737978C227E7FDA6363809B_RuntimeMethod_var);
		// }
		return (bool)0;
	}
}
// System.Object GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__Reset>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3C__ResetU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAB4A1104D2711DAAA93B84C88B2173F8454756B3 (U3C__ResetU3Ed__13_tAA6080EEC3AA5D7FB8E14FE3BACA96785E9E62BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__Reset>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C__ResetU3Ed__13_System_Collections_IEnumerator_Reset_m17BC5D6169A50A58E1E200C66D4075A84784A2A5 (U3C__ResetU3Ed__13_tAA6080EEC3AA5D7FB8E14FE3BACA96785E9E62BB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3C__ResetU3Ed__13_System_Collections_IEnumerator_Reset_m17BC5D6169A50A58E1E200C66D4075A84784A2A5_RuntimeMethod_var)));
	}
}
// System.Object GameKit.Dependencies.Utilities.ObjectPooling.ObjectPool/<__Reset>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3C__ResetU3Ed__13_System_Collections_IEnumerator_get_Current_mE08183B6F4DBF0D660A8CBBC35085BEB76BF7E6D (U3C__ResetU3Ed__13_tAA6080EEC3AA5D7FB8E14FE3BACA96785E9E62BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.PoolData::.ctor(UnityEngine.GameObject,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolData__ctor_m2B71B627EE442771E6DA154F34A45D83935C26F7 (PoolData_t80E4C4FD24F727D017C06769387611B94D561514* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab0, float ___expirationDuration1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListStack_1__ctor_mCB196DE8D59C337293C52ACCA90613724BFD447E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly GameObject Prefab = null;
		__this->___Prefab_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Prefab_0), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// public ListStack<GameObject> Objects = new ListStack<GameObject>();
		ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F* L_0 = (ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F*)il2cpp_codegen_object_new(ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ListStack_1__ctor_mCB196DE8D59C337293C52ACCA90613724BFD447E(L_0, ListStack_1__ctor_mCB196DE8D59C337293C52ACCA90613724BFD447E_RuntimeMethod_var);
		__this->___Objects_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Objects_1), (void*)L_0);
		// private float _expirationDuration = -1f;
		__this->____expirationDuration_2 = (-1.0f);
		// public PoolData(GameObject prefab, float expirationDuration)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Prefab = prefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___prefab0;
		__this->___Prefab_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Prefab_0), (void*)L_1);
		// _expirationDuration = expirationDuration;
		float L_2 = ___expirationDuration1;
		__this->____expirationDuration_2 = L_2;
		// }
		return;
	}
}
// System.Boolean GameKit.Dependencies.Utilities.ObjectPooling.PoolData::PoolExpired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoolData_PoolExpired_mB7877E34B926FC4589F608405C8EF9DC472FE2AE (PoolData_t80E4C4FD24F727D017C06769387611B94D561514* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListStack_1_AccessedRecently_mDB63793BF580F4D7A3FF131DDF0E9D8257B2BEED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (_expirationDuration == -1f)
		float L_0 = __this->____expirationDuration_2;
		V_0 = (bool)((((float)L_0) == ((float)(-1.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_002d;
	}

IL_0016:
	{
		// return !Objects.AccessedRecently(_expirationDuration);
		ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F* L_2 = __this->___Objects_1;
		float L_3 = __this->____expirationDuration_2;
		NullCheck(L_2);
		bool L_4;
		L_4 = ListStack_1_AccessedRecently_mDB63793BF580F4D7A3FF131DDF0E9D8257B2BEED(L_2, L_3, ListStack_1_AccessedRecently_mDB63793BF580F4D7A3FF131DDF0E9D8257B2BEED_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_002d;
	}

IL_002d:
	{
		// }
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Collections.Generic.List`1<UnityEngine.GameObject> GameKit.Dependencies.Utilities.ObjectPooling.PoolData::Cull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* PoolData_Cull_m5A4C006706852526AA7C0990071C40F4B50BEAC3 (PoolData_t80E4C4FD24F727D017C06769387611B94D561514* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListStack_1_Cull_m93CA704A6B3DECFA5D9E063FE21F9143032C15F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* V_1 = NULL;
	{
		// if (_expirationDuration == -1f)
		float L_0 = __this->____expirationDuration_2;
		V_0 = (bool)((((float)L_0) == ((float)(-1.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// return new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_2, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		V_1 = L_2;
		goto IL_002e;
	}

IL_001a:
	{
		// return Objects.Cull(_expirationDuration);
		ListStack_1_tC5D8485481A9BF8FB8A5E18E07F3A6AB6358B23F* L_3 = __this->___Objects_1;
		float L_4 = __this->____expirationDuration_2;
		NullCheck(L_3);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5;
		L_5 = ListStack_1_Cull_m93CA704A6B3DECFA5D9E063FE21F9143032C15F7(L_3, L_4, ListStack_1_Cull_m93CA704A6B3DECFA5D9E063FE21F9143032C15F7_RuntimeMethod_var);
		V_1 = L_5;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = V_1;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.Examples.Projectile::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Awake_m4239C9CAE062EDA8F7272170D3781DE775931F54 (Projectile_t1AF0B52CB892B339A2055635668AFA848C0348A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m820D038F52BDC71ECDEAE04ED05D98CCF63E9243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisProjectileSpawner_t0149853AA262DB8F2CD0D139A39133C4809F6742_m286210AD5F16C3AF5C49154964D2B195AC9FB493_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int i = 0; i < 30; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_0005:
	{
		// _spawner = GameObject.FindObjectOfType<ProjectileSpawner>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ProjectileSpawner_t0149853AA262DB8F2CD0D139A39133C4809F6742* L_0;
		L_0 = Object_FindObjectOfType_TisProjectileSpawner_t0149853AA262DB8F2CD0D139A39133C4809F6742_m286210AD5F16C3AF5C49154964D2B195AC9FB493(Object_FindObjectOfType_TisProjectileSpawner_t0149853AA262DB8F2CD0D139A39133C4809F6742_m286210AD5F16C3AF5C49154964D2B195AC9FB493_RuntimeMethod_var);
		__this->____spawner_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____spawner_6), (void*)L_0);
		// _renderers = GetComponentsInChildren<MeshRenderer>();
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_1;
		L_1 = Component_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m820D038F52BDC71ECDEAE04ED05D98CCF63E9243(__this, Component_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m820D038F52BDC71ECDEAE04ED05D98CCF63E9243_RuntimeMethod_var);
		__this->____renderers_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____renderers_7), (void*)L_1);
		// for (int i = 0; i < 30; i++)
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0022:
	{
		// for (int i = 0; i < 30; i++)
		int32_t L_3 = V_0;
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)((int32_t)30)))? 1 : 0);
		bool L_4 = V_1;
		if (L_4)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.Examples.Projectile::OnBecameInvisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_OnBecameInvisible_m61E71E355BB9E3852A5B7CB1D4858AB565584BA7 (Projectile_t1AF0B52CB892B339A2055635668AFA848C0348A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (_exitingPlayMode)
		bool L_0 = __this->____exitingPlayMode_9;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return;
		goto IL_0051;
	}

IL_000d:
	{
		// if (DestroyDelay <= 0f)
		float L_2 = __this->___DestroyDelay_4;
		V_1 = (bool)((((int32_t)((!(((float)L_2) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		// if (_spawner.UsePool)
		ProjectileSpawner_t0149853AA262DB8F2CD0D139A39133C4809F6742* L_4 = __this->____spawner_6;
		NullCheck(L_4);
		bool L_5 = L_4->___UsePool_5;
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		// ObjectPool.Store(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		ObjectPool_Store_m71E6781EC58E9E6707E9E4720DC1C722A4058023(L_7, (bool)1, NULL);
		goto IL_0050;
	}

IL_0042:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
	}

IL_0050:
	{
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.Examples.Projectile::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_OnEnable_m3AE61AD88BEFDBE631786B97D53ED55F5381201A (Projectile_t1AF0B52CB892B339A2055635668AFA848C0348A9* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// _moveDirection = new Vector3(Random.Range(-1f, 1f), 1f, 0f).normalized;
		float L_0;
		L_0 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-1.0f), (1.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), L_0, (1.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		__this->____moveDirection_8 = L_2;
		// if (_spawner.UsePool && DestroyDelay > 0f)
		ProjectileSpawner_t0149853AA262DB8F2CD0D139A39133C4809F6742* L_3 = __this->____spawner_6;
		NullCheck(L_3);
		bool L_4 = L_3->___UsePool_5;
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		float L_5 = __this->___DestroyDelay_4;
		G_B3_0 = ((((float)L_5) > ((float)(0.0f)))? 1 : 0);
		goto IL_004a;
	}

IL_0049:
	{
		G_B3_0 = 0;
	}

IL_004a:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0061;
		}
	}
	{
		// ObjectPool.Store(gameObject, DestroyDelay);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		float L_8 = __this->___DestroyDelay_4;
		ObjectPool_Store_m3E5F07E1D9086E38BF00DB32E34DB2DAD0857249(L_7, L_8, (bool)1, NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.Examples.Projectile::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Update_m8124701C2DC24584025348ECE9355E6F661D6374 (Projectile_t1AF0B52CB892B339A2055635668AFA848C0348A9* __this, const RuntimeMethod* method) 
{
	{
		// transform.position += _moveDirection * MoveRate * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->____moveDirection_8;
		float L_4 = __this->___MoveRate_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_7, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_8, NULL);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.Examples.Projectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile__ctor_m24327D65AEFC6829792CC1BAF72B31807867B585 (Projectile_t1AF0B52CB892B339A2055635668AFA848C0348A9* __this, const RuntimeMethod* method) 
{
	{
		// public float DestroyDelay = 0f;
		__this->___DestroyDelay_4 = (0.0f);
		// public float MoveRate = 30f;
		__this->___MoveRate_5 = (30.0f);
		// private bool _exitingPlayMode = false;
		__this->____exitingPlayMode_9 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.Examples.ProjectileSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileSpawner_Update_m6C394450B191B73289BEDA57A23097271C0005BE (ProjectileSpawner_t0149853AA262DB8F2CD0D139A39133C4809F6742* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (Time.unscaledTime < _nextInstantiate)
		float L_0;
		L_0 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		float L_1 = __this->____nextInstantiate_7;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		goto IL_006e;
	}

IL_0014:
	{
		// _nextInstantiate = Time.unscaledTime + _instantiateDelay;
		float L_3;
		L_3 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		float L_4 = __this->____instantiateDelay_6;
		__this->____nextInstantiate_7 = ((float)il2cpp_codegen_add(L_3, L_4));
		// if (UsePool)
		bool L_5 = __this->___UsePool_5;
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		// ObjectPool.Retrieve(Prefab, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___Prefab_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = ObjectPool_Retrieve_m74A7B334A965D936DD9AD491B8004E4A3BA28604(L_7, L_9, L_10, NULL);
		goto IL_006e;
	}

IL_0050:
	{
		// Instantiate(Prefab, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___Prefab_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_12, L_14, L_15, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.ObjectPooling.Examples.ProjectileSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileSpawner__ctor_m55248B674D995E5F8F082A7FFA07D69CF43B3799 (ProjectileSpawner_t0149853AA262DB8F2CD0D139A39133C4809F6742* __this, const RuntimeMethod* method) 
{
	{
		// public bool UsePool = true;
		__this->___UsePool_5 = (bool)1;
		// public float _instantiateDelay = 0.075f;
		__this->____instantiateDelay_6 = (0.075000003f);
		// private float _nextInstantiate = 0f;
		__this->____nextInstantiate_7 = (0.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IReadOnlyList`1<System.Object> GameKit.Dependencies.Utilities.Types.CanvasTracker::get_InputBlockingCanvases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CanvasTracker_get_InputBlockingCanvases_m1BA422F088E94F8419C675C4A10132F4C638D5F0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IReadOnlyList<object> InputBlockingCanvases => _inputBlockingCanvases;
		il2cpp_codegen_runtime_class_init_inline(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ((CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_StaticFields*)il2cpp_codegen_static_fields_for(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var))->____inputBlockingCanvases_0;
		return L_0;
	}
}
// System.Collections.Generic.IReadOnlyList`1<System.Object> GameKit.Dependencies.Utilities.Types.CanvasTracker::get_OpenCanvases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CanvasTracker_get_OpenCanvases_mA54087DED723588E1A3EE45507B61ADDAB548240 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IReadOnlyList<object> OpenCanvases => _openCanvases;
		il2cpp_codegen_runtime_class_init_inline(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ((CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_StaticFields*)il2cpp_codegen_static_fields_for(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var))->____openCanvases_1;
		return L_0;
	}
}
// System.Boolean GameKit.Dependencies.Utilities.Types.CanvasTracker::get_IsInputBlockingCanvasOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CanvasTracker_get_IsInputBlockingCanvasOpen_m40CB89E9EC1FC7B767EC9B03B575415D9022A6D2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsInputBlockingCanvasOpen => (_inputBlockingCanvases.Count > 0);
		il2cpp_codegen_runtime_class_init_inline(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ((CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_StaticFields*)il2cpp_codegen_static_fields_for(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var))->____inputBlockingCanvases_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_0, List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GameKit.Dependencies.Utilities.Types.CanvasTracker::IsLastOpenCanvas(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CanvasTracker_IsLastOpenCanvas_mD03EFB56033B546E66D9410150D17ED1C8854D4B (RuntimeObject* ___canvas0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsLastOpenCanvas(object canvas) => IsEmptyCollectionOrLastEntry(canvas, _openCanvases);
		RuntimeObject* L_0 = ___canvas0;
		il2cpp_codegen_runtime_class_init_inline(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_1 = ((CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_StaticFields*)il2cpp_codegen_static_fields_for(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var))->____openCanvases_1;
		bool L_2;
		L_2 = CanvasTracker_IsEmptyCollectionOrLastEntry_mDACFC9963D15D593FCDDDEC15DA0328533EDC936(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean GameKit.Dependencies.Utilities.Types.CanvasTracker::IsLastInputBlockingCanvas(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CanvasTracker_IsLastInputBlockingCanvas_m303E62AAA0A2ED58BD857D0D6B85C837FA381D95 (RuntimeObject* ___canvas0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsLastInputBlockingCanvas(object canvas) => IsEmptyCollectionOrLastEntry(canvas, _inputBlockingCanvases);
		RuntimeObject* L_0 = ___canvas0;
		il2cpp_codegen_runtime_class_init_inline(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_1 = ((CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_StaticFields*)il2cpp_codegen_static_fields_for(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var))->____inputBlockingCanvases_0;
		bool L_2;
		L_2 = CanvasTracker_IsEmptyCollectionOrLastEntry_mDACFC9963D15D593FCDDDEC15DA0328533EDC936(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean GameKit.Dependencies.Utilities.Types.CanvasTracker::IsEmptyCollectionOrLastEntry(System.Object,System.Collections.Generic.List`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CanvasTracker_IsEmptyCollectionOrLastEntry_mDACFC9963D15D593FCDDDEC15DA0328533EDC936 (RuntimeObject* ___canvas0, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___collection1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		// int count = collection.Count;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___collection1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_0, List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		V_0 = L_1;
		// if (count == 0)
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0023;
	}

IL_0014:
	{
		// return (collection[count - 1] == canvas);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4 = ___collection1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_4, ((int32_t)il2cpp_codegen_subtract(L_5, 1)), List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		RuntimeObject* L_7 = ___canvas0;
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_6) == ((RuntimeObject*)(RuntimeObject*)L_7))? 1 : 0);
		goto IL_0023;
	}

IL_0023:
	{
		// }
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasTracker::ClearCollections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasTracker_ClearCollections_mEDBE17D5F81EFDDA7A665B956D6097064DEDC12C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _openCanvases.Clear();
		il2cpp_codegen_runtime_class_init_inline(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ((CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_StaticFields*)il2cpp_codegen_static_fields_for(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var))->____openCanvases_1;
		NullCheck(L_0);
		List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_inline(L_0, List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_RuntimeMethod_var);
		// _inputBlockingCanvases.Clear();
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_1 = ((CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_StaticFields*)il2cpp_codegen_static_fields_for(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var))->____inputBlockingCanvases_0;
		NullCheck(L_1);
		List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_inline(L_1, List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasTracker::RemoveNullReferences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasTracker_RemoveNullReferences_m94389A7907D84B1D29A820298A9BF5A2B2B62ADE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RemoveNullEntries(_openCanvases);
		il2cpp_codegen_runtime_class_init_inline(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ((CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_StaticFields*)il2cpp_codegen_static_fields_for(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var))->____openCanvases_1;
		CanvasTracker_U3CRemoveNullReferencesU3Eg__RemoveNullEntriesU7C12_0_mDA60B80DC1BF6205B32AEB8EF1F3BD54F69FEB5A(L_0, NULL);
		// RemoveNullEntries(_inputBlockingCanvases);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_1 = ((CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_StaticFields*)il2cpp_codegen_static_fields_for(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var))->____inputBlockingCanvases_0;
		CanvasTracker_U3CRemoveNullReferencesU3Eg__RemoveNullEntriesU7C12_0_mDA60B80DC1BF6205B32AEB8EF1F3BD54F69FEB5A(L_1, NULL);
		// }
		return;
	}
}
// System.Boolean GameKit.Dependencies.Utilities.Types.CanvasTracker::IsOpenCanvas(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CanvasTracker_IsOpenCanvas_m013486A43B3508EA895FAB81F134818C6929D27D (RuntimeObject* ___canvas0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return _openCanvases.Contains(canvas);
		il2cpp_codegen_runtime_class_init_inline(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ((CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_StaticFields*)il2cpp_codegen_static_fields_for(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var))->____openCanvases_1;
		RuntimeObject* L_1 = ___canvas0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D(L_0, L_1, List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean GameKit.Dependencies.Utilities.Types.CanvasTracker::IsInputBlockingCanvas(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CanvasTracker_IsInputBlockingCanvas_mA9F8A484B20AFD412A56A9441B77EC83B6A4BDC1 (RuntimeObject* ___canvas0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return _inputBlockingCanvases.Contains(canvas);
		il2cpp_codegen_runtime_class_init_inline(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ((CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_StaticFields*)il2cpp_codegen_static_fields_for(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var))->____inputBlockingCanvases_0;
		RuntimeObject* L_1 = ___canvas0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D(L_0, L_1, List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean GameKit.Dependencies.Utilities.Types.CanvasTracker::AddOpenCanvas(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CanvasTracker_AddOpenCanvas_m31473DED7FAA5ACF50AE904679674C92E4A27B1D (RuntimeObject* ___canvas0, bool ___addToBlocking1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_AddUnique_TisRuntimeObject_mC7A8A9DAAE6CC900FBECED30182E25BF66346AE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t586CFF62C78640B28034251F78E8B7B1C6EAAD92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// bool added = _openCanvases.AddUnique(canvas);
		il2cpp_codegen_runtime_class_init_inline(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ((CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_StaticFields*)il2cpp_codegen_static_fields_for(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var))->____openCanvases_1;
		RuntimeObject* L_1 = ___canvas0;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t586CFF62C78640B28034251F78E8B7B1C6EAAD92_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Arrays_AddUnique_TisRuntimeObject_mC7A8A9DAAE6CC900FBECED30182E25BF66346AE9(L_0, L_1, Arrays_AddUnique_TisRuntimeObject_mC7A8A9DAAE6CC900FBECED30182E25BF66346AE9_RuntimeMethod_var);
		V_0 = L_2;
		// if (added && addToBlocking)
		bool L_3 = V_0;
		bool L_4 = ___addToBlocking1;
		V_1 = (bool)((int32_t)((int32_t)L_3&(int32_t)L_4));
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// _inputBlockingCanvases.Add(canvas);
		il2cpp_codegen_runtime_class_init_inline(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_6 = ((CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_StaticFields*)il2cpp_codegen_static_fields_for(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var))->____inputBlockingCanvases_0;
		RuntimeObject* L_7 = ___canvas0;
		NullCheck(L_6);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_6, L_7, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
	}

IL_0020:
	{
		// return added;
		bool L_8 = V_0;
		V_2 = L_8;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		bool L_9 = V_2;
		return L_9;
	}
}
// System.Boolean GameKit.Dependencies.Utilities.Types.CanvasTracker::RemoveOpenCanvas(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CanvasTracker_RemoveOpenCanvas_m368F15A02DE4AB53E92597343652EC02CBB19C71 (RuntimeObject* ___canvas0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// _inputBlockingCanvases.Remove(canvas);
		il2cpp_codegen_runtime_class_init_inline(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ((CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_StaticFields*)il2cpp_codegen_static_fields_for(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var))->____inputBlockingCanvases_0;
		RuntimeObject* L_1 = ___canvas0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7(L_0, L_1, List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_RuntimeMethod_var);
		// return _openCanvases.Remove(canvas);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = ((CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_StaticFields*)il2cpp_codegen_static_fields_for(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var))->____openCanvases_1;
		RuntimeObject* L_4 = ___canvas0;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7(L_3, L_4, List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_RuntimeMethod_var);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasTracker::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasTracker__cctor_mB22F2DB7EE366ABA0E809F3ED6E5AD3A2A1D1816 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static List<object> _inputBlockingCanvases = new List<object>();
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_0, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		((CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_StaticFields*)il2cpp_codegen_static_fields_for(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var))->____inputBlockingCanvases_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_StaticFields*)il2cpp_codegen_static_fields_for(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var))->____inputBlockingCanvases_0), (void*)L_0);
		// private static List<object> _openCanvases = new List<object>();
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_1 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_1, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		((CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_StaticFields*)il2cpp_codegen_static_fields_for(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var))->____openCanvases_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_StaticFields*)il2cpp_codegen_static_fields_for(CanvasTracker_t34F2470FEDB0A8CC2420976EBC3EF123A5D6875A_il2cpp_TypeInfo_var))->____openCanvases_1), (void*)L_1);
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasTracker::<RemoveNullReferences>g__RemoveNullEntries|12_0(System.Collections.Generic.List`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasTracker_U3CRemoveNullReferencesU3Eg__RemoveNullEntriesU7C12_0_mDA60B80DC1BF6205B32AEB8EF1F3BD54F69FEB5A (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___collection0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		// for (int i = 0; i < collection.Count; i++)
		V_0 = 0;
		goto IL_0027;
	}

IL_0005:
	{
		// if (collection[i] == null)
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___collection0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_0, L_1, List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// collection.RemoveAt(i);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4 = ___collection0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54(L_4, L_5, List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_RuntimeMethod_var);
		// i--;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}

IL_0022:
	{
		// for (int i = 0; i < collection.Count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0027:
	{
		// for (int i = 0; i < collection.Count; i++)
		int32_t L_8 = V_0;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = ___collection0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_9, List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_8) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.Types.RectTransformResizer::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransformResizer_OnDestroy_mBFCE37146D01815FA04480DA6F48A9079C772BDC (RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB4FAD14AEE4B5BBCD54B018F6E476B5520E614D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m05A8722B7EEB4A9C0808D59E2D7BC7CAB3541251_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAAE5A1AF305D3C07675A3CB48978DFA3DBBDE105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7665DD52EEA724599E7B40EDA7833B2A95AAF5DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResettableObjectCaches_1_Store_mC686120FAA0A00C911F82C7C4E6480C05400F071_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t0BD96D30E72411E84B0DCD31D4274694CA2BC402 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF* V_1 = NULL;
	{
		// foreach (ResizeData item in _resizeDatas)
		List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A* L_0 = __this->____resizeDatas_4;
		NullCheck(L_0);
		Enumerator_t0BD96D30E72411E84B0DCD31D4274694CA2BC402 L_1;
		L_1 = List_1_GetEnumerator_m7665DD52EEA724599E7B40EDA7833B2A95AAF5DC(L_0, List_1_GetEnumerator_m7665DD52EEA724599E7B40EDA7833B2A95AAF5DC_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mB4FAD14AEE4B5BBCD54B018F6E476B5520E614D2((&V_0), Enumerator_Dispose_mB4FAD14AEE4B5BBCD54B018F6E476B5520E614D2_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001f_1;
			}

IL_0010_1:
			{
				// foreach (ResizeData item in _resizeDatas)
				ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF* L_2;
				L_2 = Enumerator_get_Current_mAAE5A1AF305D3C07675A3CB48978DFA3DBBDE105_inline((&V_0), Enumerator_get_Current_mAAE5A1AF305D3C07675A3CB48978DFA3DBBDE105_RuntimeMethod_var);
				V_1 = L_2;
				// ResettableObjectCaches<ResizeData>.Store(item);
				ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF* L_3 = V_1;
				ResettableObjectCaches_1_Store_mC686120FAA0A00C911F82C7C4E6480C05400F071(L_3, ResettableObjectCaches_1_Store_mC686120FAA0A00C911F82C7C4E6480C05400F071_RuntimeMethod_var);
			}

IL_001f_1:
			{
				// foreach (ResizeData item in _resizeDatas)
				bool L_4;
				L_4 = Enumerator_MoveNext_m05A8722B7EEB4A9C0808D59E2D7BC7CAB3541251((&V_0), Enumerator_MoveNext_m05A8722B7EEB4A9C0808D59E2D7BC7CAB3541251_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0039;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.RectTransformResizer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransformResizer_Update_m29EE3C1EFEB047E0C60B8BE1BAB6565CA62591A2 (RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E* __this, const RuntimeMethod* method) 
{
	{
		// Resize();
		RectTransformResizer_Resize_m8E1D6BC0DE85406BA19A433E01C8265348C9C704(__this, NULL);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.RectTransformResizer::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransformResizer_Resize_m8E1D6BC0DE85406BA19A433E01C8265348C9C704 (RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m3E21F21AF1EC55BEEFDDB85D7C1FB068A6C6FD5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB2916C38F51CA0A8D84F9912D6DD9E6A92CA3050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m679A39A544A69D1F9F69D06CFA77FED4F15706D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResettableObjectCaches_1_Store_mC686120FAA0A00C911F82C7C4E6480C05400F071_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800* G_B3_0 = NULL;
	ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800* G_B2_0 = NULL;
	{
		// for (int i = 0; i < _resizeDatas.Count; i++)
		V_0 = 0;
		goto IL_0082;
	}

IL_0005:
	{
		// _resizeDatas[i].Remaining--;
		List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A* L_0 = __this->____resizeDatas_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF* L_2;
		L_2 = List_1_get_Item_m679A39A544A69D1F9F69D06CFA77FED4F15706D8(L_0, L_1, List_1_get_Item_m679A39A544A69D1F9F69D06CFA77FED4F15706D8_RuntimeMethod_var);
		ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF* L_3 = L_2;
		NullCheck(L_3);
		uint8_t L_4 = L_3->___Remaining_0;
		NullCheck(L_3);
		L_3->___Remaining_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 1)));
		// bool complete = (_resizeDatas[i].Remaining == 0);
		List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A* L_5 = __this->____resizeDatas_4;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF* L_7;
		L_7 = List_1_get_Item_m679A39A544A69D1F9F69D06CFA77FED4F15706D8(L_5, L_6, List_1_get_Item_m679A39A544A69D1F9F69D06CFA77FED4F15706D8_RuntimeMethod_var);
		NullCheck(L_7);
		uint8_t L_8 = L_7->___Remaining_0;
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		// _resizeDatas[i].Delegate?.Invoke(complete);
		List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A* L_9 = __this->____resizeDatas_4;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF* L_11;
		L_11 = List_1_get_Item_m679A39A544A69D1F9F69D06CFA77FED4F15706D8(L_9, L_10, List_1_get_Item_m679A39A544A69D1F9F69D06CFA77FED4F15706D8_RuntimeMethod_var);
		NullCheck(L_11);
		ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800* L_12 = L_11->___Delegate_1;
		ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800* L_13 = L_12;
		G_B2_0 = L_13;
		if (L_13)
		{
			G_B3_0 = L_13;
			goto IL_004c;
		}
	}
	{
		goto IL_0053;
	}

IL_004c:
	{
		bool L_14 = V_1;
		NullCheck(G_B3_0);
		ResizeDelegate_Invoke_m73EA3C7483D6F50719066DCF51ECF1705AE5183A_inline(G_B3_0, L_14, NULL);
	}

IL_0053:
	{
		// if (complete)
		bool L_15 = V_1;
		V_2 = L_15;
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_007d;
		}
	}
	{
		// ResettableObjectCaches<ResizeData>.Store(_resizeDatas[i]);
		List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A* L_17 = __this->____resizeDatas_4;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF* L_19;
		L_19 = List_1_get_Item_m679A39A544A69D1F9F69D06CFA77FED4F15706D8(L_17, L_18, List_1_get_Item_m679A39A544A69D1F9F69D06CFA77FED4F15706D8_RuntimeMethod_var);
		ResettableObjectCaches_1_Store_mC686120FAA0A00C911F82C7C4E6480C05400F071(L_19, ResettableObjectCaches_1_Store_mC686120FAA0A00C911F82C7C4E6480C05400F071_RuntimeMethod_var);
		// _resizeDatas.RemoveAt(i);
		List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A* L_20 = __this->____resizeDatas_4;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		List_1_RemoveAt_m3E21F21AF1EC55BEEFDDB85D7C1FB068A6C6FD5D(L_20, L_21, List_1_RemoveAt_m3E21F21AF1EC55BEEFDDB85D7C1FB068A6C6FD5D_RuntimeMethod_var);
		// i--;
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
	}

IL_007d:
	{
		// for (int i = 0; i < _resizeDatas.Count; i++)
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0082:
	{
		// for (int i = 0; i < _resizeDatas.Count; i++)
		int32_t L_24 = V_0;
		List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A* L_25 = __this->____resizeDatas_4;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_mB2916C38F51CA0A8D84F9912D6DD9E6A92CA3050_inline(L_25, List_1_get_Count_mB2916C38F51CA0A8D84F9912D6DD9E6A92CA3050_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_24) < ((int32_t)L_26))? 1 : 0);
		bool L_27 = V_3;
		if (L_27)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.RectTransformResizer::Resize(GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransformResizer_Resize_mFB233DA191FF0930B59FA4B12E39606CEE23186E (ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800* ___del0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E_mFC967C747EBD9243645338F6354950607860E587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// if (_instance == null)
		RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E* L_0 = ((RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E_StaticFields*)il2cpp_codegen_static_fields_for(RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E_il2cpp_TypeInfo_var))->____instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		// GameObject go = new GameObject(typeof(RectTransformResizer).Name);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_6, L_5, NULL);
		V_1 = L_6;
		// _instance = go.AddComponent<RectTransformResizer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_1;
		NullCheck(L_7);
		RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E* L_8;
		L_8 = GameObject_AddComponent_TisRectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E_mFC967C747EBD9243645338F6354950607860E587(L_7, GameObject_AddComponent_TisRectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E_mFC967C747EBD9243645338F6354950607860E587_RuntimeMethod_var);
		((RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E_StaticFields*)il2cpp_codegen_static_fields_for(RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E_il2cpp_TypeInfo_var))->____instance_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E_StaticFields*)il2cpp_codegen_static_fields_for(RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E_il2cpp_TypeInfo_var))->____instance_5), (void*)L_8);
		// DontDestroyOnLoad(go);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_9, NULL);
	}

IL_0039:
	{
		// _instance.Resize_Internal(del);
		RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E* L_10 = ((RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E_StaticFields*)il2cpp_codegen_static_fields_for(RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E_il2cpp_TypeInfo_var))->____instance_5;
		ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800* L_11 = ___del0;
		NullCheck(L_10);
		RectTransformResizer_Resize_Internal_mB9024FABF2BBCDD37F4EA28089DFED8D300C6B16(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.RectTransformResizer::Resize_Internal(GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransformResizer_Resize_Internal_mB9024FABF2BBCDD37F4EA28089DFED8D300C6B16 (RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E* __this, ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800* ___del0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m22C2CA8AE542817D5A101CFB12F54763C17AD395_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResettableObjectCaches_1_Retrieve_m9A4A159CECD5222E873447F13384D70B96D80F60_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF* V_0 = NULL;
	{
		// ResizeData rd = ResettableObjectCaches<ResizeData>.Retrieve();
		ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF* L_0;
		L_0 = ResettableObjectCaches_1_Retrieve_m9A4A159CECD5222E873447F13384D70B96D80F60(ResettableObjectCaches_1_Retrieve_m9A4A159CECD5222E873447F13384D70B96D80F60_RuntimeMethod_var);
		V_0 = L_0;
		// rd.Delegate = del;
		ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF* L_1 = V_0;
		ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800* L_2 = ___del0;
		NullCheck(L_1);
		L_1->___Delegate_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Delegate_1), (void*)L_2);
		// _instance._resizeDatas.Add(rd);
		RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E* L_3 = ((RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E_StaticFields*)il2cpp_codegen_static_fields_for(RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E_il2cpp_TypeInfo_var))->____instance_5;
		NullCheck(L_3);
		List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A* L_4 = L_3->____resizeDatas_4;
		ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF* L_5 = V_0;
		NullCheck(L_4);
		List_1_Add_m22C2CA8AE542817D5A101CFB12F54763C17AD395_inline(L_4, L_5, List_1_Add_m22C2CA8AE542817D5A101CFB12F54763C17AD395_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.RectTransformResizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransformResizer__ctor_m1070F2488FF208C56B4B0A9083E325F53779C461 (RectTransformResizer_tE5329A6482BC404A56C4FF48B24B176F8E45DE7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m22C2613354A2FA86E71281167C1F1659EC2850B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<ResizeData> _resizeDatas = new List<ResizeData>();
		List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A* L_0 = (List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A*)il2cpp_codegen_object_new(List_1_t045279FE3CCE594C9F110960EF89E3F61E190B5A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m22C2613354A2FA86E71281167C1F1659EC2850B6(L_0, List_1__ctor_m22C2613354A2FA86E71281167C1F1659EC2850B6_RuntimeMethod_var);
		__this->____resizeDatas_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____resizeDatas_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResizeData__ctor_mA43C19F758B5C05337A30D4652743D8552A172E3 (ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF* __this, const RuntimeMethod* method) 
{
	{
		// public ResizeData()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Remaining = 2;
		__this->___Remaining_0 = (uint8_t)2;
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeData::InitializeState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResizeData_InitializeState_mF56A2424D285A967342A0839BBEEEAAEB5AEEEBB (ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF* __this, const RuntimeMethod* method) 
{
	{
		// public void InitializeState() { }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeData::ResetState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResizeData_ResetState_mA69BA1C4767372DA6D8E5DE49CF3632E4CE400BB (ResizeData_t2B403760B7BAA5F9CF111CFC3DEFA18BCFB6DDEF* __this, const RuntimeMethod* method) 
{
	{
		// Remaining = 2;
		__this->___Remaining_0 = (uint8_t)2;
		// Delegate = null;
		__this->___Delegate_1 = (ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Delegate_1), (void*)(ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800*)NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ResizeDelegate_Invoke_m73EA3C7483D6F50719066DCF51ECF1705AE5183A_Multicast(ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800* __this, bool ___complete0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800* currentDelegate = reinterpret_cast<ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___complete0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ResizeDelegate_Invoke_m73EA3C7483D6F50719066DCF51ECF1705AE5183A_OpenInst(ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800* __this, bool ___complete0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___complete0, method);
}
void ResizeDelegate_Invoke_m73EA3C7483D6F50719066DCF51ECF1705AE5183A_OpenStatic(ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800* __this, bool ___complete0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___complete0, method);
}
void ResizeDelegate_Invoke_m73EA3C7483D6F50719066DCF51ECF1705AE5183A_OpenStaticInvoker(ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800* __this, bool ___complete0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< bool >::Invoke(__this->___method_ptr_0, method, NULL, ___complete0);
}
void ResizeDelegate_Invoke_m73EA3C7483D6F50719066DCF51ECF1705AE5183A_ClosedStaticInvoker(ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800* __this, bool ___complete0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___complete0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800 (ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800* __this, bool ___complete0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___complete0));

}
// System.Void GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResizeDelegate__ctor_m8563FD28E2EDCC67FCE4716DE6366A5C937680E1 (ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ResizeDelegate_Invoke_m73EA3C7483D6F50719066DCF51ECF1705AE5183A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ResizeDelegate_Invoke_m73EA3C7483D6F50719066DCF51ECF1705AE5183A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ResizeDelegate_Invoke_m73EA3C7483D6F50719066DCF51ECF1705AE5183A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ResizeDelegate_Invoke_m73EA3C7483D6F50719066DCF51ECF1705AE5183A_Multicast;
}
// System.Void GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeDelegate::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResizeDelegate_Invoke_m73EA3C7483D6F50719066DCF51ECF1705AE5183A (ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800* __this, bool ___complete0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___complete0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeDelegate::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResizeDelegate_BeginInvoke_m2CA8E12DBA8F0808F47FC781653704E496BB3D50 (ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800* __this, bool ___complete0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___complete0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GameKit.Dependencies.Utilities.Types.RectTransformResizer/ResizeDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResizeDelegate_EndInvoke_m401BC8DE7997FF333A6D6F0FE4C6894A7707CC74 (ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// GameKit.Dependencies.Utilities.Types.CanvasGroupFader/FadeGoalType GameKit.Dependencies.Utilities.Types.CanvasGroupFader::get_FadeGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CanvasGroupFader_get_FadeGoal_m995F4C89615A3735054CE3A41F972BBB9A07D3C0 (CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* __this, const RuntimeMethod* method) 
{
	{
		// public FadeGoalType FadeGoal { get; private set; } = FadeGoalType.Unset;
		int32_t L_0 = __this->___U3CFadeGoalU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::set_FadeGoal(GameKit.Dependencies.Utilities.Types.CanvasGroupFader/FadeGoalType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroupFader_set_FadeGoal_mC111C5B45030759E2E1E8C30DC9513FA325DF58B (CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public FadeGoalType FadeGoal { get; private set; } = FadeGoalType.Unset;
		int32_t L_0 = ___value0;
		__this->___U3CFadeGoalU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean GameKit.Dependencies.Utilities.Types.CanvasGroupFader::get_IsHiding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CanvasGroupFader_get_IsHiding_mAEA650B9E4200499BA398893BB366CAA9F454B7F (CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsHiding => (FadeGoal == FadeGoalType.Hidden);
		int32_t L_0;
		L_0 = CanvasGroupFader_get_FadeGoal_m995F4C89615A3735054CE3A41F972BBB9A07D3C0_inline(__this, NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean GameKit.Dependencies.Utilities.Types.CanvasGroupFader::get_IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CanvasGroupFader_get_IsVisible_mA9E60E36ADB89A6E4C11433A2F2218C17E4DC78D (CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsVisible => (CanvasGroup.alpha > 0f);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0 = __this->___CanvasGroup_5;
		NullCheck(L_0);
		float L_1;
		L_1 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_0, NULL);
		return (bool)((((float)L_1) > ((float)(0.0f)))? 1 : 0);
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroupFader_OnEnable_m29610460F600439BF5ABE2B3D41D332B8AA603CD (CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* __this, const RuntimeMethod* method) 
{
	CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* G_B2_0 = NULL;
	CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* G_B3_1 = NULL;
	{
		// FadeGoal = (CanvasGroup.alpha > 0f) ? FadeGoalType.Visible : FadeGoalType.Hidden;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0 = __this->___CanvasGroup_5;
		NullCheck(L_0);
		float L_1;
		L_1 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_0, NULL);
		G_B1_0 = __this;
		if ((((float)L_1) > ((float)(0.0f))))
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 2;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		CanvasGroupFader_set_FadeGoal_mC111C5B45030759E2E1E8C30DC9513FA325DF58B_inline(G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroupFader_OnDisable_mFF2540B45286688C84F18AC59174C07E66E237F6 (CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (FadeGoal == FadeGoalType.Visible)
		int32_t L_0;
		L_0 = CanvasGroupFader_get_FadeGoal_m995F4C89615A3735054CE3A41F972BBB9A07D3C0_inline(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// ShowImmediately();
		VirtualActionInvoker0::Invoke(7 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::ShowImmediately() */, __this);
		goto IL_001e;
	}

IL_0017:
	{
		// HideImmediately();
		VirtualActionInvoker0::Invoke(8 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::HideImmediately() */, __this);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroupFader_Update_m3056B1CD0463C7F003AC10CA8672D167EBE989B7 (CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* __this, const RuntimeMethod* method) 
{
	{
		// Fade();
		CanvasGroupFader_Fade_mC6563C9D69042C978FB8E8D6DA3A70320300E943(__this, NULL);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::ShowImmediately()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroupFader_ShowImmediately_mDB1F6878A6E6A1B47085F4C8A87B9EC45CFB39D9 (CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* __this, const RuntimeMethod* method) 
{
	{
		// SetFadeGoal(true);
		CanvasGroupFader_SetFadeGoal_m2B4B940AED8AF2449C64A793029DCE4B8E9CE7CD(__this, (bool)1, NULL);
		// CompleteFade(true);
		VirtualActionInvoker1< bool >::Invoke(13 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::CompleteFade(System.Boolean) */, __this, (bool)1);
		// OnShow();
		VirtualActionInvoker0::Invoke(10 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::OnShow() */, __this);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::HideImmediately()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroupFader_HideImmediately_m57E490BF96EBFEB42393A97D4D3F55E94BE39FFA (CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* __this, const RuntimeMethod* method) 
{
	{
		// SetFadeGoal(false);
		CanvasGroupFader_SetFadeGoal_m2B4B940AED8AF2449C64A793029DCE4B8E9CE7CD(__this, (bool)0, NULL);
		// CompleteFade(false);
		VirtualActionInvoker1< bool >::Invoke(13 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::CompleteFade(System.Boolean) */, __this, (bool)0);
		// OnHide();
		VirtualActionInvoker0::Invoke(12 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::OnHide() */, __this);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroupFader_Show_mF508138AB55CB17A44D8BCA6ABF413EB532B7BFD (CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (FadeInDuration <= 0f)
		float L_0 = __this->___FadeInDuration_7;
		V_0 = (bool)((((int32_t)((!(((float)L_0) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// ShowImmediately();
		VirtualActionInvoker0::Invoke(7 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::ShowImmediately() */, __this);
		goto IL_0031;
	}

IL_0020:
	{
		// SetFadeGoal(true);
		CanvasGroupFader_SetFadeGoal_m2B4B940AED8AF2449C64A793029DCE4B8E9CE7CD(__this, (bool)1, NULL);
		// OnShow();
		VirtualActionInvoker0::Invoke(10 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::OnShow() */, __this);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::OnShow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroupFader_OnShow_m917F5C4AB63CD6D17A0F735EDE8F74A3EDEB076A (CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* __this, const RuntimeMethod* method) 
{
	{
		// protected virtual void OnShow() { }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroupFader_Hide_mA2EB0C2E0258FC011BE1F2CB75353D126282B9E5 (CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (FadeOutDuration <= 0f)
		float L_0 = __this->___FadeOutDuration_8;
		V_0 = (bool)((((int32_t)((!(((float)L_0) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// HideImmediately();
		VirtualActionInvoker0::Invoke(8 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::HideImmediately() */, __this);
		goto IL_0039;
	}

IL_0020:
	{
		// SetCanvasGroupBlockingType(CanvasGroupBlockingType.Block);
		VirtualActionInvoker1< int32_t >::Invoke(14 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::SetCanvasGroupBlockingType(GameKit.Dependencies.Utilities.CanvasGroupBlockingType) */, __this, 2);
		// SetFadeGoal(false);
		CanvasGroupFader_SetFadeGoal_m2B4B940AED8AF2449C64A793029DCE4B8E9CE7CD(__this, (bool)0, NULL);
		// OnHide();
		VirtualActionInvoker0::Invoke(12 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::OnHide() */, __this);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::OnHide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroupFader_OnHide_m372D2230EEE020D57BABADB0B2D21B6CCD9A8EC9 (CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* __this, const RuntimeMethod* method) 
{
	{
		// protected virtual void OnHide() { }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::SetFadeGoal(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroupFader_SetFadeGoal_m2B4B940AED8AF2449C64A793029DCE4B8E9CE7CD (CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* __this, bool ___fadeIn0, const RuntimeMethod* method) 
{
	CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* G_B2_0 = NULL;
	CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* G_B3_1 = NULL;
	{
		// FadeGoal = (fadeIn) ? FadeGoalType.Visible : FadeGoalType.Hidden;
		bool L_0 = ___fadeIn0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_0009;
	}

IL_0008:
	{
		G_B3_0 = 2;
		G_B3_1 = G_B2_0;
	}

IL_0009:
	{
		NullCheck(G_B3_1);
		CanvasGroupFader_set_FadeGoal_mC111C5B45030759E2E1E8C30DC9513FA325DF58B_inline(G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::Fade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroupFader_Fade_mC6563C9D69042C978FB8E8D6DA3A70320300E943 (CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC50593ED975088B34C79B0D471FA49574FEA10A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B8_0 = 0;
	{
		// if (FadeGoal == FadeGoalType.Unset)
		int32_t L_0;
		L_0 = CanvasGroupFader_get_FadeGoal_m995F4C89615A3735054CE3A41F972BBB9A07D3C0_inline(__this, NULL);
		V_4 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		// Debug.LogError($"{gameObject.name} has an unset FadeGoal. This should not be possible.");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteralEC50593ED975088B34C79B0D471FA49574FEA10A, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_4, NULL);
		// return;
		goto IL_00cb;
	}

IL_0031:
	{
		// bool fadingIn = (FadeGoal == FadeGoalType.Visible);
		int32_t L_5;
		L_5 = CanvasGroupFader_get_FadeGoal_m995F4C89615A3735054CE3A41F972BBB9A07D3C0_inline(__this, NULL);
		V_0 = (bool)((((int32_t)L_5) == ((int32_t)2))? 1 : 0);
		// if (fadingIn)
		bool L_6 = V_0;
		V_5 = L_6;
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		// targetAlpha = 1f;
		V_2 = (1.0f);
		// duration = FadeInDuration;
		float L_8 = __this->___FadeInDuration_7;
		V_1 = L_8;
		goto IL_0062;
	}

IL_0053:
	{
		// targetAlpha = 0f;
		V_2 = (0.0f);
		// duration = FadeOutDuration;
		float L_9 = __this->___FadeOutDuration_8;
		V_1 = L_9;
	}

IL_0062:
	{
		// if (_completedOnce && CanvasGroup.alpha == targetAlpha)
		bool L_10 = __this->____completedOnce_9;
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_11 = __this->___CanvasGroup_5;
		NullCheck(L_11);
		float L_12;
		L_12 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_11, NULL);
		float L_13 = V_2;
		G_B8_0 = ((((float)L_12) == ((float)L_13))? 1 : 0);
		goto IL_007b;
	}

IL_007a:
	{
		G_B8_0 = 0;
	}

IL_007b:
	{
		V_6 = (bool)G_B8_0;
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_0083;
		}
	}
	{
		// return;
		goto IL_00cb;
	}

IL_0083:
	{
		// float rate = (1f / duration);
		float L_15 = V_1;
		V_3 = ((float)((1.0f)/L_15));
		// CanvasGroup.alpha = Mathf.MoveTowards(CanvasGroup.alpha, targetAlpha, rate * Time.deltaTime);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_16 = __this->___CanvasGroup_5;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_17 = __this->___CanvasGroup_5;
		NullCheck(L_17);
		float L_18;
		L_18 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_17, NULL);
		float L_19 = V_2;
		float L_20 = V_3;
		float L_21;
		L_21 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_22;
		L_22 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_18, L_19, ((float)il2cpp_codegen_multiply(L_20, L_21)), NULL);
		NullCheck(L_16);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_16, L_22, NULL);
		// if (CanvasGroup.alpha == targetAlpha)
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_23 = __this->___CanvasGroup_5;
		NullCheck(L_23);
		float L_24;
		L_24 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_23, NULL);
		float L_25 = V_2;
		V_7 = (bool)((((float)L_24) == ((float)L_25))? 1 : 0);
		bool L_26 = V_7;
		if (!L_26)
		{
			goto IL_00cb;
		}
	}
	{
		// CompleteFade(fadingIn);
		bool L_27 = V_0;
		VirtualActionInvoker1< bool >::Invoke(13 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::CompleteFade(System.Boolean) */, __this, L_27);
	}

IL_00cb:
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::CompleteFade(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroupFader_CompleteFade_m6EF09A38717D76EB821F1ED5B7FB83D87158E1A6 (CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* __this, bool ___fadingIn0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		// if (fadingIn)
		bool L_0 = ___fadingIn0;
		V_2 = L_0;
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// blockingType = CanvasGroupBlockingType.Block;
		V_0 = 2;
		// alpha = 1f;
		V_1 = (1.0f);
		goto IL_001c;
	}

IL_0012:
	{
		// blockingType = CanvasGroupBlockingType.DoNotBlock;
		V_0 = 1;
		// alpha = 0f;
		V_1 = (0.0f);
	}

IL_001c:
	{
		// SetCanvasGroupBlockingType(blockingType);
		int32_t L_2 = V_0;
		VirtualActionInvoker1< int32_t >::Invoke(14 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::SetCanvasGroupBlockingType(GameKit.Dependencies.Utilities.CanvasGroupBlockingType) */, __this, L_2);
		// CanvasGroup.alpha = alpha;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_3 = __this->___CanvasGroup_5;
		float L_4 = V_1;
		NullCheck(L_3);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_3, L_4, NULL);
		// _completedOnce = true;
		__this->____completedOnce_9 = (bool)1;
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::SetCanvasGroupBlockingType(GameKit.Dependencies.Utilities.CanvasGroupBlockingType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroupFader_SetCanvasGroupBlockingType_mB8AC4FED8C540F0C0584AA2F15D17229A10F2B95 (CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* __this, int32_t ___blockingType0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (UpdateCanvasBlocking)
		bool L_0 = __this->___UpdateCanvasBlocking_6;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// CanvasGroup.SetBlockingType(blockingType);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_2 = __this->___CanvasGroup_5;
		int32_t L_3 = ___blockingType0;
		CanvaseGroups_SetBlockingType_m772F467E25CDA46863D019EAFA71EF1B3A6781E5(L_2, L_3, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasGroupFader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroupFader__ctor_m256A608946D36F255E29ADA20713499ADCDDD365 (CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* __this, const RuntimeMethod* method) 
{
	{
		// public FadeGoalType FadeGoal { get; private set; } = FadeGoalType.Unset;
		__this->___U3CFadeGoalU3Ek__BackingField_4 = 0;
		// protected bool UpdateCanvasBlocking = true;
		__this->___UpdateCanvasBlocking_6 = (bool)1;
		// protected float FadeInDuration = 0.1f;
		__this->___FadeInDuration_7 = (0.100000001f);
		// protected float FadeOutDuration = 0.3f;
		__this->___FadeOutDuration_8 = (0.300000012f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// GameKit.Dependencies.Utilities.Types.DDOL GameKit.Dependencies.Utilities.Types.DDOL::GetDDOL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3* DDOL_GetDDOL_mEB96C390D84B450440C8C19E0BCB0EE1741D9835 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisDDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3_m3F6C330F016464C1194FC6BA1B19F9EECD75EECB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF294BDC94E1D1C79F018112E429E771D61052A2C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3* V_2 = NULL;
	DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3* V_3 = NULL;
	{
		// if (_instance == null)
		DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3* L_0 = ((DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3_StaticFields*)il2cpp_codegen_static_fields_for(DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		// GameObject obj = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_3, NULL);
		V_1 = L_3;
		// obj.name = "FirstGearGames DDOL";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_1;
		NullCheck(L_4);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_4, _stringLiteralF294BDC94E1D1C79F018112E429E771D61052A2C, NULL);
		// DDOL ddol = obj.AddComponent<DDOL>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_1;
		NullCheck(L_5);
		DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3* L_6;
		L_6 = GameObject_AddComponent_TisDDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3_m3F6C330F016464C1194FC6BA1B19F9EECD75EECB(L_5, GameObject_AddComponent_TisDDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3_m3F6C330F016464C1194FC6BA1B19F9EECD75EECB_RuntimeMethod_var);
		V_2 = L_6;
		// DontDestroyOnLoad(ddol);
		DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3* L_7 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_7, NULL);
		// _instance = ddol;
		DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3* L_8 = V_2;
		((DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3_StaticFields*)il2cpp_codegen_static_fields_for(DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3_il2cpp_TypeInfo_var))->____instance_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3_StaticFields*)il2cpp_codegen_static_fields_for(DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3_il2cpp_TypeInfo_var))->____instance_4), (void*)L_8);
		// return ddol;
		DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3* L_9 = V_2;
		V_3 = L_9;
		goto IL_0044;
	}

IL_003b:
	{
		// return _instance;
		DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3* L_10 = ((DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3_StaticFields*)il2cpp_codegen_static_fields_for(DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3_il2cpp_TypeInfo_var))->____instance_4;
		V_3 = L_10;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3* L_11 = V_3;
		return L_11;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.DDOL::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DDOL__ctor_m2A022B0281F28BBB26FD9410B26ADE53EE62C9E8 (DDOL_t9CCE485FD1A3F4E4009E620AEE612ABEEA3AEBE3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.Types.FloatRange::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatRange__ctor_m9EE180C6C3AA894E8E2E49FA22EC5289650F1075 (FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96* __this, float ___minimum0, float ___maximum1, const RuntimeMethod* method) 
{
	{
		// Minimum = minimum;
		float L_0 = ___minimum0;
		__this->___Minimum_0 = L_0;
		// Maximum = maximum;
		float L_1 = ___maximum1;
		__this->___Maximum_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FloatRange__ctor_m9EE180C6C3AA894E8E2E49FA22EC5289650F1075_AdjustorThunk (RuntimeObject* __this, float ___minimum0, float ___maximum1, const RuntimeMethod* method)
{
	FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96*>(__this + _offset);
	FloatRange__ctor_m9EE180C6C3AA894E8E2E49FA22EC5289650F1075(_thisAdjusted, ___minimum0, ___maximum1, method);
}
// System.Single GameKit.Dependencies.Utilities.Types.FloatRange::RandomInclusive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatRange_RandomInclusive_m81CF15B4488923F3A0EE88EE9BE8A27EDF1D4A39 (FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Floats_t54BC254F0C30D7F4D5A75148FE42847BA7143FCA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// return Floats.RandomInclusiveRange(Minimum, Maximum);
		float L_0 = __this->___Minimum_0;
		float L_1 = __this->___Maximum_1;
		il2cpp_codegen_runtime_class_init_inline(Floats_t54BC254F0C30D7F4D5A75148FE42847BA7143FCA_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = Floats_RandomInclusiveRange_m7B475B6ED935825A0594E14DFA589F4F4990AFA0(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		float L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  float FloatRange_RandomInclusive_m81CF15B4488923F3A0EE88EE9BE8A27EDF1D4A39_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96*>(__this + _offset);
	float _returnValue;
	_returnValue = FloatRange_RandomInclusive_m81CF15B4488923F3A0EE88EE9BE8A27EDF1D4A39(_thisAdjusted, method);
	return _returnValue;
}
// System.Single GameKit.Dependencies.Utilities.Types.FloatRange::Lerp(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatRange_Lerp_m243C1E3C6E6BC8412DF2E99B1F571A87B186EBF8 (FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96* __this, float ___percent0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return Mathf.Lerp(Minimum, Maximum, percent);
		float L_0 = __this->___Minimum_0;
		float L_1 = __this->___Maximum_1;
		float L_2 = ___percent0;
		float L_3;
		L_3 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  float FloatRange_Lerp_m243C1E3C6E6BC8412DF2E99B1F571A87B186EBF8_AdjustorThunk (RuntimeObject* __this, float ___percent0, const RuntimeMethod* method)
{
	FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96*>(__this + _offset);
	float _returnValue;
	_returnValue = FloatRange_Lerp_m243C1E3C6E6BC8412DF2E99B1F571A87B186EBF8(_thisAdjusted, ___percent0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.Types.FloatRange2D::.ctor(GameKit.Dependencies.Utilities.Types.FloatRange,GameKit.Dependencies.Utilities.Types.FloatRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatRange2D__ctor_m164B4B23981CB572A7D7D6F7E16E024D13BE9EFB (FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A* __this, FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 ___x0, FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 ___y1, const RuntimeMethod* method) 
{
	{
		// X = x;
		FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 L_0 = ___x0;
		__this->___X_0 = L_0;
		// Y = y;
		FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 L_1 = ___y1;
		__this->___Y_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FloatRange2D__ctor_m164B4B23981CB572A7D7D6F7E16E024D13BE9EFB_AdjustorThunk (RuntimeObject* __this, FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 ___x0, FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 ___y1, const RuntimeMethod* method)
{
	FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A*>(__this + _offset);
	FloatRange2D__ctor_m164B4B23981CB572A7D7D6F7E16E024D13BE9EFB(_thisAdjusted, ___x0, ___y1, method);
}
// System.Void GameKit.Dependencies.Utilities.Types.FloatRange2D::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatRange2D__ctor_mA0B09015F162D5B02000A6E2F3643207F99CBAB7 (FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A* __this, float ___xMin0, float ___xMax1, float ___yMin2, float ___yMax3, const RuntimeMethod* method) 
{
	{
		// X = new FloatRange(xMin, xMax);
		float L_0 = ___xMin0;
		float L_1 = ___xMax1;
		FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 L_2;
		memset((&L_2), 0, sizeof(L_2));
		FloatRange__ctor_m9EE180C6C3AA894E8E2E49FA22EC5289650F1075((&L_2), L_0, L_1, /*hidden argument*/NULL);
		__this->___X_0 = L_2;
		// Y = new FloatRange(yMin, yMax);
		float L_3 = ___yMin2;
		float L_4 = ___yMax3;
		FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 L_5;
		memset((&L_5), 0, sizeof(L_5));
		FloatRange__ctor_m9EE180C6C3AA894E8E2E49FA22EC5289650F1075((&L_5), L_3, L_4, /*hidden argument*/NULL);
		__this->___Y_1 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FloatRange2D__ctor_mA0B09015F162D5B02000A6E2F3643207F99CBAB7_AdjustorThunk (RuntimeObject* __this, float ___xMin0, float ___xMax1, float ___yMin2, float ___yMax3, const RuntimeMethod* method)
{
	FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A*>(__this + _offset);
	FloatRange2D__ctor_mA0B09015F162D5B02000A6E2F3643207F99CBAB7(_thisAdjusted, ___xMin0, ___xMax1, ___yMin2, ___yMax3, method);
}
// UnityEngine.Vector2 GameKit.Dependencies.Utilities.Types.FloatRange2D::Clamp(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 FloatRange2D_Clamp_mDD221A525BEF604F2A8FC1BAC591F90FE39E53E6 (FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___original0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Vector2(
		//     ClampX(original.x),
		//     ClampY(original.y)
		//     );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___original0;
		float L_1 = L_0.___x_0;
		float L_2;
		L_2 = FloatRange2D_ClampX_mC70B3B0628E89A4521C3FBEAA9770CCC6196D72D(__this, L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___original0;
		float L_4 = L_3.___y_1;
		float L_5;
		L_5 = FloatRange2D_ClampY_mF99C691E4B99035179E0E110B395A349F91EE5BE(__this, L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 FloatRange2D_Clamp_mDD221A525BEF604F2A8FC1BAC591F90FE39E53E6_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___original0, const RuntimeMethod* method)
{
	FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = FloatRange2D_Clamp_mDD221A525BEF604F2A8FC1BAC591F90FE39E53E6(_thisAdjusted, ___original0, method);
	return _returnValue;
}
// UnityEngine.Vector3 GameKit.Dependencies.Utilities.Types.FloatRange2D::Clamp(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FloatRange2D_Clamp_m1734114C562D1D17273A8A8B19F919DC139A51A4 (FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___original0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Vector3(
		//     ClampX(original.x),
		//     ClampY(original.y),
		//     original.z
		//     );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___original0;
		float L_1 = L_0.___x_2;
		float L_2;
		L_2 = FloatRange2D_ClampX_mC70B3B0628E89A4521C3FBEAA9770CCC6196D72D(__this, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___original0;
		float L_4 = L_3.___y_3;
		float L_5;
		L_5 = FloatRange2D_ClampY_mF99C691E4B99035179E0E110B395A349F91EE5BE(__this, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___original0;
		float L_7 = L_6.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_2, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FloatRange2D_Clamp_m1734114C562D1D17273A8A8B19F919DC139A51A4_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___original0, const RuntimeMethod* method)
{
	FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = FloatRange2D_Clamp_m1734114C562D1D17273A8A8B19F919DC139A51A4(_thisAdjusted, ___original0, method);
	return _returnValue;
}
// System.Single GameKit.Dependencies.Utilities.Types.FloatRange2D::ClampX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatRange2D_ClampX_mC70B3B0628E89A4521C3FBEAA9770CCC6196D72D (FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A* __this, float ___original0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return Mathf.Clamp(original, X.Minimum, X.Maximum);
		float L_0 = ___original0;
		FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96* L_1 = (&__this->___X_0);
		float L_2 = L_1->___Minimum_0;
		FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96* L_3 = (&__this->___X_0);
		float L_4 = L_3->___Maximum_1;
		float L_5;
		L_5 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_0, L_2, L_4, NULL);
		V_0 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  float FloatRange2D_ClampX_mC70B3B0628E89A4521C3FBEAA9770CCC6196D72D_AdjustorThunk (RuntimeObject* __this, float ___original0, const RuntimeMethod* method)
{
	FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A*>(__this + _offset);
	float _returnValue;
	_returnValue = FloatRange2D_ClampX_mC70B3B0628E89A4521C3FBEAA9770CCC6196D72D(_thisAdjusted, ___original0, method);
	return _returnValue;
}
// System.Single GameKit.Dependencies.Utilities.Types.FloatRange2D::ClampY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatRange2D_ClampY_mF99C691E4B99035179E0E110B395A349F91EE5BE (FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A* __this, float ___original0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return Mathf.Clamp(original, Y.Minimum, Y.Maximum);
		float L_0 = ___original0;
		FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96* L_1 = (&__this->___Y_1);
		float L_2 = L_1->___Minimum_0;
		FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96* L_3 = (&__this->___Y_1);
		float L_4 = L_3->___Maximum_1;
		float L_5;
		L_5 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_0, L_2, L_4, NULL);
		V_0 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  float FloatRange2D_ClampY_mF99C691E4B99035179E0E110B395A349F91EE5BE_AdjustorThunk (RuntimeObject* __this, float ___original0, const RuntimeMethod* method)
{
	FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A*>(__this + _offset);
	float _returnValue;
	_returnValue = FloatRange2D_ClampY_mF99C691E4B99035179E0E110B395A349F91EE5BE(_thisAdjusted, ___original0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.Types.IntRange::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntRange__ctor_mDB536BC377D76FEEA57F87A83CF27B3A93A12F46 (IntRange_tDBF89C29334F29F61F3725518A96191FB4F4D951* __this, int32_t ___minimum0, int32_t ___maximum1, const RuntimeMethod* method) 
{
	{
		// Minimum = minimum;
		int32_t L_0 = ___minimum0;
		__this->___Minimum_0 = L_0;
		// Maximum = maximum;
		int32_t L_1 = ___maximum1;
		__this->___Maximum_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void IntRange__ctor_mDB536BC377D76FEEA57F87A83CF27B3A93A12F46_AdjustorThunk (RuntimeObject* __this, int32_t ___minimum0, int32_t ___maximum1, const RuntimeMethod* method)
{
	IntRange_tDBF89C29334F29F61F3725518A96191FB4F4D951* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntRange_tDBF89C29334F29F61F3725518A96191FB4F4D951*>(__this + _offset);
	IntRange__ctor_mDB536BC377D76FEEA57F87A83CF27B3A93A12F46(_thisAdjusted, ___minimum0, ___maximum1, method);
}
// System.Single GameKit.Dependencies.Utilities.Types.IntRange::RandomExclusive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IntRange_RandomExclusive_m1389CE12AF9410F6B1B3F1EB99C01378608EDE8F (IntRange_tDBF89C29334F29F61F3725518A96191FB4F4D951* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ints_tC6848D8097CAB468EA0114D30F81F9746AFCF275_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// return Ints.RandomExclusiveRange(Minimum, Maximum);
		int32_t L_0 = __this->___Minimum_0;
		int32_t L_1 = __this->___Maximum_1;
		il2cpp_codegen_runtime_class_init_inline(Ints_tC6848D8097CAB468EA0114D30F81F9746AFCF275_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Ints_RandomExclusiveRange_m1139031BB599099D1BE4F28D6B05A7223C40CBDE(L_0, L_1, NULL);
		V_0 = ((float)L_2);
		goto IL_0016;
	}

IL_0016:
	{
		// }
		float L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  float IntRange_RandomExclusive_m1389CE12AF9410F6B1B3F1EB99C01378608EDE8F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	IntRange_tDBF89C29334F29F61F3725518A96191FB4F4D951* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntRange_tDBF89C29334F29F61F3725518A96191FB4F4D951*>(__this + _offset);
	float _returnValue;
	_returnValue = IntRange_RandomExclusive_m1389CE12AF9410F6B1B3F1EB99C01378608EDE8F(_thisAdjusted, method);
	return _returnValue;
}
// System.Single GameKit.Dependencies.Utilities.Types.IntRange::RandomInclusive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IntRange_RandomInclusive_m954A68E5449B23E54277008830C0E494BBC4375A (IntRange_tDBF89C29334F29F61F3725518A96191FB4F4D951* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ints_tC6848D8097CAB468EA0114D30F81F9746AFCF275_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// return Ints.RandomInclusiveRange(Minimum, Maximum);
		int32_t L_0 = __this->___Minimum_0;
		int32_t L_1 = __this->___Maximum_1;
		il2cpp_codegen_runtime_class_init_inline(Ints_tC6848D8097CAB468EA0114D30F81F9746AFCF275_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Ints_RandomInclusiveRange_mCAD43967ADE3D9E3F06CB36A00DA61E1EC7CD165(L_0, L_1, NULL);
		V_0 = ((float)L_2);
		goto IL_0016;
	}

IL_0016:
	{
		// }
		float L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  float IntRange_RandomInclusive_m954A68E5449B23E54277008830C0E494BBC4375A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	IntRange_tDBF89C29334F29F61F3725518A96191FB4F4D951* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntRange_tDBF89C29334F29F61F3725518A96191FB4F4D951*>(__this + _offset);
	float _returnValue;
	_returnValue = IntRange_RandomInclusive_m954A68E5449B23E54277008830C0E494BBC4375A(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 GameKit.Dependencies.Utilities.Types.IntRange::Clamp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntRange_Clamp_m32F60608282E4F5046BAD3B4EA80AC177DA83D75 (IntRange_tDBF89C29334F29F61F3725518A96191FB4F4D951* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// if (value < Minimum)
		int32_t L_0 = ___value0;
		int32_t L_1 = __this->___Minimum_0;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// return Minimum;
		int32_t L_3 = __this->___Minimum_0;
		V_1 = L_3;
		goto IL_0031;
	}

IL_0017:
	{
		// if (value > Maximum)
		int32_t L_4 = ___value0;
		int32_t L_5 = __this->___Maximum_1;
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		// return Maximum;
		int32_t L_7 = __this->___Maximum_1;
		V_1 = L_7;
		goto IL_0031;
	}

IL_002d:
	{
		// return value;
		int32_t L_8 = ___value0;
		V_1 = L_8;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		int32_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C  int32_t IntRange_Clamp_m32F60608282E4F5046BAD3B4EA80AC177DA83D75_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	IntRange_tDBF89C29334F29F61F3725518A96191FB4F4D951* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntRange_tDBF89C29334F29F61F3725518A96191FB4F4D951*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = IntRange_Clamp_m32F60608282E4F5046BAD3B4EA80AC177DA83D75(_thisAdjusted, ___value0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.Types.SceneAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneAttribute__ctor_mDEB83611533E0A04C89A4C944F6CB3106C271ACF (SceneAttribute_t64707DCEB2046DFF315133276946A0114591F862* __this, const RuntimeMethod* method) 
{
	{
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.Types.ScrollbarValueSetter::.ctor(UnityEngine.UI.Scrollbar,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollbarValueSetter__ctor_m20083F6AC5A3133EAC506CBCD0D8D05285410865 (ScrollbarValueSetter_t6755DD99A3F95482A76FD237B8A316F4C39FBC9A* __this, Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___sb0, int32_t ___fixFrames1, const RuntimeMethod* method) 
{
	{
		// private int _updatedFrame = -1;
		__this->____updatedFrame_2 = (-1);
		// public ScrollbarValueSetter(Scrollbar sb, int fixFrames = 2)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _scrollBar = sb;
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_0 = ___sb0;
		__this->____scrollBar_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____scrollBar_0), (void*)L_0);
		// _fixFrames = fixFrames;
		int32_t L_1 = ___fixFrames1;
		__this->____fixFrames_3 = L_1;
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.ScrollbarValueSetter::SetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollbarValueSetter_SetValue_m4D320494638956EEF8A7FC79DF3859FB2BA23720 (ScrollbarValueSetter_t6755DD99A3F95482A76FD237B8A316F4C39FBC9A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// _scrollBar.value = value;
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_0 = __this->____scrollBar_0;
		float L_1 = ___value0;
		NullCheck(L_0);
		Scrollbar_set_value_m8F7815DB02D4A69B33B091FC5F674609F070D804(L_0, L_1, NULL);
		// _value = value;
		float L_2 = ___value0;
		__this->____value_1 = L_2;
		// _updatedFrame = Time.frameCount;
		int32_t L_3;
		L_3 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		__this->____updatedFrame_2 = L_3;
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.ScrollbarValueSetter::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollbarValueSetter_LateUpdate_m79D838728E09D6E195246A0405E5A6E2F03B6E9E (ScrollbarValueSetter_t6755DD99A3F95482A76FD237B8A316F4C39FBC9A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (_updatedFrame == -1)
		int32_t L_0 = __this->____updatedFrame_2;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_0043;
	}

IL_0010:
	{
		// if ((Time.frameCount - _updatedFrame) < _fixFrames)
		int32_t L_2;
		L_2 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		int32_t L_3 = __this->____updatedFrame_2;
		int32_t L_4 = __this->____fixFrames_3;
		V_1 = (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) < ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		// return;
		goto IL_0043;
	}

IL_002a:
	{
		// _updatedFrame = -1;
		__this->____updatedFrame_2 = (-1);
		// _scrollBar.value = _value;
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_6 = __this->____scrollBar_0;
		float L_7 = __this->____value_1;
		NullCheck(L_6);
		Scrollbar_set_value_m8F7815DB02D4A69B33B091FC5F674609F070D804(L_6, L_7, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.Types.TimedOperation::.ctor(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedOperation__ctor_m52105A747D5C3F3D9FECCE94CC34C7710AC66630 (TimedOperation_tEA1D7A9F17A808037B3501BAA9E1C927A61AB266* __this, float ___interval0, bool ___scaledTime1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3B9D7D2783B71FBCFA8E7A4FCD0DC1D832AF15ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<string, float> _operationTimes = new Dictionary<string, float>();
		Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* L_0 = (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9*)il2cpp_codegen_object_new(Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3B9D7D2783B71FBCFA8E7A4FCD0DC1D832AF15ED(L_0, Dictionary_2__ctor_m3B9D7D2783B71FBCFA8E7A4FCD0DC1D832AF15ED_RuntimeMethod_var);
		__this->____operationTimes_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____operationTimes_2), (void*)L_0);
		// private float _lastGlobalTime = 0f;
		__this->____lastGlobalTime_3 = (0.0f);
		// public TimedOperation(float interval, bool scaledTime = false)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _interval = interval;
		float L_1 = ___interval0;
		__this->____interval_0 = L_1;
		// _scaledTime = scaledTime;
		bool L_2 = ___scaledTime1;
		__this->____scaledTime_1 = L_2;
		// }
		return;
	}
}
// System.Boolean GameKit.Dependencies.Utilities.Types.TimedOperation::TryUseOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimedOperation_TryUseOperation_m3278E2A65C3E871BC5184A1C6183E1A4E70CBCE4 (TimedOperation_tEA1D7A9F17A808037B3501BAA9E1C927A61AB266* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	float G_B3_0 = 0.0f;
	{
		// float time = (_scaledTime) ? Time.time : Time.unscaledTime;
		bool L_0 = __this->____scaledTime_1;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		float L_1;
		L_1 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		G_B3_0 = L_1;
		goto IL_0015;
	}

IL_0010:
	{
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		G_B3_0 = L_2;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		// if (time - _lastGlobalTime >= _interval)
		float L_3 = V_0;
		float L_4 = __this->____lastGlobalTime_3;
		float L_5 = __this->____interval_0;
		V_1 = (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_subtract(L_3, L_4))) >= ((float)L_5)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		// _lastGlobalTime = time + _interval;
		float L_7 = V_0;
		float L_8 = __this->____interval_0;
		__this->____lastGlobalTime_3 = ((float)il2cpp_codegen_add(L_7, L_8));
		// return true;
		V_2 = (bool)1;
		goto IL_0045;
	}

IL_0040:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0045;
	}

IL_0045:
	{
		// }
		bool L_9 = V_2;
		return L_9;
	}
}
// System.Boolean GameKit.Dependencies.Utilities.Types.TimedOperation::TryUseOperation(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimedOperation_TryUseOperation_m3A5F68B6D8261A8CC4653EF9C1F9CAF0CFE27AE7 (TimedOperation_tEA1D7A9F17A808037B3501BAA9E1C927A61AB266* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m00D6D868F0770BBF0C19BAC1227F731D4B7DACBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m14CD98262463C5CFD081DE1CF30325E54465CD3A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	float G_B3_0 = 0.0f;
	{
		// float time = (_scaledTime) ? Time.time : Time.unscaledTime;
		bool L_0 = __this->____scaledTime_1;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		float L_1;
		L_1 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		G_B3_0 = L_1;
		goto IL_0015;
	}

IL_0010:
	{
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		G_B3_0 = L_2;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		// if (_operationTimes.TryGetValue(key, out result))
		Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* L_3 = __this->____operationTimes_2;
		String_t* L_4 = ___key0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_m00D6D868F0770BBF0C19BAC1227F731D4B7DACBA(L_3, L_4, (&V_1), Dictionary_2_TryGetValue_m00D6D868F0770BBF0C19BAC1227F731D4B7DACBA_RuntimeMethod_var);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		// if (time - result >= _interval)
		float L_7 = V_0;
		float L_8 = V_1;
		float L_9 = __this->____interval_0;
		V_3 = (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_subtract(L_7, L_8))) >= ((float)L_9)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0056;
		}
	}
	{
		// _operationTimes[key] = time + _interval;
		Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* L_11 = __this->____operationTimes_2;
		String_t* L_12 = ___key0;
		float L_13 = V_0;
		float L_14 = __this->____interval_0;
		NullCheck(L_11);
		Dictionary_2_set_Item_m14CD98262463C5CFD081DE1CF30325E54465CD3A(L_11, L_12, ((float)il2cpp_codegen_add(L_13, L_14)), Dictionary_2_set_Item_m14CD98262463C5CFD081DE1CF30325E54465CD3A_RuntimeMethod_var);
		// return true;
		V_4 = (bool)1;
		goto IL_0077;
	}

IL_0056:
	{
		// return false;
		V_4 = (bool)0;
		goto IL_0077;
	}

IL_005c:
	{
		// _operationTimes[key] = time + _interval;
		Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* L_15 = __this->____operationTimes_2;
		String_t* L_16 = ___key0;
		float L_17 = V_0;
		float L_18 = __this->____interval_0;
		NullCheck(L_15);
		Dictionary_2_set_Item_m14CD98262463C5CFD081DE1CF30325E54465CD3A(L_15, L_16, ((float)il2cpp_codegen_add(L_17, L_18)), Dictionary_2_set_Item_m14CD98262463C5CFD081DE1CF30325E54465CD3A_RuntimeMethod_var);
		// return true;
		V_4 = (bool)1;
		goto IL_0077;
	}

IL_0077:
	{
		// }
		bool L_19 = V_4;
		return L_19;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.Types.Vector2Range::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Range__ctor_mBE19C97F904372B4AADD000FE071577881BF1C5D (Vector2Range_t928456C4CB441EE9A1A037819DA897A13F5B0BA4* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___minimum0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___maximum1, const RuntimeMethod* method) 
{
	{
		// X = new FloatRange(minimum.x, maximum.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___minimum0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___maximum1;
		float L_3 = L_2.___x_0;
		FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 L_4;
		memset((&L_4), 0, sizeof(L_4));
		FloatRange__ctor_m9EE180C6C3AA894E8E2E49FA22EC5289650F1075((&L_4), L_1, L_3, /*hidden argument*/NULL);
		__this->___X_0 = L_4;
		// Y = new FloatRange(minimum.y, maximum.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___minimum0;
		float L_6 = L_5.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___maximum1;
		float L_8 = L_7.___y_1;
		FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 L_9;
		memset((&L_9), 0, sizeof(L_9));
		FloatRange__ctor_m9EE180C6C3AA894E8E2E49FA22EC5289650F1075((&L_9), L_6, L_8, /*hidden argument*/NULL);
		__this->___Y_1 = L_9;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vector2Range__ctor_mBE19C97F904372B4AADD000FE071577881BF1C5D_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___minimum0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___maximum1, const RuntimeMethod* method)
{
	Vector2Range_t928456C4CB441EE9A1A037819DA897A13F5B0BA4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector2Range_t928456C4CB441EE9A1A037819DA897A13F5B0BA4*>(__this + _offset);
	Vector2Range__ctor_mBE19C97F904372B4AADD000FE071577881BF1C5D(_thisAdjusted, ___minimum0, ___maximum1, method);
}
// System.Void GameKit.Dependencies.Utilities.Types.Vector2Range::.ctor(GameKit.Dependencies.Utilities.Types.FloatRange,GameKit.Dependencies.Utilities.Types.FloatRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Range__ctor_mCCC98F47EC71B577774F9FC231785DEB228459A9 (Vector2Range_t928456C4CB441EE9A1A037819DA897A13F5B0BA4* __this, FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 ___minimum0, FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 ___maximum1, const RuntimeMethod* method) 
{
	{
		// X = minimum;
		FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 L_0 = ___minimum0;
		__this->___X_0 = L_0;
		// Y = maximum;
		FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 L_1 = ___maximum1;
		__this->___Y_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vector2Range__ctor_mCCC98F47EC71B577774F9FC231785DEB228459A9_AdjustorThunk (RuntimeObject* __this, FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 ___minimum0, FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 ___maximum1, const RuntimeMethod* method)
{
	Vector2Range_t928456C4CB441EE9A1A037819DA897A13F5B0BA4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector2Range_t928456C4CB441EE9A1A037819DA897A13F5B0BA4*>(__this + _offset);
	Vector2Range__ctor_mCCC98F47EC71B577774F9FC231785DEB228459A9(_thisAdjusted, ___minimum0, ___maximum1, method);
}
// UnityEngine.Vector2 GameKit.Dependencies.Utilities.Types.Vector2Range::RandomInclusive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2Range_RandomInclusive_mE0C641791898C67749E16C7A6151DA8214F3CF97 (Vector2Range_t928456C4CB441EE9A1A037819DA897A13F5B0BA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Floats_t54BC254F0C30D7F4D5A75148FE42847BA7143FCA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Vector2(
		//     Floats.RandomInclusiveRange(X.Minimum, X.Maximum),
		//     Floats.RandomInclusiveRange(Y.Minimum, Y.Maximum)
		//     );
		FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96* L_0 = (&__this->___X_0);
		float L_1 = L_0->___Minimum_0;
		FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96* L_2 = (&__this->___X_0);
		float L_3 = L_2->___Maximum_1;
		il2cpp_codegen_runtime_class_init_inline(Floats_t54BC254F0C30D7F4D5A75148FE42847BA7143FCA_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = Floats_RandomInclusiveRange_m7B475B6ED935825A0594E14DFA589F4F4990AFA0(L_1, L_3, NULL);
		FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96* L_5 = (&__this->___Y_1);
		float L_6 = L_5->___Minimum_0;
		FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96* L_7 = (&__this->___Y_1);
		float L_8 = L_7->___Maximum_1;
		float L_9;
		L_9 = Floats_RandomInclusiveRange_m7B475B6ED935825A0594E14DFA589F4F4990AFA0(L_6, L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), L_4, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2Range_RandomInclusive_mE0C641791898C67749E16C7A6151DA8214F3CF97_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector2Range_t928456C4CB441EE9A1A037819DA897A13F5B0BA4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector2Range_t928456C4CB441EE9A1A037819DA897A13F5B0BA4*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = Vector2Range_RandomInclusive_mE0C641791898C67749E16C7A6151DA8214F3CF97(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.Types.OptionMenuButtons.FloatingOptions::AddButtons(System.Boolean,System.Collections.Generic.IEnumerable`1<GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingOptions_AddButtons_mF7E15B7D5872267299960ED677FF4B2B61B8024A (FloatingOptions_t465B7FA595A7E427B5FF2EE7880A208184398DCA* __this, bool ___clearExisting0, RuntimeObject* ___buttonDatas1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tBCCEDF8608F20737945359D32CEA61BA9A42857A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t7451B58DA2A57E8102047712393856B3EA843EF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m86D816DEC0B16450B896FF97C0FDAD3198408672_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* V_2 = NULL;
	{
		// if (clearExisting)
		bool L_0 = ___clearExisting0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// RemoveButtons();
		VirtualActionInvoker0::Invoke(16 /* System.Void GameKit.Dependencies.Utilities.Types.OptionMenuButtons.FloatingOptions::RemoveButtons() */, __this);
	}

IL_000d:
	{
		// foreach (ButtonData item in buttonDatas)
		RuntimeObject* L_2 = ___buttonDatas1;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData>::GetEnumerator() */, IEnumerable_1_tBCCEDF8608F20737945359D32CEA61BA9A42857A_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_003f;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_003f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002b_1;
			}

IL_0017_1:
			{
				// foreach (ButtonData item in buttonDatas)
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* L_7;
				L_7 = InterfaceFuncInvoker0< ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData>::get_Current() */, IEnumerator_1_t7451B58DA2A57E8102047712393856B3EA843EF3_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				// Buttons.Add(item);
				List_1_t479A7E3D4251D7C7ED14CDAB6C24C659F23D70D1* L_8 = __this->___Buttons_10;
				ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* L_9 = V_2;
				NullCheck(L_8);
				List_1_Add_m86D816DEC0B16450B896FF97C0FDAD3198408672_inline(L_8, L_9, List_1_Add_m86D816DEC0B16450B896FF97C0FDAD3198408672_RuntimeMethod_var);
			}

IL_002b_1:
			{
				// foreach (ButtonData item in buttonDatas)
				RuntimeObject* L_10 = V_1;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0040;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.OptionMenuButtons.FloatingOptions::RemoveButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingOptions_RemoveButtons_m4FB801B1A5D64B7F46DE6BFF5A82C1443F4342F4 (FloatingOptions_t465B7FA595A7E427B5FF2EE7880A208184398DCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA9529ABC2FC47D5FDA7F19B99014BBDF143699AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFE4F71DA033C9E46B7D121D12459797E95E28F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6726F1A1B6003C68E41A87DF5B95E12C9E2D3FAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m31BE6C97595546CE522A25B08FE8A197128A1C23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEC4C1C10CEDABC59A848BF3EDEED1F1EAFD7F49A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResettableObjectCaches_1_Store_mD143930884778AB7AF3D25B7D93F0077E389251E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tACBE48EF11B345D0AFBEE76B21A4EBC4161923EF V_0;
	memset((&V_0), 0, sizeof(V_0));
	ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* V_1 = NULL;
	{
		// foreach (ButtonData item in Buttons)
		List_1_t479A7E3D4251D7C7ED14CDAB6C24C659F23D70D1* L_0 = __this->___Buttons_10;
		NullCheck(L_0);
		Enumerator_tACBE48EF11B345D0AFBEE76B21A4EBC4161923EF L_1;
		L_1 = List_1_GetEnumerator_mEC4C1C10CEDABC59A848BF3EDEED1F1EAFD7F49A(L_0, List_1_GetEnumerator_mEC4C1C10CEDABC59A848BF3EDEED1F1EAFD7F49A_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA9529ABC2FC47D5FDA7F19B99014BBDF143699AC((&V_0), Enumerator_Dispose_mA9529ABC2FC47D5FDA7F19B99014BBDF143699AC_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001f_1;
			}

IL_0010_1:
			{
				// foreach (ButtonData item in Buttons)
				ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* L_2;
				L_2 = Enumerator_get_Current_m6726F1A1B6003C68E41A87DF5B95E12C9E2D3FAD_inline((&V_0), Enumerator_get_Current_m6726F1A1B6003C68E41A87DF5B95E12C9E2D3FAD_RuntimeMethod_var);
				V_1 = L_2;
				// ResettableObjectCaches<ButtonData>.Store(item);
				ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* L_3 = V_1;
				ResettableObjectCaches_1_Store_mD143930884778AB7AF3D25B7D93F0077E389251E(L_3, ResettableObjectCaches_1_Store_mD143930884778AB7AF3D25B7D93F0077E389251E_RuntimeMethod_var);
			}

IL_001f_1:
			{
				// foreach (ButtonData item in Buttons)
				bool L_4;
				L_4 = Enumerator_MoveNext_mFE4F71DA033C9E46B7D121D12459797E95E28F98((&V_0), Enumerator_MoveNext_mFE4F71DA033C9E46B7D121D12459797E95E28F98_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0039;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		// Buttons.Clear();
		List_1_t479A7E3D4251D7C7ED14CDAB6C24C659F23D70D1* L_5 = __this->___Buttons_10;
		NullCheck(L_5);
		List_1_Clear_m31BE6C97595546CE522A25B08FE8A197128A1C23_inline(L_5, List_1_Clear_m31BE6C97595546CE522A25B08FE8A197128A1C23_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.OptionMenuButtons.FloatingOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingOptions__ctor_m21100AEC7F472927DFCC1E920CC2CB988D2422C7 (FloatingOptions_t465B7FA595A7E427B5FF2EE7880A208184398DCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m32596732A6F500B4A40C36BB953BA173BA96F61B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t479A7E3D4251D7C7ED14CDAB6C24C659F23D70D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected List<ButtonData> Buttons = new List<ButtonData>();
		List_1_t479A7E3D4251D7C7ED14CDAB6C24C659F23D70D1* L_0 = (List_1_t479A7E3D4251D7C7ED14CDAB6C24C659F23D70D1*)il2cpp_codegen_object_new(List_1_t479A7E3D4251D7C7ED14CDAB6C24C659F23D70D1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m32596732A6F500B4A40C36BB953BA173BA96F61B(L_0, List_1__ctor_m32596732A6F500B4A40C36BB953BA173BA96F61B_RuntimeMethod_var);
		__this->___Buttons_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Buttons_10), (void*)L_0);
		CanvasGroupFader__ctor_m256A608946D36F255E29ADA20713499ADCDDD365(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ButtonData_get_Text_m68F1D5388ECAF9FC14DD748E7B05ABC00E651A14 (ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* __this, const RuntimeMethod* method) 
{
	{
		// public string Text { get; protected set; } = string.Empty;
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData::set_Text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonData_set_Text_m9BAE0ED3909A19D6ED82519C3965D3528C937824 (ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Text { get; protected set; } = string.Empty;
		String_t* L_0 = ___value0;
		__this->___U3CTextU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ButtonData_get_Key_m4FF6C98061FC55F5897F470A14517FE9A20B27DE (ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* __this, const RuntimeMethod* method) 
{
	{
		// public string Key { get; protected set; } = string.Empty;
		String_t* L_0 = __this->___U3CKeyU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData::set_Key(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonData_set_Key_m2F659F0E7DAA4BE038C38EAE97D110B9D4AE9E1A (ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Key { get; protected set; } = string.Empty;
		String_t* L_0 = ___value0;
		__this->___U3CKeyU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CKeyU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData::Initialize(System.String,GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData/PressedDelegate,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonData_Initialize_m36EF22ADEF431AE452DFB6B3BD773B0ED1961A0E (ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* __this, String_t* ___text0, PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D* ___callback1, String_t* ___key2, const RuntimeMethod* method) 
{
	{
		// Text = text;
		String_t* L_0 = ___text0;
		ButtonData_set_Text_m9BAE0ED3909A19D6ED82519C3965D3528C937824_inline(__this, L_0, NULL);
		// Key = key;
		String_t* L_1 = ___key2;
		ButtonData_set_Key_m2F659F0E7DAA4BE038C38EAE97D110B9D4AE9E1A_inline(__this, L_1, NULL);
		// _delegate = callback;
		PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D* L_2 = ___callback1;
		__this->____delegate_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____delegate_2), (void*)L_2);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData::OnPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonData_OnPressed_m7323602E1579643B372FFE0087F059016E815148 (ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* __this, const RuntimeMethod* method) 
{
	PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D* G_B2_0 = NULL;
	PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D* G_B1_0 = NULL;
	{
		// _delegate?.Invoke(Key);
		PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D* L_0 = __this->____delegate_2;
		PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0019;
	}

IL_000d:
	{
		String_t* L_2;
		L_2 = ButtonData_get_Key_m4FF6C98061FC55F5897F470A14517FE9A20B27DE_inline(__this, NULL);
		NullCheck(G_B2_0);
		PressedDelegate_Invoke_m6414BB491C0BE9DAEF1F3DBDEA910AC4279EA825_inline(G_B2_0, L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData::ResetState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonData_ResetState_m43986AC19CA911CE374A43942929B2FF56DD5F7D (ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Text = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		ButtonData_set_Text_m9BAE0ED3909A19D6ED82519C3965D3528C937824_inline(__this, L_0, NULL);
		// _delegate = null;
		__this->____delegate_2 = (PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____delegate_2), (void*)(PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D*)NULL);
		// Key = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		ButtonData_set_Key_m2F659F0E7DAA4BE038C38EAE97D110B9D4AE9E1A_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData::InitializeState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonData_InitializeState_mD8A2891722019AD5C81748A33DCFA0883264FA47 (ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* __this, const RuntimeMethod* method) 
{
	{
		// public void InitializeState() { }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonData__ctor_mE865C3DE2A67C126354F8C72AFADE12E4365FBDD (ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Text { get; protected set; } = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___U3CTextU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_0), (void*)L_0);
		// public string Key { get; protected set; } = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___U3CKeyU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CKeyU3Ek__BackingField_1), (void*)L_1);
		// private PressedDelegate _delegate = null;
		__this->____delegate_2 = (PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____delegate_2), (void*)(PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PressedDelegate_Invoke_m6414BB491C0BE9DAEF1F3DBDEA910AC4279EA825_Multicast(PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D* __this, String_t* ___key0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D* currentDelegate = reinterpret_cast<PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___key0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PressedDelegate_Invoke_m6414BB491C0BE9DAEF1F3DBDEA910AC4279EA825_OpenInst(PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D* __this, String_t* ___key0, const RuntimeMethod* method)
{
	NullCheck(___key0);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___key0, method);
}
void PressedDelegate_Invoke_m6414BB491C0BE9DAEF1F3DBDEA910AC4279EA825_OpenStatic(PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D* __this, String_t* ___key0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___key0, method);
}
void PressedDelegate_Invoke_m6414BB491C0BE9DAEF1F3DBDEA910AC4279EA825_OpenStaticInvoker(PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D* __this, String_t* ___key0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___key0);
}
void PressedDelegate_Invoke_m6414BB491C0BE9DAEF1F3DBDEA910AC4279EA825_ClosedStaticInvoker(PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D* __this, String_t* ___key0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___key0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D (PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D* __this, String_t* ___key0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___key0' to native representation
	char* ____key0_marshaled = NULL;
	____key0_marshaled = il2cpp_codegen_marshal_string(___key0);

	// Native function invocation
	il2cppPInvokeFunc(____key0_marshaled);

	// Marshaling cleanup of parameter '___key0' native representation
	il2cpp_codegen_marshal_free(____key0_marshaled);
	____key0_marshaled = NULL;

}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData/PressedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressedDelegate__ctor_m0AA5F9F24A76580CB1321649ED382CD061466754 (PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PressedDelegate_Invoke_m6414BB491C0BE9DAEF1F3DBDEA910AC4279EA825_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PressedDelegate_Invoke_m6414BB491C0BE9DAEF1F3DBDEA910AC4279EA825_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PressedDelegate_Invoke_m6414BB491C0BE9DAEF1F3DBDEA910AC4279EA825_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&PressedDelegate_Invoke_m6414BB491C0BE9DAEF1F3DBDEA910AC4279EA825_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PressedDelegate_Invoke_m6414BB491C0BE9DAEF1F3DBDEA910AC4279EA825_Multicast;
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData/PressedDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressedDelegate_Invoke_m6414BB491C0BE9DAEF1F3DBDEA910AC4279EA825 (PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___key0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData/PressedDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PressedDelegate_BeginInvoke_mCB7865A188340BBFC7D8490522C81853ACFEFFB7 (PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D* __this, String_t* ___key0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___key0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData/PressedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressedDelegate_EndInvoke_m417161BA350E3B0AF289C0D3C7AFFA2FCDF29E34 (PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::AttachGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingContainer_AttachGameObject_m55107D35F29A78734AE3864BF4D5E356DB81A6D5 (FloatingContainer_tD4E61098F9070AA28CF23BB647982FEECE88483B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	bool V_1 = false;
	{
		// if (go == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___go0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		goto IL_0046;
	}

IL_000e:
	{
		// Transform goT = go.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___go0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		V_0 = L_4;
		// goT.SetParent(transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_5, L_6, NULL);
		// goT.localPosition = Vector3.zero;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_7);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_7, L_8, NULL);
		// goT.localRotation = Quaternion.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_9);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_9, L_10, NULL);
		// goT.localScale = Vector3.one;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_11);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_11, L_12, NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::Show(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector2,System.Nullable`1<UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingContainer_Show_mE5BDDEFE5F8B868B37CAC975F4DC2F8DDB466F0B (FloatingContainer_tD4E61098F9070AA28CF23BB647982FEECE88483B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot3, Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD ___edgeAvoidanceOverride4, const RuntimeMethod* method) 
{
	{
		// UpdateEdgeAvoidance(edgeAvoidanceOverride, false);
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_0 = ___edgeAvoidanceOverride4;
		VirtualActionInvoker2< Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD, bool >::Invoke(25 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::UpdateEdgeAvoidance(System.Nullable`1<UnityEngine.Vector2>,System.Boolean) */, __this, L_0, (bool)0);
		// UpdatePivot(pivot, false);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___pivot3;
		VirtualActionInvoker2< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, bool >::Invoke(19 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::UpdatePivot(UnityEngine.Vector2,System.Boolean) */, __this, L_1, (bool)0);
		// UpdatePositionRotationAndScale(position, rotation, scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___position0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___rotation1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___scale2;
		VirtualActionInvoker4< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, bool >::Invoke(24 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::UpdatePositionRotationAndScale(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Boolean) */, __this, L_2, L_3, L_4, (bool)1);
		// base.Show();
		CanvasGroupFader_Show_mF508138AB55CB17A44D8BCA6ABF413EB532B7BFD(__this, NULL);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::Show(UnityEngine.Vector3,System.Nullable`1<UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingContainer_Show_m47418AC692553BBAE53F56252209A6F9C03D4191 (FloatingContainer_tD4E61098F9070AA28CF23BB647982FEECE88483B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD ___edgeAvoidanceOverride1, const RuntimeMethod* method) 
{
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Show(position, Quaternion.identity, Vector3.one, RectTransform.pivot);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___RectTransform_10;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_3, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD));
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_5 = V_0;
		VirtualActionInvoker5< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD >::Invoke(15 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::Show(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector2,System.Nullable`1<UnityEngine.Vector2>) */, __this, L_0, L_1, L_2, L_4, L_5);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::Show(UnityEngine.Vector3,UnityEngine.Quaternion,System.Nullable`1<UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingContainer_Show_mDFFD2880282AC2E7C858E09D173CEC31283E0BF4 (FloatingContainer_tD4E61098F9070AA28CF23BB647982FEECE88483B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD ___edgeAvoidanceOverride2, const RuntimeMethod* method) 
{
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Show(position, rotation, Vector3.one, RectTransform.pivot);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rotation1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___RectTransform_10;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_3, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD));
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_5 = V_0;
		VirtualActionInvoker5< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD >::Invoke(15 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::Show(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector2,System.Nullable`1<UnityEngine.Vector2>) */, __this, L_0, L_1, L_2, L_4, L_5);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::Show(UnityEngine.Transform,System.Nullable`1<UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingContainer_Show_m8FF517DD3A0CA5254D98B50919C6AE5FDC0F744A (FloatingContainer_tD4E61098F9070AA28CF23BB647982FEECE88483B* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___startingPoint0, Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD ___edgeAvoidanceOverride1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral104389F9F6E5D2BE248EC7A03AE2D3CD4DE29609);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (startingPoint == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___startingPoint0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// Debug.LogError($"A null Transform cannot be used as the starting point.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral104389F9F6E5D2BE248EC7A03AE2D3CD4DE29609, NULL);
		// return;
		goto IL_0047;
	}

IL_001a:
	{
		// Show(startingPoint.position, startingPoint.rotation, startingPoint.localScale, RectTransform.pivot);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___startingPoint0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___startingPoint0;
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ___startingPoint0;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_7, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___RectTransform_10;
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_9, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD));
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_11 = V_1;
		VirtualActionInvoker5< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD >::Invoke(15 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::Show(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector2,System.Nullable`1<UnityEngine.Vector2>) */, __this, L_4, L_6, L_8, L_10, L_11);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::UpdatePivot(UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingContainer_UpdatePivot_m3314C7B753609C8FCCF9E91BC95E8B9774BDB68B (FloatingContainer_tD4E61098F9070AA28CF23BB647982FEECE88483B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot0, bool ___move1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// RectTransform.pivot = pivot;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___RectTransform_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___pivot0;
		NullCheck(L_0);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_0, L_1, NULL);
		// if (move)
		bool L_2 = ___move1;
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// Move();
		VirtualActionInvoker0::Invoke(26 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::Move() */, __this);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::UpdatePosition(UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingContainer_UpdatePosition_mFBF080C2B24DEBD712BE42FE36934554CBE49960 (FloatingContainer_tD4E61098F9070AA28CF23BB647982FEECE88483B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, bool ___move1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// _positionGoal = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		__this->____positionGoal_13 = L_0;
		// if (move)
		bool L_1 = ___move1;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// Move();
		VirtualActionInvoker0::Invoke(26 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::Move() */, __this);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::UpdateRotation(UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingContainer_UpdateRotation_m76EDED41AAD7D79C272A0295EF154978EDB727C6 (FloatingContainer_tD4E61098F9070AA28CF23BB647982FEECE88483B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, bool ___move1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// _rotationGoal = rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___rotation0;
		__this->____rotationGoal_14 = L_0;
		// if (move)
		bool L_1 = ___move1;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// Move();
		VirtualActionInvoker0::Invoke(26 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::Move() */, __this);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::UpdateScale(UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingContainer_UpdateScale_mE2864588BA3FA3537AE6ECB80AC2B3C6869815A8 (FloatingContainer_tD4E61098F9070AA28CF23BB647982FEECE88483B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale0, bool ___move1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// _scaleGoal = scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___scale0;
		__this->____scaleGoal_15 = L_0;
		// if (move)
		bool L_1 = ___move1;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// Move();
		VirtualActionInvoker0::Invoke(26 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::Move() */, __this);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::UpdatePositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingContainer_UpdatePositionAndRotation_m5B5AEAFDA541127E3423D88976F61B93F5D05ED0 (FloatingContainer_tD4E61098F9070AA28CF23BB647982FEECE88483B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, bool ___move2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// UpdatePosition(position, false);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		VirtualActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, bool >::Invoke(20 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::UpdatePosition(UnityEngine.Vector3,System.Boolean) */, __this, L_0, (bool)0);
		// UpdateRotation(rotation, false);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rotation1;
		VirtualActionInvoker2< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, bool >::Invoke(21 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::UpdateRotation(UnityEngine.Quaternion,System.Boolean) */, __this, L_1, (bool)0);
		// if (move)
		bool L_2 = ___move2;
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// Move();
		VirtualActionInvoker0::Invoke(26 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::Move() */, __this);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::UpdatePositionRotationAndScale(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingContainer_UpdatePositionRotationAndScale_m199E6C1F1FA0FCD7042CF64B0F00FFBB321B7ADF (FloatingContainer_tD4E61098F9070AA28CF23BB647982FEECE88483B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale2, bool ___move3, const RuntimeMethod* method) 
{
	{
		// UpdatePositionAndRotation(position, rotation, false);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rotation1;
		VirtualActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, bool >::Invoke(23 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::UpdatePositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean) */, __this, L_0, L_1, (bool)0);
		// UpdateScale(scale, false);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___scale2;
		VirtualActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, bool >::Invoke(22 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::UpdateScale(UnityEngine.Vector3,System.Boolean) */, __this, L_2, (bool)0);
		// Move();
		VirtualActionInvoker0::Invoke(26 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::Move() */, __this);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::UpdateEdgeAvoidance(System.Nullable`1<UnityEngine.Vector2>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingContainer_UpdateEdgeAvoidance_m4064BDB545E3E7734FEF65680DA7DAA042F6659D (FloatingContainer_tD4E61098F9070AA28CF23BB647982FEECE88483B* __this, Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD ___edgeAvoidanceOverride0, bool ___move1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	FloatingContainer_tD4E61098F9070AA28CF23BB647982FEECE88483B* G_B2_0 = NULL;
	FloatingContainer_tD4E61098F9070AA28CF23BB647982FEECE88483B* G_B1_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	FloatingContainer_tD4E61098F9070AA28CF23BB647982FEECE88483B* G_B3_1 = NULL;
	{
		// _edgeAvoidance = (edgeAvoidanceOverride.HasValue) ? edgeAvoidanceOverride.Value : EdgeAvoidance;
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline((&___edgeAvoidanceOverride0), Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0013;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->___EdgeAvoidance_12;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_001a;
	}

IL_0013:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7((&___edgeAvoidanceOverride0), Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_001a:
	{
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73((&L_3), G_B3_0, /*hidden argument*/Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		NullCheck(G_B3_1);
		G_B3_1->____edgeAvoidance_16 = L_3;
		// if (move)
		bool L_4 = ___move1;
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// Move();
		VirtualActionInvoker0::Invoke(26 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::Move() */, __this);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingContainer_Move_m3620B635D1633C806036FBC9DA3E769B9CD34A54 (FloatingContainer_tD4E61098F9070AA28CF23BB647982FEECE88483B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		// RectTransform.localScale = _scaleGoal;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___RectTransform_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->____scaleGoal_15;
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_1, NULL);
		// Vector2 position = _positionGoal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->____positionGoal_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_2, NULL);
		V_0 = L_3;
		// if (UseEdgeAvoidance)
		bool L_4 = __this->___UseEdgeAvoidance_11;
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0064;
		}
	}
	{
		// Vector2 avoidance = (_edgeAvoidance.HasValue) ? _edgeAvoidance.Value : EdgeAvoidance;
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* L_6 = (&__this->____edgeAvoidance_16);
		bool L_7;
		L_7 = Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline(L_6, Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = __this->___EdgeAvoidance_12;
		G_B4_0 = L_8;
		goto IL_004a;
	}

IL_003f:
	{
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* L_9 = (&__this->____edgeAvoidance_16);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7(L_9, Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		G_B4_0 = L_10;
	}

IL_004a:
	{
		V_2 = G_B4_0;
		// position = RectTransform.GetOnScreenPosition(_positionGoal, avoidance);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___RectTransform_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->____positionGoal_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transforms_GetOnScreenPosition_mAE95388475C35D4F325A82F3459FF6D35F8B2228(L_11, L_12, L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_14, NULL);
		V_0 = L_15;
	}

IL_0064:
	{
		// RectTransform.SetPositionAndRotation(position, _rotationGoal);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = __this->___RectTransform_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_17, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = __this->____rotationGoal_14;
		NullCheck(L_16);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_16, L_18, L_19, NULL);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingContainer__ctor_m7AB7C37BA01EC7A3ADA9EFAC566FBE96E533CAC1 (FloatingContainer_tD4E61098F9070AA28CF23BB647982FEECE88483B* __this, const RuntimeMethod* method) 
{
	{
		// protected bool UseEdgeAvoidance = true;
		__this->___UseEdgeAvoidance_11 = (bool)1;
		// private Vector3 _scaleGoal = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		__this->____scaleGoal_15 = L_0;
		CanvasGroupFader__ctor_m256A608946D36F255E29ADA20713499ADCDDD365(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingImage::SetSprite(UnityEngine.Sprite,System.Nullable`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingImage_SetSprite_mCB45A6720A0345DFF52FF555438F52F7EA0A9648 (FloatingImage_tCB44A89A44F39DAECF4D19D9863A268A110E1442* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite0, Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___sizeOverride1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// Renderer.sprite = sprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___Renderer_17;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___sprite0;
		NullCheck(L_0);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_0, L_1, NULL);
		// Vector3 size = (sizeOverride == null)
		//     ? (sprite.bounds.size * sprite.pixelsPerUnit)
		//     : sizeOverride.Value;
		bool L_2;
		L_2 = Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_inline((&___sizeOverride1), Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792((&___sizeOverride1), Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_RuntimeMethod_var);
		G_B3_0 = L_3;
		goto IL_0039;
	}

IL_0020:
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = ___sprite0;
		NullCheck(L_4);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_5;
		L_5 = Sprite_get_bounds_m042F847F6C5118E6B14A3F79A1E1C53E7DFBF452(L_4, NULL);
		V_1 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_1), NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = ___sprite0;
		NullCheck(L_7);
		float L_8;
		L_8 = Sprite_get_pixelsPerUnit_m5A5984BC298062DF4CD2CB3E8534443FFCF31826(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_8, NULL);
		G_B3_0 = L_9;
	}

IL_0039:
	{
		V_0 = G_B3_0;
		// Renderer.rectTransform.sizeDelta = size;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___Renderer_17;
		NullCheck(L_10);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11;
		L_11 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_12, NULL);
		NullCheck(L_11);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_11, L_13, NULL);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.FloatingImage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingImage__ctor_m127A86BFDBBA0FC19DBB6FBA5D3E88FF9139D5C9 (FloatingImage_tCB44A89A44F39DAECF4D19D9863A268A110E1442* __this, const RuntimeMethod* method) 
{
	{
		FloatingContainer__ctor_m7AB7C37BA01EC7A3ADA9EFAC566FBE96E533CAC1(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Sprite GameKit.Dependencies.Utilities.Types.CanvasContainers.ImageButtonData::get_DisplayImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ImageButtonData_get_DisplayImage_m91A295FB1D37D025284060760B13C5EFA0728F0B (ImageButtonData_tB44D13315533BA4A897470789513A2FAAD2ED6BC* __this, const RuntimeMethod* method) 
{
	{
		// public Sprite DisplayImage { get; protected set; } = null;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___U3CDisplayImageU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.ImageButtonData::set_DisplayImage(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageButtonData_set_DisplayImage_m3CCD38D8DE9B1EF7994751C885966A1D9935A0E8 (ImageButtonData_tB44D13315533BA4A897470789513A2FAAD2ED6BC* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	{
		// public Sprite DisplayImage { get; protected set; } = null;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___value0;
		__this->___U3CDisplayImageU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayImageU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.ImageButtonData::Initialize(UnityEngine.Sprite,System.String,GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData/PressedDelegate,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageButtonData_Initialize_mB1EDA67CE50B792FDA6F957B84FF8391FE47E794 (ImageButtonData_tB44D13315533BA4A897470789513A2FAAD2ED6BC* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite0, String_t* ___text1, PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D* ___callback2, String_t* ___key3, const RuntimeMethod* method) 
{
	{
		// base.Initialize(text, callback, key);
		String_t* L_0 = ___text1;
		PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D* L_1 = ___callback2;
		String_t* L_2 = ___key3;
		ButtonData_Initialize_m36EF22ADEF431AE452DFB6B3BD773B0ED1961A0E(__this, L_0, L_1, L_2, NULL);
		// DisplayImage = sprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = ___sprite0;
		ImageButtonData_set_DisplayImage_m3CCD38D8DE9B1EF7994751C885966A1D9935A0E8_inline(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.ImageButtonData::ResetState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageButtonData_ResetState_mD002B7ED025781AE317A58F6847394F63881AA31 (ImageButtonData_tB44D13315533BA4A897470789513A2FAAD2ED6BC* __this, const RuntimeMethod* method) 
{
	{
		// base.ResetState();
		ButtonData_ResetState_m43986AC19CA911CE374A43942929B2FF56DD5F7D(__this, NULL);
		// DisplayImage = null;
		ImageButtonData_set_DisplayImage_m3CCD38D8DE9B1EF7994751C885966A1D9935A0E8_inline(__this, (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)NULL, NULL);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.ImageButtonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageButtonData__ctor_m867EA701168D40003754C1186B67FF2263B85AFA (ImageButtonData_tB44D13315533BA4A897470789513A2FAAD2ED6BC* __this, const RuntimeMethod* method) 
{
	{
		// public Sprite DisplayImage { get; protected set; } = null;
		__this->___U3CDisplayImageU3Ek__BackingField_3 = (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayImageU3Ek__BackingField_3), (void*)(Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)NULL);
		ButtonData__ctor_mE865C3DE2A67C126354F8C72AFADE12E4365FBDD(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.OptionMenuImageButton::Initialize(GameKit.Dependencies.Utilities.Types.CanvasContainers.ImageButtonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionMenuImageButton_Initialize_m2B2342A2777CBB7C298FA8DD2E57CBA0F241CB21 (OptionMenuImageButton_t28F50366E31801CDC5953CD073C541DF384161A7* __this, ImageButtonData_tB44D13315533BA4A897470789513A2FAAD2ED6BC* ___buttonData0, const RuntimeMethod* method) 
{
	{
		// base.Initialize(buttonData);
		ImageButtonData_tB44D13315533BA4A897470789513A2FAAD2ED6BC* L_0 = ___buttonData0;
		OptionMenuButton_Initialize_mD2E9EE70B6F9A46FE53105CC08391FB2472C7560(__this, L_0, NULL);
		// _image.sprite = buttonData.DisplayImage;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->____image_6;
		ImageButtonData_tB44D13315533BA4A897470789513A2FAAD2ED6BC* L_2 = ___buttonData0;
		NullCheck(L_2);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3;
		L_3 = ImageButtonData_get_DisplayImage_m91A295FB1D37D025284060760B13C5EFA0728F0B_inline(L_2, NULL);
		NullCheck(L_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.OptionMenuImageButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionMenuImageButton__ctor_m2BCB11F1F5DBE2E586579EC777892F41EB780D64 (OptionMenuImageButton_t28F50366E31801CDC5953CD073C541DF384161A7* __this, const RuntimeMethod* method) 
{
	{
		OptionMenuButton__ctor_m42AA68DCB7E1FB191464D946528D2C921E2C8FD8(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData GameKit.Dependencies.Utilities.Types.CanvasContainers.OptionMenuButton::get_ButtonData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* OptionMenuButton_get_ButtonData_m842DB92D039E26A4EA3254C014B483931E4853E0 (OptionMenuButton_t5FBC86B97F4399FEB00518C805878822E8938D22* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonData ButtonData { get; protected set; }
		ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* L_0 = __this->___U3CButtonDataU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.OptionMenuButton::set_ButtonData(GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionMenuButton_set_ButtonData_m736905FAAC3ABDC3B3BD0B5C72D86C0BB615C529 (OptionMenuButton_t5FBC86B97F4399FEB00518C805878822E8938D22* __this, ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* ___value0, const RuntimeMethod* method) 
{
	{
		// public ButtonData ButtonData { get; protected set; }
		ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* L_0 = ___value0;
		__this->___U3CButtonDataU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CButtonDataU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.OptionMenuButton::Initialize(GameKit.Dependencies.Utilities.Types.CanvasContainers.ButtonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionMenuButton_Initialize_mD2E9EE70B6F9A46FE53105CC08391FB2472C7560 (OptionMenuButton_t5FBC86B97F4399FEB00518C805878822E8938D22* __this, ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* ___buttonData0, const RuntimeMethod* method) 
{
	{
		// ButtonData = buttonData;
		ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* L_0 = ___buttonData0;
		OptionMenuButton_set_ButtonData_m736905FAAC3ABDC3B3BD0B5C72D86C0BB615C529_inline(__this, L_0, NULL);
		// _text.text = buttonData.Text;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->____text_5;
		ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* L_2 = ___buttonData0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ButtonData_get_Text_m68F1D5388ECAF9FC14DD748E7B05ABC00E651A14_inline(L_2, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_3);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.OptionMenuButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionMenuButton__ctor_m42AA68DCB7E1FB191464D946528D2C921E2C8FD8 (OptionMenuButton_t5FBC86B97F4399FEB00518C805878822E8938D22* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.ResizableContainer::SetSizeAndShow(UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResizableContainer_SetSizeAndShow_m119C249DD47DB9F0335702B24684227AC7DBF8EF (ResizableContainer_t634A38C6B576E1142CF1F6EAB8964A75134FC626* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size0, bool ___ignoreSizeLimits1, const RuntimeMethod* method) 
{
	{
		// ResizeAndShow(size, ignoreSizeLimits);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___size0;
		bool L_1 = ___ignoreSizeLimits1;
		VirtualActionInvoker2< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, bool >::Invoke(27 /* System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.ResizableContainer::ResizeAndShow(UnityEngine.Vector2,System.Boolean) */, __this, L_0, L_1);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.ResizableContainer::ResizeAndShow(UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResizableContainer_ResizeAndShow_mA7B3CB0C47D0FE83D034F28FF0E56C361936A5F9 (ResizableContainer_t634A38C6B576E1142CF1F6EAB8964A75134FC626* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___desiredSize0, bool ___ignoreSizeLimits1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float widthRequired = desiredSize.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___desiredSize0;
		float L_1 = L_0.___x_0;
		V_0 = L_1;
		// float heightRequired = desiredSize.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___desiredSize0;
		float L_3 = L_2.___y_1;
		V_1 = L_3;
		// widthRequired = Mathf.Clamp(widthRequired, SizeLimits.X.Minimum, SizeLimits.X.Maximum);
		float L_4 = V_0;
		FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A* L_5 = (&__this->___SizeLimits_17);
		FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96* L_6 = (&L_5->___X_0);
		float L_7 = L_6->___Minimum_0;
		FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A* L_8 = (&__this->___SizeLimits_17);
		FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96* L_9 = (&L_8->___X_0);
		float L_10 = L_9->___Maximum_1;
		float L_11;
		L_11 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_4, L_7, L_10, NULL);
		V_0 = L_11;
		// heightRequired = Mathf.Clamp(heightRequired, SizeLimits.Y.Minimum, SizeLimits.Y.Maximum);
		float L_12 = V_1;
		FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A* L_13 = (&__this->___SizeLimits_17);
		FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96* L_14 = (&L_13->___Y_1);
		float L_15 = L_14->___Minimum_0;
		FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A* L_16 = (&__this->___SizeLimits_17);
		FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96* L_17 = (&L_16->___Y_1);
		float L_18 = L_17->___Maximum_1;
		float L_19;
		L_19 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_12, L_15, L_18, NULL);
		V_1 = L_19;
		// base.RectTransform.sizeDelta = new Vector2(widthRequired, heightRequired);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20 = ((FloatingContainer_tD4E61098F9070AA28CF23BB647982FEECE88483B*)__this)->___RectTransform_10;
		float L_21 = V_0;
		float L_22 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_23), L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_20, L_23, NULL);
		// base.Move();
		FloatingContainer_Move_m3620B635D1633C806036FBC9DA3E769B9CD34A54(__this, NULL);
		// base.Show();
		CanvasGroupFader_Show_mF508138AB55CB17A44D8BCA6ABF413EB532B7BFD(__this, NULL);
		// }
		return;
	}
}
// System.Void GameKit.Dependencies.Utilities.Types.CanvasContainers.ResizableContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResizableContainer__ctor_mB830AF0D593DB0E9DE516E9D556CD625EA6BCCC1 (ResizableContainer_t634A38C6B576E1142CF1F6EAB8964A75134FC626* __this, const RuntimeMethod* method) 
{
	FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public FloatRange2D SizeLimits = new FloatRange2D()
		// {
		//     X = new FloatRange(0f, 999999f),
		//     Y = new FloatRange(0f, 999999f)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A));
		FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 L_0;
		memset((&L_0), 0, sizeof(L_0));
		FloatRange__ctor_m9EE180C6C3AA894E8E2E49FA22EC5289650F1075((&L_0), (0.0f), (999999.0f), /*hidden argument*/NULL);
		(&V_0)->___X_0 = L_0;
		FloatRange_tEA6B86356EA817365D3F1759BCE0D10CD8091A96 L_1;
		memset((&L_1), 0, sizeof(L_1));
		FloatRange__ctor_m9EE180C6C3AA894E8E2E49FA22EC5289650F1075((&L_1), (0.0f), (999999.0f), /*hidden argument*/NULL);
		(&V_0)->___Y_1 = L_1;
		FloatRange2D_tBADBA0613562F3346F4E01280E0166B1D72D181A L_2 = V_0;
		__this->___SizeLimits_17 = L_2;
		FloatingContainer__ctor_m7AB7C37BA01EC7A3ADA9EFAC566FBE96E533CAC1(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameKit.Dependencies.Inspectors.GroupAttribute::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupAttribute__ctor_mA24F9900595B72079DCA09F09D7291C40B33A727 (GroupAttribute_t4ECEDB3E307BA4A4AB6A908129323E4041840B9B* __this, String_t* ___name0, bool ___foldEverything1, const RuntimeMethod* method) 
{
	{
		// public GroupAttribute(string name, bool foldEverything = false)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// this.foldEverything = foldEverything;
		bool L_0 = ___foldEverything1;
		__this->___foldEverything_1 = L_0;
		// this.name           = name;
		String_t* L_1 = ___name0;
		__this->___name_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String GameKit.Dependencies.Inspectors.ShowIfAttribute::get_comparedPropertyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ShowIfAttribute_get_comparedPropertyName_mFEFFF676CEB84FF6222F16AB74F194A4519F0989 (ShowIfAttribute_t8E349A53643E969632B14FD4801DAE98D3CDBC32* __this, const RuntimeMethod* method) 
{
	{
		// public string comparedPropertyName { get; private set; }
		String_t* L_0 = __this->___U3CcomparedPropertyNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void GameKit.Dependencies.Inspectors.ShowIfAttribute::set_comparedPropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowIfAttribute_set_comparedPropertyName_m3AE28C3177DA505B5D8582532720D14AB645F33D (ShowIfAttribute_t8E349A53643E969632B14FD4801DAE98D3CDBC32* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string comparedPropertyName { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CcomparedPropertyNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcomparedPropertyNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Object GameKit.Dependencies.Inspectors.ShowIfAttribute::get_comparedValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShowIfAttribute_get_comparedValue_mD298A15A9D2DD1332E5AE4BC8968071B2281C2AD (ShowIfAttribute_t8E349A53643E969632B14FD4801DAE98D3CDBC32* __this, const RuntimeMethod* method) 
{
	{
		// public object comparedValue { get; private set; }
		RuntimeObject* L_0 = __this->___U3CcomparedValueU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void GameKit.Dependencies.Inspectors.ShowIfAttribute::set_comparedValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowIfAttribute_set_comparedValue_m8B15FD4A44986B091D25FBFBF521C76E89618855 (ShowIfAttribute_t8E349A53643E969632B14FD4801DAE98D3CDBC32* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public object comparedValue { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CcomparedValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcomparedValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// GameKit.Dependencies.Inspectors.ShowIfAttribute/DisablingType GameKit.Dependencies.Inspectors.ShowIfAttribute::get_disablingType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShowIfAttribute_get_disablingType_m64DB916732DB778AEC4F8B6407496C67E6D97AC5 (ShowIfAttribute_t8E349A53643E969632B14FD4801DAE98D3CDBC32* __this, const RuntimeMethod* method) 
{
	{
		// public DisablingType disablingType { get; private set; }
		int32_t L_0 = __this->___U3CdisablingTypeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void GameKit.Dependencies.Inspectors.ShowIfAttribute::set_disablingType(GameKit.Dependencies.Inspectors.ShowIfAttribute/DisablingType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowIfAttribute_set_disablingType_m0ECA258954D66FCC93265703DCB38436A463FCE8 (ShowIfAttribute_t8E349A53643E969632B14FD4801DAE98D3CDBC32* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public DisablingType disablingType { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CdisablingTypeU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void GameKit.Dependencies.Inspectors.ShowIfAttribute::.ctor(System.String,System.Object,GameKit.Dependencies.Inspectors.ShowIfAttribute/DisablingType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowIfAttribute__ctor_mD71C1697424CD419F654C3494615A81643E380B4 (ShowIfAttribute_t8E349A53643E969632B14FD4801DAE98D3CDBC32* __this, String_t* ___comparedPropertyName0, RuntimeObject* ___comparedValue1, int32_t ___disablingType2, const RuntimeMethod* method) 
{
	{
		// public ShowIfAttribute(string comparedPropertyName, object comparedValue, DisablingType disablingType = DisablingType.DontDraw)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// this.comparedPropertyName = comparedPropertyName;
		String_t* L_0 = ___comparedPropertyName0;
		ShowIfAttribute_set_comparedPropertyName_m3AE28C3177DA505B5D8582532720D14AB645F33D_inline(__this, L_0, NULL);
		// this.comparedValue = comparedValue;
		RuntimeObject* L_1 = ___comparedValue1;
		ShowIfAttribute_set_comparedValue_m8B15FD4A44986B091D25FBFBF521C76E89618855_inline(__this, L_1, NULL);
		// this.disablingType = disablingType;
		int32_t L_2 = ___disablingType2;
		ShowIfAttribute_set_disablingType_m0ECA258954D66FCC93265703DCB38436A463FCE8_inline(__this, L_2, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = ceil(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rhs1;
		float L_2;
		L_2 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_0, L_1, NULL);
		bool L_3;
		L_3 = Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline(L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___b1;
		float L_2;
		L_2 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = fabsf(L_2);
		float L_4;
		L_4 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_3, (1.0f), NULL);
		V_0 = L_4;
		float L_5 = V_0;
		bool L_6;
		L_6 = Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		float L_7 = V_0;
		float L_8;
		L_8 = acosf(L_7);
		G_B3_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, (2.0f))), (57.2957802f)));
		goto IL_0039;
	}

IL_0034:
	{
		G_B3_0 = (0.0f);
	}

IL_0039:
	{
		V_1 = G_B3_0;
		goto IL_003c;
	}

IL_003c:
	{
		float L_9 = V_1;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) > ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___a0;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___b1;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___a0;
		float L_7 = L_6.___x_0;
		float L_8 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___a0;
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___b1;
		float L_12 = L_11.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___a0;
		float L_14 = L_13.___y_1;
		float L_15 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ResizeDelegate_Invoke_m73EA3C7483D6F50719066DCF51ECF1705AE5183A_inline (ResizeDelegate_t7CD11F7C85427FE4344D3443608603D762AF3800* __this, bool ___complete0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___complete0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CanvasGroupFader_get_FadeGoal_m995F4C89615A3735054CE3A41F972BBB9A07D3C0_inline (CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* __this, const RuntimeMethod* method) 
{
	{
		// public FadeGoalType FadeGoal { get; private set; } = FadeGoalType.Unset;
		int32_t L_0 = __this->___U3CFadeGoalU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasGroupFader_set_FadeGoal_mC111C5B45030759E2E1E8C30DC9513FA325DF58B_inline (CanvasGroupFader_tCD76CC43FDAA13FEC189AD03AC386BAF53ED258B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public FadeGoalType FadeGoal { get; private set; } = FadeGoalType.Unset;
		int32_t L_0 = ___value0;
		__this->___U3CFadeGoalU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___target1;
		float L_1 = ___current0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___maxDelta2;
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		float L_5 = ___target1;
		V_1 = L_5;
		goto IL_0026;
	}

IL_0017:
	{
		float L_6 = ___current0;
		float L_7 = ___target1;
		float L_8 = ___current0;
		float L_9;
		L_9 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((float)il2cpp_codegen_subtract(L_7, L_8)), NULL);
		float L_10 = ___maxDelta2;
		V_1 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		goto IL_0026;
	}

IL_0026:
	{
		float L_11 = V_1;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ButtonData_set_Text_m9BAE0ED3909A19D6ED82519C3965D3528C937824_inline (ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Text { get; protected set; } = string.Empty;
		String_t* L_0 = ___value0;
		__this->___U3CTextU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ButtonData_set_Key_m2F659F0E7DAA4BE038C38EAE97D110B9D4AE9E1A_inline (ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Key { get; protected set; } = string.Empty;
		String_t* L_0 = ___value0;
		__this->___U3CKeyU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CKeyU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ButtonData_get_Key_m4FF6C98061FC55F5897F470A14517FE9A20B27DE_inline (ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* __this, const RuntimeMethod* method) 
{
	{
		// public string Key { get; protected set; } = string.Empty;
		String_t* L_0 = __this->___U3CKeyU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PressedDelegate_Invoke_m6414BB491C0BE9DAEF1F3DBDEA910AC4279EA825_inline (PressedDelegate_tB8943BA0A235635A19B8F760D8021C6BC71F8E7D* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___key0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageButtonData_set_DisplayImage_m3CCD38D8DE9B1EF7994751C885966A1D9935A0E8_inline (ImageButtonData_tB44D13315533BA4A897470789513A2FAAD2ED6BC* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	{
		// public Sprite DisplayImage { get; protected set; } = null;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___value0;
		__this->___U3CDisplayImageU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayImageU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ImageButtonData_get_DisplayImage_m91A295FB1D37D025284060760B13C5EFA0728F0B_inline (ImageButtonData_tB44D13315533BA4A897470789513A2FAAD2ED6BC* __this, const RuntimeMethod* method) 
{
	{
		// public Sprite DisplayImage { get; protected set; } = null;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___U3CDisplayImageU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionMenuButton_set_ButtonData_m736905FAAC3ABDC3B3BD0B5C72D86C0BB615C529_inline (OptionMenuButton_t5FBC86B97F4399FEB00518C805878822E8938D22* __this, ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* ___value0, const RuntimeMethod* method) 
{
	{
		// public ButtonData ButtonData { get; protected set; }
		ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* L_0 = ___value0;
		__this->___U3CButtonDataU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CButtonDataU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ButtonData_get_Text_m68F1D5388ECAF9FC14DD748E7B05ABC00E651A14_inline (ButtonData_tFEC14268F81168FB4887C39E428C2D73CEFA7F11* __this, const RuntimeMethod* method) 
{
	{
		// public string Text { get; protected set; } = string.Empty;
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ShowIfAttribute_set_comparedPropertyName_m3AE28C3177DA505B5D8582532720D14AB645F33D_inline (ShowIfAttribute_t8E349A53643E969632B14FD4801DAE98D3CDBC32* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string comparedPropertyName { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CcomparedPropertyNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcomparedPropertyNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ShowIfAttribute_set_comparedValue_m8B15FD4A44986B091D25FBFBF521C76E89618855_inline (ShowIfAttribute_t8E349A53643E969632B14FD4801DAE98D3CDBC32* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public object comparedValue { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CcomparedValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcomparedValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ShowIfAttribute_set_disablingType_m0ECA258954D66FCC93265703DCB38436A463FCE8_inline (ShowIfAttribute_t8E349A53643E969632B14FD4801DAE98D3CDBC32* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public DisablingType disablingType { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CdisablingTypeU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ListStack_1_get_Entries_m5F7AF6EDF64DB6472283A9CA28ADF88D68C22959_gshared_inline (ListStack_1_t6543B5304E8418236EAC2FEBBC81B53D909BC453* __this, const RuntimeMethod* method) 
{
	{
		// public List<GameObject> Entries { get; private set; } = new List<GameObject>();
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___U3CEntriesU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t1089FBBD4130EF28F4019D7530D38FE4C472C0FE Enumerator_get_Current_m2FE708A7EA61E48401599C38221CD7C18E330458_gshared_inline (Enumerator_t8B6C4F1BDECE79D7EBD8559485CC296ECC12F73D* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_t1089FBBD4130EF28F4019D7530D38FE4C472C0FE L_0 = (KeyValuePair_2_t1089FBBD4130EF28F4019D7530D38FE4C472C0FE)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2 KeyValuePair_2_get_Value_m902BA09076040C83E90C4D128FF908781B7C6AD3_gshared_inline (KeyValuePair_2_t1089FBBD4130EF28F4019D7530D38FE4C472C0FE* __this, const RuntimeMethod* method) 
{
	{
		DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2 L_0 = (DelayedStoreData_tCB62C30502F9CD552EAB1BC4D9F4C1311D72A1A2)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m47FE9CFE39D556B8C289C78E7F6B11A785FFE262_gshared_inline (KeyValuePair_2_t1089FBBD4130EF28F4019D7530D38FE4C472C0FE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_gshared_inline (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_gshared_inline (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___a0;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___b1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___a0;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___b1;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___dot0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___dot0;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___value0)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
