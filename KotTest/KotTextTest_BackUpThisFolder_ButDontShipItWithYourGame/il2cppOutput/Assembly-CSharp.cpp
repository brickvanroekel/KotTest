#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735;
// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t325C602D999E964DB72210E493635E83F8D6CE68;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB;
// System.Action`1<ZXing.Result>
struct Action_1_t9C15D36035E0EC25EC6E91220DFFEA5436DBBFC6;
// System.Action`1<ZXing.ResultPoint>
struct Action_1_t70238D061BFFA7D49D2FF0ED8B4054E39AAE50BF;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F;
// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer>
struct Func_2_t614D64FDB2EE48EB260F302A6131FFD71CE502F1;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Func`4<UnityEngine.Color32[],System.Int32,System.Int32,ZXing.LuminanceSource>
struct Func_4_t40AE4BEC39AB141DFFA74DE46D7D5D8DA2A28102;
// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource>
struct Func_5_t805EE5CC6AD8843F029E475B624A67448B7A7364;
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>
struct IDictionary_2_t3B68EF519427E7FE95A7242758F0B03628B9AA64;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo>
struct List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<Goal>
struct List_1_t3E0D818B201F2B798A548F06D449F4CEBBDB15B3;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Quest>
struct List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Target>
struct List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystem>
struct List_1_t1C988AEFF3BCCFEF103EACA601923CD56DBB593C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_t3903923EFB501C3A0672A0E60558673B85435D8E;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34;
// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/DropdownItem>
struct List_1_tA7EEECF976A6B4957450A4D235070C9324ED1A97;
// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>
struct List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<Target>
struct Predicate_1_t20287AEA8C42BE98D3E87A6245361D7AF842FC70;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.Queue`1<System.String>
struct Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31;
// TMPro.TweenRunner`1<TMPro.FloatTween>
struct TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
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
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC;
// Goal[]
struct GoalU5BU5D_t5A602BA078885BA856A20A61D4D43910B9104714;
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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Quest[]
struct QuestU5BU5D_tACAB87E6E7B7B47F97ED7DD563AE08696809202A;
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0;
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
// Target[]
struct TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Dropdown/OptionData[]
struct OptionDataU5BU5D_tEB78063B7582A72D41E99569EB93D519AC75F615;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F;
// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// ZXing.BarcodeReader
struct BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DamageTextController
struct DamageTextController_t7879B02C62EA298731E377CF181B3678FEA4182E;
// DebugDrawer
struct DebugDrawer_t54B7EE56BB73B8687EA2425763A12182A578E001;
// ZXing.Common.DecodingOptions
struct DecodingOptions_t062639B46A59B4B5ABA29D42F15F248D1BC771DB;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.GUISettings
struct GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847;
// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Goal
struct Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// ZXing.IBarcodeReader
struct IBarcodeReader_t7C5A059E4DA3A0B4F7FA68ABD7131229C8DFF1AB;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Interaction
struct Interaction_t37B5E5551D5FF5D5363A246D228B88823A490295;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// LookAtPlayer
struct LookAtPlayer_tBA315B22FE90398AE3DBC3CCA96D4F1F73B9C0B3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// QrCodeRecenter
struct QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365;
// Quest
struct Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9;
// QuestController
struct QuestController_t86F8F39B58F9D58247AE5F21D36144F374072CC5;
// ZXing.Reader
struct Reader_t1A9C7CADF7A2C1EDCB670DAA63F259E7B798FE4C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// ZXing.Result
struct Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SetNavTarget
struct SetNavTarget_t1D0FB5EAEB95EDE2DA845DB133DE96157A52A8A0;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_Dropdown
struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504;
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
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// Target
struct Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5;
// TextAppearInteraction
struct TextAppearInteraction_tC5B4C8DEA5EDD5009DA3788CD69641F17EBCE68D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// TypeWriterController
struct TypeWriterController_tF5AA1AF5800EEB0BFF3722E0385A4CB326667E61;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399;
// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// QrCodeRecenter/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t15FDD13257A03AE3C229ABF24885852FB1B82491;
// SetNavTarget/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tE6EEF1A20A9529CC7CD88933EDB06F395237A5E2;
// TMPro.TMP_Dropdown/DropdownEvent
struct DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91;
// TMPro.TMP_Dropdown/OptionData
struct OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E;
// TMPro.TMP_Dropdown/OptionDataList
struct OptionDataList_tF66EA4801BFA499F010E6EFF89ED760BF4F0BEE1;
// TextAppearInteraction/<CompleteGoalAfterTime>d__8
struct U3CCompleteGoalAfterTimeU3Ed__8_tB47B0EC036B74F4ABC04DB38EC239AE9FA15FC04;
// TypeWriterController/<SetText>d__5
struct U3CSetTextU3Ed__5_tBBD490A20451A6FB5153CC19210EEC514BB15446;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api
struct Api_tAE210A8378E537AFD1FA4B99562229CE842377FB;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate
struct OnImageRequestCompleteDelegate_tCD7B27E0C5D492FB984F05869FB527372CB70995;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugDrawer_t54B7EE56BB73B8687EA2425763A12182A578E001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBarcodeReader_t7C5A059E4DA3A0B4F7FA68ABD7131229C8DFF1AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t20287AEA8C42BE98D3E87A6245361D7AF842FC70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCompleteGoalAfterTimeU3Ed__8_tB47B0EC036B74F4ABC04DB38EC239AE9FA15FC04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSetTextU3Ed__5_tBBD490A20451A6FB5153CC19210EEC514BB15446_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_t15FDD13257A03AE3C229ABF24885852FB1B82491_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_tE6EEF1A20A9529CC7CD88933EDB06F395237A5E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral457537F3C30CB51AF6430FADDB0791329907CBBF;
IL2CPP_EXTERN_C String_t* _stringLiteralB5CDD26D5A515B3AC11ACBBCC2DD05D4BB02B660;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE69C6A3A0BD2A9030375061C78273B2EABD411D0;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DebugDrawer_HandleLog_mCC997A684524E2F2581041729E0B2063220F7CC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0274278A4477DCDCC0054D80DA18FD9A7B580624_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA00EF079E7D7CC3603EFD79E964A934A219F88E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2E1C1F56496EC28D7CE0792F1A51BCF9BB5806E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTypeWriterController_tF5AA1AF5800EEB0BFF3722E0385A4CB326667E61_m42F58B739118B6088412C2F12E6A36F926A08A6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_m830774A37EBA7DBAA97D47E4491E1314313EE720_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE436230BB8A75F6CFA6557297F3D21AAB9BF282F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1C4FDFB6E7B7CC78B49428488961C909B33089B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0287BE1E6ED3AE32977D9344A2FACA0954E804B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mBE3176F40529BACB1E6DBB68BDFD5894B04BD1BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSlice_1_op_Implicit_m81484997E9A9BE628BF2E6EE3386E94720A881F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QrCodeRecenter_OnCameraFrameReceived_m237F79EBAE06CE0FD717BD86C189C5EF4B210A99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_GetEnumerator_m7DA1A757FB02DB4B272F5D55513996EEF639ADC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mDDCE4EE6A52F7D218F7DD54BDA1F1649606C70AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCompleteGoalAfterTimeU3Ed__8_System_Collections_IEnumerator_Reset_mBF4C499679AC22BBE1F086FA001AF2B482C22D67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSetTextU3Ed__5_System_Collections_IEnumerator_Reset_m32681C7031F96EE4DBB61E1E1411D197918CDE6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CSetQrCodeRecenterTargetU3Eb__0_mE6E20400AE418FF8998623E50C552B2ED7104930_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CSetCurrentNavigationTargetU3Eb__0_mD49FD4345756719774E93A4B52EC234C4AF3E223_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;

struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<Goal>
struct List_1_t3E0D818B201F2B798A548F06D449F4CEBBDB15B3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GoalU5BU5D_t5A602BA078885BA856A20A61D4D43910B9104714* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Collections.Generic.List`1<Quest>
struct List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	QuestU5BU5D_tACAB87E6E7B7B47F97ED7DD563AE08696809202A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Target>
struct List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>
struct List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_tEB78063B7582A72D41E99569EB93D519AC75F615* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.String>
struct Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// ZXing.BarcodeReaderGeneric
struct BarcodeReaderGeneric_t7B149EF324490F1EA50994B1002027E502D8C254  : public RuntimeObject
{
	// ZXing.Reader ZXing.BarcodeReaderGeneric::reader
	RuntimeObject* ___reader_2;
	// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource> ZXing.BarcodeReaderGeneric::createRGBLuminanceSource
	Func_5_t805EE5CC6AD8843F029E475B624A67448B7A7364* ___createRGBLuminanceSource_3;
	// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer> ZXing.BarcodeReaderGeneric::createBinarizer
	Func_2_t614D64FDB2EE48EB260F302A6131FFD71CE502F1* ___createBinarizer_4;
	// System.Boolean ZXing.BarcodeReaderGeneric::usePreviousState
	bool ___usePreviousState_5;
	// ZXing.Common.DecodingOptions ZXing.BarcodeReaderGeneric::options
	DecodingOptions_t062639B46A59B4B5ABA29D42F15F248D1BC771DB* ___options_6;
	// System.Action`1<ZXing.ResultPoint> ZXing.BarcodeReaderGeneric::explicitResultPointFound
	Action_1_t70238D061BFFA7D49D2FF0ED8B4054E39AAE50BF* ___explicitResultPointFound_7;
	// System.Action`1<ZXing.Result> ZXing.BarcodeReaderGeneric::ResultFound
	Action_1_t9C15D36035E0EC25EC6E91220DFFEA5436DBBFC6* ___ResultFound_8;
	// System.Boolean ZXing.BarcodeReaderGeneric::<AutoRotate>k__BackingField
	bool ___U3CAutoRotateU3Ek__BackingField_9;
};

// ZXing.Result
struct Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF  : public RuntimeObject
{
	// System.String ZXing.Result::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_0;
	// System.Byte[] ZXing.Result::<RawBytes>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CRawBytesU3Ek__BackingField_1;
	// ZXing.ResultPoint[] ZXing.Result::<ResultPoints>k__BackingField
	ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* ___U3CResultPointsU3Ek__BackingField_2;
	// ZXing.BarcodeFormat ZXing.Result::<BarcodeFormat>k__BackingField
	int32_t ___U3CBarcodeFormatU3Ek__BackingField_3;
	// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object> ZXing.Result::<ResultMetadata>k__BackingField
	RuntimeObject* ___U3CResultMetadataU3Ek__BackingField_4;
	// System.Int64 ZXing.Result::<Timestamp>k__BackingField
	int64_t ___U3CTimestampU3Ek__BackingField_5;
	// System.Int32 ZXing.Result::<NumBits>k__BackingField
	int32_t ___U3CNumBitsU3Ek__BackingField_6;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// Target
struct Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5  : public RuntimeObject
{
	// System.String Target::Name
	String_t* ___Name_0;
	// UnityEngine.GameObject Target::PositionObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PositionObject_1;
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

// QrCodeRecenter/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t15FDD13257A03AE3C229ABF24885852FB1B82491  : public RuntimeObject
{
	// System.String QrCodeRecenter/<>c__DisplayClass10_0::targetText
	String_t* ___targetText_0;
};

// SetNavTarget/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tE6EEF1A20A9529CC7CD88933EDB06F395237A5E2  : public RuntimeObject
{
	// System.String SetNavTarget/<>c__DisplayClass8_0::selectedText
	String_t* ___selectedText_0;
};

// TMPro.TMP_Dropdown/OptionData
struct OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E  : public RuntimeObject
{
	// System.String TMPro.TMP_Dropdown/OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite TMPro.TMP_Dropdown/OptionData::m_Image
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Image_1;
};

// TextAppearInteraction/<CompleteGoalAfterTime>d__8
struct U3CCompleteGoalAfterTimeU3Ed__8_tB47B0EC036B74F4ABC04DB38EC239AE9FA15FC04  : public RuntimeObject
{
	// System.Int32 TextAppearInteraction/<CompleteGoalAfterTime>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TextAppearInteraction/<CompleteGoalAfterTime>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single TextAppearInteraction/<CompleteGoalAfterTime>d__8::time
	float ___time_2;
};

// TypeWriterController/<SetText>d__5
struct U3CSetTextU3Ed__5_tBBD490A20451A6FB5153CC19210EEC514BB15446  : public RuntimeObject
{
	// System.Int32 TypeWriterController/<SetText>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TypeWriterController/<SetText>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TypeWriterController TypeWriterController/<SetText>d__5::<>4__this
	TypeWriterController_tF5AA1AF5800EEB0BFF3722E0385A4CB326667E61* ___U3CU3E4__this_2;
	// System.String TypeWriterController/<SetText>d__5::textStr
	String_t* ___textStr_3;
	// System.Int32 TypeWriterController/<SetText>d__5::<i>5__2
	int32_t ___U3CiU3E5__2_4;
};

// System.Collections.Generic.Queue`1/Enumerator<System.Object>
struct Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A 
{
	// System.Collections.Generic.Queue`1<T> System.Collections.Generic.Queue`1/Enumerator::_q
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ____q_0;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_index
	int32_t ____index_2;
	// T System.Collections.Generic.Queue`1/Enumerator::_currentElement
	RuntimeObject* ____currentElement_3;
};

// System.Collections.Generic.Queue`1/Enumerator<System.String>
struct Enumerator_t378ECF0D349BD6618045A1C6FF5876F7C0FB0133 
{
	// System.Collections.Generic.Queue`1<T> System.Collections.Generic.Queue`1/Enumerator::_q
	Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* ____q_0;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_index
	int32_t ____index_2;
	// T System.Collections.Generic.Queue`1/Enumerator::_currentElement
	String_t* ____currentElement_3;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeSlice`1<System.Byte>
struct NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
};

// System.Nullable`1<System.Int64>
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int64_t ___value_1;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
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

// ZXing.BarcodeReader
struct BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB  : public BarcodeReaderGeneric_t7B149EF324490F1EA50994B1002027E502D8C254
{
	// System.Func`4<UnityEngine.Color32[],System.Int32,System.Int32,ZXing.LuminanceSource> ZXing.BarcodeReader::createLuminanceSource
	Func_4_t40AE4BEC39AB141DFFA74DE46D7D5D8DA2A28102* ___createLuminanceSource_11;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
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

// UnityEngine.RectInt
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Rendering.SphericalHarmonicsL2
struct SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 
{
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr0
	float ___shr0_0;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr1
	float ___shr1_1;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr2
	float ___shr2_2;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr3
	float ___shr3_3;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr4
	float ___shr4_4;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr5
	float ___shr5_5;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr6
	float ___shr6_6;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr7
	float ___shr7_7;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr8
	float ___shr8_8;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg0
	float ___shg0_9;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg1
	float ___shg1_10;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg2
	float ___shg2_11;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg3
	float ___shg3_12;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg4
	float ___shg4_13;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg5
	float ___shg5_14;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg6
	float ___shg6_15;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg7
	float ___shg7_16;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg8
	float ___shg8_17;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb0
	float ___shb0_18;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb1
	float ___shb1_19;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb2
	float ___shb2_20;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb3
	float ___shb3_21;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb4
	float ___shb4_22;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb5
	float ___shb5_23;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb6
	float ___shb6_24;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb7
	float ___shb7_25;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb8
	float ___shb8_26;
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

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
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

// System.Nullable`1<UnityEngine.Color>
struct Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_1;
};

// System.Nullable`1<UnityEngine.Matrix4x4>
struct Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value_1;
};

// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>
struct Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 ___value_1;
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

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AI.NavMeshPath::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___m_Corners_1;
};
// Native definition for COM marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___m_Corners_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
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

// UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::m_NativeHandle
	int32_t ___m_NativeHandle_0;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Api UnityEngine.XR.ARSubsystems.XRCpuImage::m_Api
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_1;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage::<dimensions>k__BackingField
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___U3CdimensionsU3Ek__BackingField_3;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::<planeCount>k__BackingField
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Format UnityEngine.XR.ARSubsystems.XRCpuImage::<format>k__BackingField
	int32_t ___U3CformatU3Ek__BackingField_5;
	// System.Double UnityEngine.XR.ARSubsystems.XRCpuImage::<timestamp>k__BackingField
	double ___U3CtimestampU3Ek__BackingField_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57_marshaled_pinvoke
{
	int32_t ___m_NativeHandle_0;
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_1;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___U3CdimensionsU3Ek__BackingField_3;
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	int32_t ___U3CformatU3Ek__BackingField_5;
	double ___U3CtimestampU3Ek__BackingField_6;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57_marshaled_com
{
	int32_t ___m_NativeHandle_0;
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_1;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___U3CdimensionsU3Ek__BackingField_3;
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	int32_t ___U3CformatU3Ek__BackingField_5;
	double ___U3CtimestampU3Ek__BackingField_6;
};

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams
struct ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 
{
	// UnityEngine.RectInt UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_InputRect
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___m_InputRect_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_OutputDimensions
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_OutputDimensions_1;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_Format
	int32_t ___m_Format_2;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_Transformation
	int32_t ___m_Transformation_3;
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

// UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 
{
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::<averageColorTemperature>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::<colorCorrection>k__BackingField
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightIntensityLumens>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightColor>k__BackingField
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	// System.Nullable`1<UnityEngine.Vector3> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightDirection>k__BackingField
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2> UnityEngine.XR.ARFoundation.ARLightEstimationData::<ambientSphericalHarmonics>k__BackingField
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_AverageBrightness
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_AverageIntensityInLumens
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_MainLightBrightness
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_pinvoke
{
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_com
{
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};

// UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 
{
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARFoundation.ARTextureInfo::m_Descriptor
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_pinvoke
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_com
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
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

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Predicate`1<Target>
struct Predicate_1_t20287AEA8C42BE98D3E87A6245361D7AF842FC70  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC 
{
	// UnityEngine.XR.ARFoundation.ARLightEstimationData UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<lightEstimation>k__BackingField
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 ___U3ClightEstimationU3Ek__BackingField_0;
	// System.Nullable`1<System.Int64> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<timestampNs>k__BackingField
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<projectionMatrix>k__BackingField
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<displayMatrix>k__BackingField
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<textures>k__BackingField
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<propertyNameIds>k__BackingField
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	// System.Nullable`1<System.Double> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<exposureDuration>k__BackingField
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<exposureOffset>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<enabledMaterialKeywords>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<disabledMaterialKeywords>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<cameraGrainTexture>k__BackingField
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	// System.Single UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<noiseIntensity>k__BackingField
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC_marshaled_pinvoke
{
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_pinvoke ___U3ClightEstimationU3Ek__BackingField_0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC_marshaled_com
{
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_com ___U3ClightEstimationU3Ek__BackingField_0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* ___m_Styles_31;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
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

// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735  : public MulticastDelegate_t
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

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* ___U3CsubsystemU3Ek__BackingField_4;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* ___U3CsubsystemU3Ek__BackingField_4;
};

// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackablesParentU3Ek__BackingField_5;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs> UnityEngine.XR.ARFoundation.ARSessionOrigin::trackablesParentTransformChanged
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* ___trackablesParentTransformChanged_6;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ContentOffsetGameObject_7;
};

// DamageTextController
struct DamageTextController_t7879B02C62EA298731E377CF181B3678FEA4182E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI DamageTextController::myText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___myText_4;
	// System.Single DamageTextController::moveAmt
	float ___moveAmt_5;
	// System.Single DamageTextController::moveSpeed
	float ___moveSpeed_6;
	// UnityEngine.Vector3[] DamageTextController::moveDirs
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___moveDirs_7;
	// System.Boolean DamageTextController::canMove
	bool ___canMove_8;
};

// DebugDrawer
struct DebugDrawer_t54B7EE56BB73B8687EA2425763A12182A578E001  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 DebugDrawer::maxLines
	int32_t ___maxLines_5;
	// System.Collections.Generic.Queue`1<System.String> DebugDrawer::queue
	Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* ___queue_6;
	// System.String DebugDrawer::currentText
	String_t* ___currentText_7;
};

// Goal
struct Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Goal::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_4;
	// System.String Goal::Description
	String_t* ___Description_5;
	// QuestController Goal::<QuestController>k__BackingField
	QuestController_t86F8F39B58F9D58247AE5F21D36144F374072CC5* ___U3CQuestControllerU3Ek__BackingField_6;
};

// Interaction
struct Interaction_t37B5E5551D5FF5D5363A246D228B88823A490295  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Ray Interaction::ray
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray_4;
	// UnityEngine.RaycastHit Interaction::hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___hit_5;
};

// LookAtPlayer
struct LookAtPlayer_tBA315B22FE90398AE3DBC3CCA96D4F1F73B9C0B3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// QrCodeRecenter
struct QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARSession QrCodeRecenter::session
	ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___session_4;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin QrCodeRecenter::sessionOrigin
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___sessionOrigin_5;
	// UnityEngine.XR.ARFoundation.ARCameraManager QrCodeRecenter::cameraManager
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___cameraManager_6;
	// System.Collections.Generic.List`1<Target> QrCodeRecenter::navigationTargetObjects
	List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* ___navigationTargetObjects_7;
	// UnityEngine.Texture2D QrCodeRecenter::cameraImageTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___cameraImageTexture_8;
	// ZXing.IBarcodeReader QrCodeRecenter::reader
	RuntimeObject* ___reader_9;
};

// Quest
struct Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Quest::Name
	String_t* ___Name_4;
	// System.String Quest::Description
	String_t* ___Description_5;
	// System.String Quest::Dialog
	String_t* ___Dialog_6;
	// System.Int32 Quest::Order
	int32_t ___Order_7;
	// Goal Quest::Goal
	Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* ___Goal_8;
};

// QuestController
struct QuestController_t86F8F39B58F9D58247AE5F21D36144F374072CC5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<Quest> QuestController::QuestList
	List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* ___QuestList_4;
	// System.Collections.Generic.List`1<Goal> QuestController::GoalList
	List_1_t3E0D818B201F2B798A548F06D449F4CEBBDB15B3* ___GoalList_5;
	// System.Int32 QuestController::currentQuestIndex
	int32_t ___currentQuestIndex_6;
};

// SetNavTarget
struct SetNavTarget_t1D0FB5EAEB95EDE2DA845DB133DE96157A52A8A0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Dropdown SetNavTarget::navigationTargetDropDown
	TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* ___navigationTargetDropDown_4;
	// System.Collections.Generic.List`1<Target> SetNavTarget::navigationTargetObjects
	List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* ___navigationTargetObjects_5;
	// UnityEngine.AI.NavMeshPath SetNavTarget::path
	NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path_6;
	// UnityEngine.LineRenderer SetNavTarget::line
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___line_7;
	// UnityEngine.Vector3 SetNavTarget::targetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition_8;
	// System.Boolean SetNavTarget::lineToggle
	bool ___lineToggle_9;
};

// TextAppearInteraction
struct TextAppearInteraction_tC5B4C8DEA5EDD5009DA3788CD69641F17EBCE68D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject TextAppearInteraction::textPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___textPrefab_4;
	// System.Single TextAppearInteraction::textKillTime
	float ___textKillTime_5;
	// Goal TextAppearInteraction::completedGoal
	Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* ___completedGoal_6;
	// UnityEngine.Ray TextAppearInteraction::ray
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray_7;
	// UnityEngine.RaycastHit TextAppearInteraction::hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___hit_8;
};

// TypeWriterController
struct TypeWriterController_tF5AA1AF5800EEB0BFF3722E0385A4CB326667E61  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI TypeWriterController::myText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___myText_4;
	// System.Single TypeWriterController::delay
	float ___delay_5;
	// System.String TypeWriterController::currText
	String_t* ___currText_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F  : public SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B
{
	// UnityEngine.XR.ARSubsystems.CameraFocusMode UnityEngine.XR.ARFoundation.ARCameraManager::m_FocusMode
	int32_t ___m_FocusMode_7;
	// UnityEngine.XR.ARSubsystems.LightEstimationMode UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimationMode
	int32_t ___m_LightEstimationMode_8;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_AutoFocus
	bool ___m_AutoFocus_9;
	// UnityEngine.XR.ARFoundation.LightEstimation UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimation
	int32_t ___m_LightEstimation_10;
	// UnityEngine.XR.ARFoundation.CameraFacingDirection UnityEngine.XR.ARFoundation.ARCameraManager::m_FacingDirection
	int32_t ___m_FacingDirection_11;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs> UnityEngine.XR.ARFoundation.ARCameraManager::frameReceived
	Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___frameReceived_12;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo> UnityEngine.XR.ARFoundation.ARCameraManager::m_TextureInfos
	List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF* ___m_TextureInfos_15;
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARCameraManager::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_16;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_PreRenderInvertCullingValue
	bool ___m_PreRenderInvertCullingValue_17;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.ARCameraManager::m_CameraGrainInfo
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 ___m_CameraGrainInfo_18;
};

// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014  : public SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_AttemptUpdate
	bool ___m_AttemptUpdate_7;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_MatchFrameRate
	bool ___m_MatchFrameRate_8;
	// UnityEngine.XR.ARFoundation.TrackingMode UnityEngine.XR.ARFoundation.ARSession::m_TrackingMode
	int32_t ___m_TrackingMode_9;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_VSyncCount
	int32_t ___m_VSyncCount_11;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_TargetFrameRate
	int32_t ___m_TargetFrameRate_12;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_WasFrameRateSet
	bool ___m_WasFrameRateSet_13;
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

// TMPro.TMP_Dropdown
struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform TMPro.TMP_Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// TMPro.TMP_Text TMPro.TMP_Dropdown::m_CaptionText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_CaptionText_21;
	// UnityEngine.UI.Image TMPro.TMP_Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Graphic TMPro.TMP_Dropdown::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_23;
	// TMPro.TMP_Text TMPro.TMP_Dropdown::m_ItemText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_ItemText_24;
	// UnityEngine.UI.Image TMPro.TMP_Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_25;
	// System.Int32 TMPro.TMP_Dropdown::m_Value
	int32_t ___m_Value_26;
	// TMPro.TMP_Dropdown/OptionDataList TMPro.TMP_Dropdown::m_Options
	OptionDataList_tF66EA4801BFA499F010E6EFF89ED760BF4F0BEE1* ___m_Options_27;
	// TMPro.TMP_Dropdown/DropdownEvent TMPro.TMP_Dropdown::m_OnValueChanged
	DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91* ___m_OnValueChanged_28;
	// System.Single TMPro.TMP_Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_29;
	// UnityEngine.GameObject TMPro.TMP_Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_30;
	// UnityEngine.GameObject TMPro.TMP_Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_31;
	// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/DropdownItem> TMPro.TMP_Dropdown::m_Items
	List_1_tA7EEECF976A6B4957450A4D235070C9324ED1A97* ___m_Items_32;
	// TMPro.TweenRunner`1<TMPro.FloatTween> TMPro.TMP_Dropdown::m_AlphaTweenRunner
	TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E* ___m_AlphaTweenRunner_33;
	// System.Boolean TMPro.TMP_Dropdown::validTemplate
	bool ___validTemplate_34;
	// UnityEngine.Coroutine TMPro.TMP_Dropdown::m_Coroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_Coroutine_35;
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

// <Module>

// <Module>

// System.Collections.Generic.List`1<Goal>
struct List_1_t3E0D818B201F2B798A548F06D449F4CEBBDB15B3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GoalU5BU5D_t5A602BA078885BA856A20A61D4D43910B9104714* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Goal>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<Quest>
struct List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	QuestU5BU5D_tACAB87E6E7B7B47F97ED7DD563AE08696809202A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Quest>

// System.Collections.Generic.List`1<Target>
struct List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Target>

// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>
struct List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OptionDataU5BU5D_tEB78063B7582A72D41E99569EB93D519AC75F615* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.String>

// System.Collections.Generic.Queue`1<System.String>

// ZXing.BarcodeReaderGeneric
struct BarcodeReaderGeneric_t7B149EF324490F1EA50994B1002027E502D8C254_StaticFields
{
	// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer> ZXing.BarcodeReaderGeneric::defaultCreateBinarizer
	Func_2_t614D64FDB2EE48EB260F302A6131FFD71CE502F1* ___defaultCreateBinarizer_0;
	// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource> ZXing.BarcodeReaderGeneric::defaultCreateRGBLuminanceSource
	Func_5_t805EE5CC6AD8843F029E475B624A67448B7A7364* ___defaultCreateRGBLuminanceSource_1;
};

// ZXing.BarcodeReaderGeneric

// ZXing.Result

// ZXing.Result

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// Target

// Target

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// QrCodeRecenter/<>c__DisplayClass10_0

// QrCodeRecenter/<>c__DisplayClass10_0

// SetNavTarget/<>c__DisplayClass8_0

// SetNavTarget/<>c__DisplayClass8_0

// TMPro.TMP_Dropdown/OptionData

// TMPro.TMP_Dropdown/OptionData

// TextAppearInteraction/<CompleteGoalAfterTime>d__8

// TextAppearInteraction/<CompleteGoalAfterTime>d__8

// TypeWriterController/<SetText>d__5

// TypeWriterController/<SetText>d__5

// System.Collections.Generic.Queue`1/Enumerator<System.Object>

// System.Collections.Generic.Queue`1/Enumerator<System.Object>

// System.Collections.Generic.Queue`1/Enumerator<System.String>

// System.Collections.Generic.Queue`1/Enumerator<System.String>

// Unity.Collections.NativeArray`1<System.Byte>

// Unity.Collections.NativeArray`1<System.Byte>

// Unity.Collections.NativeSlice`1<System.Byte>

// Unity.Collections.NativeSlice`1<System.Byte>

// System.Nullable`1<System.Double>

// System.Nullable`1<System.Double>

// System.Nullable`1<System.Int64>

// System.Nullable`1<System.Int64>

// System.Nullable`1<System.Single>

// System.Nullable`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// ZXing.BarcodeReader
struct BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB_StaticFields
{
	// System.Func`4<UnityEngine.Color32[],System.Int32,System.Int32,ZXing.LuminanceSource> ZXing.BarcodeReader::defaultCreateLuminanceSource
	Func_4_t40AE4BEC39AB141DFFA74DE46D7D5D8DA2A28102* ___defaultCreateLuminanceSource_10;
};

// ZXing.BarcodeReader

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// TMPro.MaterialReference

// TMPro.MaterialReference

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.UI.Navigation

// UnityEngine.UI.Navigation

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// UnityEngine.RectInt

// UnityEngine.RectInt

// System.Single

// System.Single

// UnityEngine.Rendering.SphericalHarmonicsL2

// UnityEngine.Rendering.SphericalHarmonicsL2

// UnityEngine.UI.SpriteState

// UnityEngine.UI.SpriteState

// TMPro.TMP_FontStyleStack

// TMPro.TMP_FontStyleStack

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// TMPro.TMP_Offset

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector2Int

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// UnityEngine.Vector4
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

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_Text/TextBackingContainer

// System.Nullable`1<UnityEngine.Color>

// System.Nullable`1<UnityEngine.Color>

// System.Nullable`1<UnityEngine.Matrix4x4>

// System.Nullable`1<UnityEngine.Matrix4x4>

// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>

// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>

// System.Nullable`1<UnityEngine.Vector3>

// System.Nullable`1<UnityEngine.Vector3>

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.UI.ColorBlock

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.Extents

// TMPro.HighlightState

// TMPro.HighlightState

// UnityEngine.AI.NavMeshPath

// UnityEngine.AI.NavMeshPath

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Unity.Profiling.ProfilerMarker

// Unity.Profiling.ProfilerMarker

// UnityEngine.Ray

// UnityEngine.Ray

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// UnityEngine.RectOffset

// UnityEngine.RectOffset

// UnityEngine.Touch

// UnityEngine.Touch

// TMPro.VertexGradient

// TMPro.VertexGradient

// UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate UnityEngine.XR.ARSubsystems.XRCpuImage::s_OnAsyncConversionCompleteDelegate
	OnImageRequestCompleteDelegate_tCD7B27E0C5D492FB984F05869FB527372CB70995* ___s_OnAsyncConversionCompleteDelegate_2;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor

// UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams

// UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// UnityEngine.XR.ARFoundation.ARLightEstimationData

// UnityEngine.XR.ARFoundation.ARLightEstimationData

// UnityEngine.XR.ARFoundation.ARTextureInfo

// UnityEngine.XR.ARFoundation.ARTextureInfo

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};

// UnityEngine.GUIStyle

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.SystemException

// System.SystemException

// TMPro.TMP_LineInfo

// TMPro.TMP_LineInfo

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// System.Predicate`1<Target>

// System.Predicate`1<Target>

// UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs

// UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields
{
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___current_33;
};

// UnityEngine.GUISkin

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

// TMPro.WordWrapState

// TMPro.WordWrapState

// UnityEngine.Application/LogCallback

// UnityEngine.Application/LogCallback

// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>

// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.LineRenderer

// UnityEngine.LineRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t1C988AEFF3BCCFEF103EACA601923CD56DBB593C* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t3903923EFB501C3A0672A0E60558673B85435D8E* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>

// UnityEngine.XR.ARFoundation.ARSessionOrigin

// UnityEngine.XR.ARFoundation.ARSessionOrigin

// DamageTextController

// DamageTextController

// DebugDrawer
struct DebugDrawer_t54B7EE56BB73B8687EA2425763A12182A578E001_StaticFields
{
	// DebugDrawer DebugDrawer::instance
	DebugDrawer_t54B7EE56BB73B8687EA2425763A12182A578E001* ___instance_4;
};

// DebugDrawer

// Goal

// Goal

// Interaction

// Interaction

// LookAtPlayer

// LookAtPlayer

// QrCodeRecenter

// QrCodeRecenter

// Quest

// Quest

// QuestController

// QuestController

// SetNavTarget

// SetNavTarget

// TextAppearInteraction

// TextAppearInteraction

// TypeWriterController

// TypeWriterController

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraManager::s_Textures
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___s_Textures_13;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraManager::s_PropertyIds
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___s_PropertyIds_14;
};

// UnityEngine.XR.ARFoundation.ARCameraManager

// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields
{
	// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs> UnityEngine.XR.ARFoundation.ARSession::stateChanged
	Action_1_t325C602D999E964DB72210E493635E83F8D6CE68* ___stateChanged_10;
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::s_State
	int32_t ___s_State_14;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARFoundation.ARSession::s_NotTrackingReason
	int32_t ___s_NotTrackingReason_15;
	// UnityEngine.XR.ARSubsystems.SessionAvailability UnityEngine.XR.ARFoundation.ARSession::s_Availability
	int32_t ___s_Availability_16;
};

// UnityEngine.XR.ARFoundation.ARSession

// UnityEngine.UI.Graphic
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

// UnityEngine.UI.Graphic

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// TMPro.TMP_Dropdown
struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504_StaticFields
{
	// TMPro.TMP_Dropdown/OptionData TMPro.TMP_Dropdown::s_NoOptionData
	OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* ___s_NoOptionData_36;
};

// TMPro.TMP_Dropdown

// TMPro.TMP_Text
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

// TMPro.TMP_Text

// TMPro.TextMeshProUGUI
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

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
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


// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A Queue_1_GetEnumerator_mBF0033C4BCEA408644D24F0B28A81F9145FB97C9_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m680926A5EFC7099ECBCE9DEF68F8DED03C103955_gshared (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m5F2338F4C35E898DB7231D7E30F30155498FA9D7_gshared (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mABD92CBE05B031E50E316375DDC8B2BDAD3F6F84_gshared (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E_gshared (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
// Unity.Collections.NativeSlice`1<T> Unity.Collections.NativeSlice`1<System.Byte>::op_Implicit(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA NativeSlice_1_op_Implicit_m81484997E9A9BE628BF2E6EE3386E94720A881F9_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_array, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::LoadRawTextureData<System.Byte>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_data, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___0_match, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::add_logMessageReceived(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_logMessageReceived_mE45B1D93B44D26B8FE979595D5346FC8C7B8E38C (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.String>::get_Count()
inline int32_t Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_inline (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<System.String>::Dequeue()
inline String_t* Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.String>::Enqueue(T)
inline void Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832 (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*, String_t*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___0_item, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.String>::GetEnumerator()
inline Enumerator_t378ECF0D349BD6618045A1C6FF5876F7C0FB0133 Queue_1_GetEnumerator_m7DA1A757FB02DB4B272F5D55513996EEF639ADC5 (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t378ECF0D349BD6618045A1C6FF5876F7C0FB0133 (*) (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*, const RuntimeMethod*))Queue_1_GetEnumerator_mBF0033C4BCEA408644D24F0B28A81F9145FB97C9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m0274278A4477DCDCC0054D80DA18FD9A7B580624 (Enumerator_t378ECF0D349BD6618045A1C6FF5876F7C0FB0133* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t378ECF0D349BD6618045A1C6FF5876F7C0FB0133*, const RuntimeMethod*))Enumerator_Dispose_m680926A5EFC7099ECBCE9DEF68F8DED03C103955_gshared)(__this, method);
}
// T System.Collections.Generic.Queue`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m2E1C1F56496EC28D7CE0792F1A51BCF9BB5806E8 (Enumerator_t378ECF0D349BD6618045A1C6FF5876F7C0FB0133* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t378ECF0D349BD6618045A1C6FF5876F7C0FB0133*, const RuntimeMethod*))Enumerator_get_Current_m5F2338F4C35E898DB7231D7E30F30155498FA9D7_gshared)(__this, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA00EF079E7D7CC3603EFD79E964A934A219F88E8 (Enumerator_t378ECF0D349BD6618045A1C6FF5876F7C0FB0133* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t378ECF0D349BD6618045A1C6FF5876F7C0FB0133*, const RuntimeMethod*))Enumerator_MoveNext_mABD92CBE05B031E50E316375DDC8B2BDAD3F6F84_gshared)(__this, method);
}
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* GUI_get_skin_m97EC9EB4628B311C0DB7DF9FB19FAD82D6790A1B (const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_textArea_m0ECBC9D126D930490F96E100B27F245E555EB7D1 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_m0D7BA53414421D71010DFF628EAA6CCCB3DE737E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, String_t* ___1_text, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___2_style, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.String>::.ctor()
inline void Queue_1__ctor_mDDCE4EE6A52F7D218F7DD54BDA1F1649606C70AE (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean System.Enum::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_hitInfo, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_methodName, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void QrCodeRecenter::SetQrCodeRecenterTarget(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_SetQrCodeRecenterTarget_m463B72B4D4C980733F169BBFF1B1D7E9E8A873DD (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, String_t* ___0_targetText, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::add_frameReceived(System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_add_frameReceived_mB30CD73DB7A25A6E7BC486BA289DBB99CBA3B7A1 (ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* __this, Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::remove_frameReceived(System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_remove_frameReceived_m8D9C301201B5079323169510656821F0286AA67D (ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* __this, Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::TryAcquireLatestCpuImage(UnityEngine.XR.ARSubsystems.XRCpuImage&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCameraManager_TryAcquireLatestCpuImage_m79247340777701FCF1E9CF274D1FC6EAFE0AA874 (ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* __this, XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* ___0_cpuImage, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCpuImage_get_width_m176240EBEBBD41DC5AEF33F945C88E9492370AFA (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCpuImage_get_height_m139489AD26B264FA46EE5659258BBF9C6584E5E9 (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectInt::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, int32_t ___0_xMin, int32_t ___1_yMin, int32_t ___2_width, int32_t ___3_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::set_inputRect(UnityEngine.RectInt)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_inputRect_m7965864AED4C5176D58F3766D6BBB35DFF7BC903_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::set_outputDimensions(UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_outputDimensions_m97EC09EE536EA456A18894311BF75AC9D5A90A3B_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::set_outputFormat(UnityEngine.TextureFormat)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_outputFormat_mA82EA0ECC19D14AECBA318B9B485D08CFB46A1F4_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::set_transformation(UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_transformation_mBCE73B14CCE8A31A258C6B8F6104446A2D495A0F_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::GetConvertedDataSize(UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCpuImage_GetConvertedDataSize_m1A292AE01390513BEA935CC4C19A0F8FD52341DE (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___0_conversionParams, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
// Unity.Collections.NativeSlice`1<T> Unity.Collections.NativeSlice`1<System.Byte>::op_Implicit(Unity.Collections.NativeArray`1<T>)
inline NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA NativeSlice_1_op_Implicit_m81484997E9A9BE628BF2E6EE3386E94720A881F9 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_array, const RuntimeMethod* method)
{
	return ((  NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))NativeSlice_1_op_Implicit_m81484997E9A9BE628BF2E6EE3386E94720A881F9_gshared)(___0_array, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage::Convert(UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams,Unity.Collections.NativeSlice`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCpuImage_Convert_mFE71425F0E4FD4ADB839551590FE9728BA037EE1 (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___0_conversionParams, NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA ___1_destinationBuffer, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCpuImage_Dispose_m80B8CA56700DD5EB8A5613AA42F6F389D86A746B (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::get_outputDimensions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ConversionParams_get_outputDimensions_m6295F96DCE9B406AB6D79E8CD86A6FF388CF5035_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::get_outputFormat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConversionParams_get_outputFormat_m8CD52ADADE8FFE505A90E02D9BD6C7D9EE1C8715_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_textureFormat, bool ___3_mipChain, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::LoadRawTextureData<System.Byte>(Unity.Collections.NativeArray`1<T>)
inline void Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_data, const RuntimeMethod* method)
{
	((  void (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3_gshared)(__this, ___0_data, method);
}
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::Dispose()
inline void NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, const RuntimeMethod*))NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_gshared)(__this, method);
}
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Texture2D_GetPixels32_m48230192E7543765C1A517F251D1D9BFCFB58C3D (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.String ZXing.Result::get_Text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Result_get_Text_m65A52D001505F5311D513F3CDD86D3BB72103E89_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, const RuntimeMethod* method) ;
// System.Void QrCodeRecenter/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m98F4143DFD48809124764F77F87670308B42A42D (U3CU3Ec__DisplayClass10_0_t15FDD13257A03AE3C229ABF24885852FB1B82491* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Target>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m526CCFEBC03A459518F5001C34CE272E89902287 (Predicate_1_t20287AEA8C42BE98D3E87A6245361D7AF842FC70* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t20287AEA8C42BE98D3E87A6245361D7AF842FC70*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___0_object, ___1_method, method);
}
// T System.Collections.Generic.List`1<Target>::Find(System.Predicate`1<T>)
inline Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* List_1_Find_m830774A37EBA7DBAA97D47E4491E1314313EE720 (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* __this, Predicate_1_t20287AEA8C42BE98D3E87A6245361D7AF842FC70* ___0_match, const RuntimeMethod* method)
{
	return ((  Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* (*) (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A*, Predicate_1_t20287AEA8C42BE98D3E87A6245361D7AF842FC70*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___0_match, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARSession::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSession_Reset_mE905496B8400CB5BF1EB50A01C675771FCCF9A91 (ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Target>::.ctor()
inline void List_1__ctor_mE436230BB8A75F6CFA6557297F3D21AAB9BF282F (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void ZXing.BarcodeReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BarcodeReader__ctor_mCD1732A2FA39D8C385CDCDEF5348B60F02E7E30D (BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void Goal::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Goal_set_Name_m06817AF3FBB9CDFF807562805E0EA1378423FC3F_inline (Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Goal::set_QuestController(QuestController)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Goal_set_QuestController_m81706D6715BEC855A8261274FD54D5CA19CEDB04_inline (Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* __this, QuestController_t86F8F39B58F9D58247AE5F21D36144F374072CC5* ___0_value, const RuntimeMethod* method) ;
// QuestController Goal::get_QuestController()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuestController_t86F8F39B58F9D58247AE5F21D36144F374072CC5* Goal_get_QuestController_m205ABF80A5B721EB4A6E0C62C2392F78663524AD_inline (Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* __this, const RuntimeMethod* method) ;
// System.Void QuestController::CompleteGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestController_CompleteGoal_mD7390FD7F7067BB53E38608288CF9A3858A49473 (QuestController_t86F8F39B58F9D58247AE5F21D36144F374072CC5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Goal>::get_Item(System.Int32)
inline Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* List_1_get_Item_m0287BE1E6ED3AE32977D9344A2FACA0954E804B1 (List_1_t3E0D818B201F2B798A548F06D449F4CEBBDB15B3* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* (*) (List_1_t3E0D818B201F2B798A548F06D449F4CEBBDB15B3*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void Goal::setQuestController(QuestController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Goal_setQuestController_m035B6FFA33F0D64E40810E353F750A2B1CDA31C0 (Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* __this, QuestController_t86F8F39B58F9D58247AE5F21D36144F374072CC5* ___0_questController, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Goal>::get_Count()
inline int32_t List_1_get_Count_m1C4FDFB6E7B7CC78B49428488961C909B33089B4_inline (List_1_t3E0D818B201F2B798A548F06D449F4CEBBDB15B3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3E0D818B201F2B798A548F06D449F4CEBBDB15B3*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void QuestController::setGoalsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestController_setGoalsActive_m4FFF5BAFEFFC742B5C8A88194335EC985C61A50C (QuestController_t86F8F39B58F9D58247AE5F21D36144F374072CC5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Quest>::get_Item(System.Int32)
inline Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C (List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* (*) (List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.String Goal::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Goal_get_Name_m1660D411D047D516201CA50BC99AA1BAA9E8358B_inline (Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshPath::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath__ctor_mEA40BFC2492814FFC97A71C3AEC2154A9415C37F (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMesh::CalculatePath(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_CalculatePath_m15FF9A2E008A90375072B9293D290D9167E580E9 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_sourcePosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_targetPosition, int32_t ___2_areaMask, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___3_path, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::get_corners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_positions, const RuntimeMethod* method) ;
// System.Void SetNavTarget/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m43947A246E0BD3361512EB470F9F6D56ED7BDD0C (U3CU3Ec__DisplayClass8_0_tE6EEF1A20A9529CC7CD88933EDB06F395237A5E2* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData> TMPro.TMP_Dropdown::get_options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5 (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>::get_Item(System.Int32)
inline OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* List_1_get_Item_mBE3176F40529BACB1E6DBB68BDFD5894B04BD1BA (List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* (*) (List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.String TMPro.TMP_Dropdown/OptionData::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m2E822D5D50B597BFBA7AB3485EF15B526A726A1A_inline (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, float ___2_maxDistanceDelta, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// T UnityEngine.GameObject::GetComponent<TypeWriterController>()
inline TypeWriterController_tF5AA1AF5800EEB0BFF3722E0385A4CB326667E61* GameObject_GetComponent_TisTypeWriterController_tF5AA1AF5800EEB0BFF3722E0385A4CB326667E61_m42F58B739118B6088412C2F12E6A36F926A08A6D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TypeWriterController_tF5AA1AF5800EEB0BFF3722E0385A4CB326667E61* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Collections.IEnumerator TypeWriterController::SetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeWriterController_SetText_mF39453806AA9961BE26007B5D51C44749F32AE95 (TypeWriterController_tF5AA1AF5800EEB0BFF3722E0385A4CB326667E61* __this, String_t* ___0_textStr, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, float ___1_t, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TextAppearInteraction::CompleteGoalAfterTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextAppearInteraction_CompleteGoalAfterTime_m014562250D169F976C72468F0DF894C98ED42858 (TextAppearInteraction_tC5B4C8DEA5EDD5009DA3788CD69641F17EBCE68D* __this, float ___0_time, const RuntimeMethod* method) ;
// System.Void DebugDrawer::HandleLog(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugDrawer_HandleLog_mCC997A684524E2F2581041729E0B2063220F7CC3 (DebugDrawer_t54B7EE56BB73B8687EA2425763A12182A578E001* __this, String_t* ___0_logString, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method) ;
// System.Void TextAppearInteraction/<CompleteGoalAfterTime>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCompleteGoalAfterTimeU3Ed__8__ctor_mE796946ECC64231970C0B06CA5239DA51DE57403 (U3CCompleteGoalAfterTimeU3Ed__8_tB47B0EC036B74F4ABC04DB38EC239AE9FA15FC04* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void TypeWriterController/<SetText>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetTextU3Ed__5__ctor_m4807761B882B8053FAE11F4201B676E1050B3079 (U3CSetTextU3Ed__5_tBBD490A20451A6FB5153CC19210EEC514BB15446* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
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
// System.Void DebugDrawer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugDrawer_Start_m95E38D34E6C4D448BF8ECDD6C473A3C801B56F4D (DebugDrawer_t54B7EE56BB73B8687EA2425763A12182A578E001* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugDrawer_t54B7EE56BB73B8687EA2425763A12182A578E001_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance= this;
		((DebugDrawer_t54B7EE56BB73B8687EA2425763A12182A578E001_StaticFields*)il2cpp_codegen_static_fields_for(DebugDrawer_t54B7EE56BB73B8687EA2425763A12182A578E001_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((DebugDrawer_t54B7EE56BB73B8687EA2425763A12182A578E001_StaticFields*)il2cpp_codegen_static_fields_for(DebugDrawer_t54B7EE56BB73B8687EA2425763A12182A578E001_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void DebugDrawer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugDrawer_OnEnable_m6A661CE07C4FBDA201173F93E22D56D3DA85D77B (DebugDrawer_t54B7EE56BB73B8687EA2425763A12182A578E001* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugDrawer_HandleLog_mCC997A684524E2F2581041729E0B2063220F7CC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.logMessageReceived += HandleLog;
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_0 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_0, __this, (intptr_t)((void*)DebugDrawer_HandleLog_mCC997A684524E2F2581041729E0B2063220F7CC3_RuntimeMethod_var), NULL);
		Application_add_logMessageReceived_mE45B1D93B44D26B8FE979595D5346FC8C7B8E38C(L_0, NULL);
		// }
		return;
	}
}
// System.Void DebugDrawer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugDrawer_OnDisable_mCFB7DBCCFB4B857E886A957DC6A7A22C58C73EE9 (DebugDrawer_t54B7EE56BB73B8687EA2425763A12182A578E001* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DebugDrawer::HandleLog(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugDrawer_HandleLog_mCC997A684524E2F2581041729E0B2063220F7CC3 (DebugDrawer_t54B7EE56BB73B8687EA2425763A12182A578E001* __this, String_t* ___0_logString, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0274278A4477DCDCC0054D80DA18FD9A7B580624_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA00EF079E7D7CC3603EFD79E964A934A219F88E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2E1C1F56496EC28D7CE0792F1A51BCF9BB5806E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_GetEnumerator_m7DA1A757FB02DB4B272F5D55513996EEF639ADC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Enumerator_t378ECF0D349BD6618045A1C6FF5876F7C0FB0133 V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	{
		// if (type == LogType.Log) return;
		int32_t L_0 = ___2_type;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0005;
		}
	}
	{
		// if (type == LogType.Log) return;
		return;
	}

IL_0005:
	{
		// if (queue.Count >= maxLines) queue.Dequeue();
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_1 = __this->___queue_6;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_inline(L_1, Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_RuntimeMethod_var);
		int32_t L_3 = __this->___maxLines_5;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0024;
		}
	}
	{
		// if (queue.Count >= maxLines) queue.Dequeue();
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_4 = __this->___queue_6;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB(L_4, Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB_RuntimeMethod_var);
	}

IL_0024:
	{
		// queue.Enqueue(logString);
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_6 = __this->___queue_6;
		String_t* L_7 = ___0_logString;
		NullCheck(L_6);
		Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832(L_6, L_7, Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832_RuntimeMethod_var);
		// var builder = new StringBuilder();
		StringBuilder_t* L_8 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_8, NULL);
		V_0 = L_8;
		// foreach (string st in queue)
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_9 = __this->___queue_6;
		NullCheck(L_9);
		Enumerator_t378ECF0D349BD6618045A1C6FF5876F7C0FB0133 L_10;
		L_10 = Queue_1_GetEnumerator_m7DA1A757FB02DB4B272F5D55513996EEF639ADC5(L_9, Queue_1_GetEnumerator_m7DA1A757FB02DB4B272F5D55513996EEF639ADC5_RuntimeMethod_var);
		V_1 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0069:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0274278A4477DCDCC0054D80DA18FD9A7B580624((&V_1), Enumerator_Dispose_m0274278A4477DCDCC0054D80DA18FD9A7B580624_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005e_1;
			}

IL_0044_1:
			{
				// foreach (string st in queue)
				String_t* L_11;
				L_11 = Enumerator_get_Current_m2E1C1F56496EC28D7CE0792F1A51BCF9BB5806E8((&V_1), Enumerator_get_Current_m2E1C1F56496EC28D7CE0792F1A51BCF9BB5806E8_RuntimeMethod_var);
				V_2 = L_11;
				// builder.Append(st).Append("\n");
				StringBuilder_t* L_12 = V_0;
				String_t* L_13 = V_2;
				NullCheck(L_12);
				StringBuilder_t* L_14;
				L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, L_13, NULL);
				NullCheck(L_14);
				StringBuilder_t* L_15;
				L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
			}

IL_005e_1:
			{
				// foreach (string st in queue)
				bool L_16;
				L_16 = Enumerator_MoveNext_mA00EF079E7D7CC3603EFD79E964A934A219F88E8((&V_1), Enumerator_MoveNext_mA00EF079E7D7CC3603EFD79E964A934A219F88E8_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_0044_1;
				}
			}
			{
				goto IL_0077;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0077:
	{
		// currentText = builder.ToString();
		StringBuilder_t* L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		__this->___currentText_7 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentText_7), (void*)L_18);
		// }
		return;
	}
}
// System.Void DebugDrawer::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugDrawer_OnGUI_m96B42F219E14369F1840C121BFB1B85FAF05A820 (DebugDrawer_t54B7EE56BB73B8687EA2425763A12182A578E001* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GUI.Label(
		//    new Rect(
		//        5,                   // x, left offset
		//        Screen.height - 150, // y, bottom offset
		//        450f,                // width
		//        300f                 // height
		//    ),
		//    currentText,             // the display text
		//    GUI.skin.textArea        // use a multi-line text area
		// );
		int32_t L_0;
		L_0 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		memset((&L_1), 0, sizeof(L_1));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_1), (5.0f), ((float)((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)150)))), (450.0f), (300.0f), /*hidden argument*/NULL);
		String_t* L_2 = __this->___currentText_7;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_3;
		L_3 = GUI_get_skin_m97EC9EB4628B311C0DB7DF9FB19FAD82D6790A1B(NULL);
		NullCheck(L_3);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_4;
		L_4 = GUISkin_get_textArea_m0ECBC9D126D930490F96E100B27F245E555EB7D1(L_3, NULL);
		GUI_Label_m0D7BA53414421D71010DFF628EAA6CCCB3DE737E(L_1, L_2, L_4, NULL);
		// }
		return;
	}
}
// System.Void DebugDrawer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugDrawer__ctor_mC21E1FEDB141B34E736C704A11A8E7F62527D5B6 (DebugDrawer_t54B7EE56BB73B8687EA2425763A12182A578E001* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mDDCE4EE6A52F7D218F7DD54BDA1F1649606C70AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int maxLines = 8;
		__this->___maxLines_5 = 8;
		// private Queue<string> queue = new Queue<string>();
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_0 = (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*)il2cpp_codegen_object_new(Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_mDDCE4EE6A52F7D218F7DD54BDA1F1649606C70AE(L_0, Queue_1__ctor_mDDCE4EE6A52F7D218F7DD54BDA1F1649606C70AE_RuntimeMethod_var);
		__this->___queue_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queue_6), (void*)L_0);
		// private string currentText = "";
		__this->___currentText_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentText_7), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Void Interaction::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interaction_Start_m7B10B5113F0BC88D7F7BCBAFDD1F1AC847069BA4 (Interaction_t37B5E5551D5FF5D5363A246D228B88823A490295* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Interaction::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interaction_Update_m7EF08A5A9FA7281750DA04914F413BF7D453394D (Interaction_t37B5E5551D5FF5D5363A246D228B88823A490295* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE69C6A3A0BD2A9030375061C78273B2EABD411D0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// for (int i = 0; i < Input.touchCount; ++i) {
		V_0 = 0;
		goto IL_007c;
	}

IL_0004:
	{
		// if (Input.GetTouch(i).phase.Equals(TouchPhase.Began)) {
		int32_t L_0 = V_0;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(L_0, NULL);
		V_1 = L_1;
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_1), NULL);
		V_2 = L_2;
		int32_t L_3 = 0;
		RuntimeObject* L_4 = Box(TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E_il2cpp_TypeInfo_var, &L_3);
		Il2CppFakeBox<int32_t> L_5(TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E_il2cpp_TypeInfo_var, (&V_2));
		bool L_6;
		L_6 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), L_4, NULL);
		if (!L_6)
		{
			goto IL_0078;
		}
	}
	{
		// ray = Camera.main.ScreenPointToRay(Input.GetTouch(i).position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		int32_t L_8 = V_0;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_9;
		L_9 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(L_8, NULL);
		V_1 = L_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_10, NULL);
		NullCheck(L_7);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_12;
		L_12 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_7, L_11, NULL);
		__this->___ray_4 = L_12;
		// if (Physics.Raycast(ray, out hit)) {
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_13 = __this->___ray_4;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_14 = (&__this->___hit_5);
		bool L_15;
		L_15 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_13, L_14, NULL);
		if (!L_15)
		{
			goto IL_0078;
		}
	}
	{
		// hit.transform.gameObject.SendMessage("OnMouseDown");
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_16 = (&__this->___hit_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_16, NULL);
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
		NullCheck(L_18);
		GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E(L_18, _stringLiteralE69C6A3A0BD2A9030375061C78273B2EABD411D0, NULL);
	}

IL_0078:
	{
		// for (int i = 0; i < Input.touchCount; ++i) {
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007c:
	{
		// for (int i = 0; i < Input.touchCount; ++i) {
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Interaction::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interaction_OnMouseDown_m8DAAB3B094E314C7A49E4631E9A404D8C15CF4E1 (Interaction_t37B5E5551D5FF5D5363A246D228B88823A490295* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(hit.transform.gameObject);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_0 = (&__this->___hit_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_0, NULL);
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// }
		return;
	}
}
// System.Void Interaction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interaction__ctor_mAA056B1A5909FD56D69AF98AC67AC0F72E10F50E (Interaction_t37B5E5551D5FF5D5363A246D228B88823A490295* __this, const RuntimeMethod* method) 
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
// System.Void LookAtPlayer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtPlayer_Start_m0798FA323E6CAEB11E3FF543DF0EE518B5CF640C (LookAtPlayer_tBA315B22FE90398AE3DBC3CCA96D4F1F73B9C0B3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void LookAtPlayer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtPlayer_Update_m9EE58C1B9B2C9BF276C8C9CAECFDF7DA19C34BF5 (LookAtPlayer_tBA315B22FE90398AE3DBC3CCA96D4F1F73B9C0B3* __this, const RuntimeMethod* method) 
{
	{
		// transform.LookAt(Camera.main.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_0);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void LookAtPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtPlayer__ctor_m5A3A2CAFA412C0A18376DCE5C414F259704D869E (LookAtPlayer_tBA315B22FE90398AE3DBC3CCA96D4F1F73B9C0B3* __this, const RuntimeMethod* method) 
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
// System.Void QrCodeRecenter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_Update_m7F9B83D4B85EDBF9622187A7FBBD16C8F552BD21 (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5CDD26D5A515B3AC11ACBBCC2DD05D4BB02B660);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)32), NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// SetQrCodeRecenterTarget("Bedroom");
		QrCodeRecenter_SetQrCodeRecenterTarget_m463B72B4D4C980733F169BBFF1B1D7E9E8A873DD(__this, _stringLiteralB5CDD26D5A515B3AC11ACBBCC2DD05D4BB02B660, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void QrCodeRecenter::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_OnEnable_mD1D7D5F40B155C306E1818A862E4CCD33A54A51F (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QrCodeRecenter_OnCameraFrameReceived_m237F79EBAE06CE0FD717BD86C189C5EF4B210A99_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cameraManager.frameReceived += OnCameraFrameReceived;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = __this->___cameraManager_6;
		Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* L_1 = (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*)il2cpp_codegen_object_new(Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E(L_1, __this, (intptr_t)((void*)QrCodeRecenter_OnCameraFrameReceived_m237F79EBAE06CE0FD717BD86C189C5EF4B210A99_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARCameraManager_add_frameReceived_mB30CD73DB7A25A6E7BC486BA289DBB99CBA3B7A1(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void QrCodeRecenter::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_OnDisable_m13A17AC01263D9EE1E2DC0B2CAEA646DFE939BC8 (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QrCodeRecenter_OnCameraFrameReceived_m237F79EBAE06CE0FD717BD86C189C5EF4B210A99_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cameraManager.frameReceived -= OnCameraFrameReceived;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = __this->___cameraManager_6;
		Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* L_1 = (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*)il2cpp_codegen_object_new(Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E(L_1, __this, (intptr_t)((void*)QrCodeRecenter_OnCameraFrameReceived_m237F79EBAE06CE0FD717BD86C189C5EF4B210A99_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARCameraManager_remove_frameReceived_m8D9C301201B5079323169510656821F0286AA67D(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void QrCodeRecenter::OnCameraFrameReceived(UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_OnCameraFrameReceived_m237F79EBAE06CE0FD717BD86C189C5EF4B210A99 (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC ___0_eventArgs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBarcodeReader_t7C5A059E4DA3A0B4F7FA68ABD7131229C8DFF1AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_op_Implicit_m81484997E9A9BE628BF2E6EE3386E94720A881F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_3;
	memset((&V_3), 0, sizeof(V_3));
	Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* V_4 = NULL;
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if (!cameraManager.TryAcquireLatestCpuImage(out XRCpuImage image))
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = __this->___cameraManager_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = ARCameraManager_TryAcquireLatestCpuImage_m79247340777701FCF1E9CF274D1FC6EAFE0AA874(L_0, (&V_0), NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// var conversionParams = new XRCpuImage.ConversionParams
		// {
		//     // Get the entire image.
		//     inputRect = new RectInt(0, 0, image.width, image.height),
		// 
		//     // Downsample by 2.
		//     outputDimensions = new Vector2Int(image.width / 2, image.height / 2),
		// 
		//     // Choose RGBA format.
		//     outputFormat = TextureFormat.RGBA32,
		// 
		//     // Flip across the vertical axis (mirror image).
		//     transformation = XRCpuImage.Transformation.MirrorY
		// };
		il2cpp_codegen_initobj((&V_5), sizeof(ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62));
		int32_t L_2;
		L_2 = XRCpuImage_get_width_m176240EBEBBD41DC5AEF33F945C88E9492370AFA((&V_0), NULL);
		int32_t L_3;
		L_3 = XRCpuImage_get_height_m139489AD26B264FA46EE5659258BBF9C6584E5E9((&V_0), NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_4;
		memset((&L_4), 0, sizeof(L_4));
		RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42((&L_4), 0, 0, L_2, L_3, /*hidden argument*/NULL);
		ConversionParams_set_inputRect_m7965864AED4C5176D58F3766D6BBB35DFF7BC903_inline((&V_5), L_4, NULL);
		int32_t L_5;
		L_5 = XRCpuImage_get_width_m176240EBEBBD41DC5AEF33F945C88E9492370AFA((&V_0), NULL);
		int32_t L_6;
		L_6 = XRCpuImage_get_height_m139489AD26B264FA46EE5659258BBF9C6584E5E9((&V_0), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_7), ((int32_t)(L_5/2)), ((int32_t)(L_6/2)), /*hidden argument*/NULL);
		ConversionParams_set_outputDimensions_m97EC09EE536EA456A18894311BF75AC9D5A90A3B_inline((&V_5), L_7, NULL);
		ConversionParams_set_outputFormat_mA82EA0ECC19D14AECBA318B9B485D08CFB46A1F4_inline((&V_5), 4, NULL);
		ConversionParams_set_transformation_mBCE73B14CCE8A31A258C6B8F6104446A2D495A0F_inline((&V_5), 2, NULL);
		ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 L_8 = V_5;
		V_1 = L_8;
		// int size = image.GetConvertedDataSize(conversionParams);
		ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 L_9 = V_1;
		int32_t L_10;
		L_10 = XRCpuImage_GetConvertedDataSize_m1A292AE01390513BEA935CC4C19A0F8FD52341DE((&V_0), L_9, NULL);
		V_2 = L_10;
		// var buffer = new NativeArray<byte>(size, Allocator.Temp);
		int32_t L_11 = V_2;
		NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F((&V_3), L_11, 2, 1, NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		// image.Convert(conversionParams, buffer);
		ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 L_12 = V_1;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_13 = V_3;
		NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA L_14;
		L_14 = NativeSlice_1_op_Implicit_m81484997E9A9BE628BF2E6EE3386E94720A881F9(L_13, NativeSlice_1_op_Implicit_m81484997E9A9BE628BF2E6EE3386E94720A881F9_RuntimeMethod_var);
		XRCpuImage_Convert_mFE71425F0E4FD4ADB839551590FE9728BA037EE1((&V_0), L_12, L_14, NULL);
		// image.Dispose();
		XRCpuImage_Dispose_m80B8CA56700DD5EB8A5613AA42F6F389D86A746B((&V_0), NULL);
		// cameraImageTexture = new Texture2D(
		//     conversionParams.outputDimensions.x,
		//     conversionParams.outputDimensions.y,
		//     conversionParams.outputFormat,
		//     false);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_15;
		L_15 = ConversionParams_get_outputDimensions_m6295F96DCE9B406AB6D79E8CD86A6FF388CF5035_inline((&V_1), NULL);
		V_6 = L_15;
		int32_t L_16;
		L_16 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_6), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_17;
		L_17 = ConversionParams_get_outputDimensions_m6295F96DCE9B406AB6D79E8CD86A6FF388CF5035_inline((&V_1), NULL);
		V_6 = L_17;
		int32_t L_18;
		L_18 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_6), NULL);
		int32_t L_19;
		L_19 = ConversionParams_get_outputFormat_m8CD52ADADE8FFE505A90E02D9BD6C7D9EE1C8715_inline((&V_1), NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_20 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_20, L_16, L_18, L_19, (bool)0, NULL);
		__this->___cameraImageTexture_8 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraImageTexture_8), (void*)L_20);
		// cameraImageTexture.LoadRawTextureData(buffer);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = __this->___cameraImageTexture_8;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_22 = V_3;
		NullCheck(L_21);
		Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3(L_21, L_22, Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3_RuntimeMethod_var);
		// cameraImageTexture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_23 = __this->___cameraImageTexture_8;
		NullCheck(L_23);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_23, NULL);
		// buffer.Dispose();
		NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA((&V_3), NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var);
		// var result = reader.Decode(cameraImageTexture.GetPixels32(), cameraImageTexture.width, cameraImageTexture.height);
		RuntimeObject* L_24 = __this->___reader_9;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = __this->___cameraImageTexture_8;
		NullCheck(L_25);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_26;
		L_26 = Texture2D_GetPixels32_m48230192E7543765C1A517F251D1D9BFCFB58C3D(L_25, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_27 = __this->___cameraImageTexture_8;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_27);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_29 = __this->___cameraImageTexture_8;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_29);
		NullCheck(L_24);
		Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* L_31;
		L_31 = InterfaceFuncInvoker3< Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF*, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*, int32_t, int32_t >::Invoke(0 /* ZXing.Result ZXing.IBarcodeReader::Decode(UnityEngine.Color32[],System.Int32,System.Int32) */, IBarcodeReader_t7C5A059E4DA3A0B4F7FA68ABD7131229C8DFF1AB_il2cpp_TypeInfo_var, L_24, L_26, L_28, L_30);
		V_4 = L_31;
		// if (result != null)
		Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* L_32 = V_4;
		if (!L_32)
		{
			goto IL_011d;
		}
	}
	{
		// SetQrCodeRecenterTarget(result.Text);
		Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* L_33 = V_4;
		NullCheck(L_33);
		String_t* L_34;
		L_34 = Result_get_Text_m65A52D001505F5311D513F3CDD86D3BB72103E89_inline(L_33, NULL);
		QrCodeRecenter_SetQrCodeRecenterTarget_m463B72B4D4C980733F169BBFF1B1D7E9E8A873DD(__this, L_34, NULL);
	}

IL_011d:
	{
		// }
		return;
	}
}
// System.Void QrCodeRecenter::SetQrCodeRecenterTarget(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_SetQrCodeRecenterTarget_m463B72B4D4C980733F169BBFF1B1D7E9E8A873DD (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, String_t* ___0_targetText, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m830774A37EBA7DBAA97D47E4491E1314313EE720_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t20287AEA8C42BE98D3E87A6245361D7AF842FC70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CSetQrCodeRecenterTargetU3Eb__0_mE6E20400AE418FF8998623E50C552B2ED7104930_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_t15FDD13257A03AE3C229ABF24885852FB1B82491_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass10_0_t15FDD13257A03AE3C229ABF24885852FB1B82491* V_0 = NULL;
	Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass10_0_t15FDD13257A03AE3C229ABF24885852FB1B82491* L_0 = (U3CU3Ec__DisplayClass10_0_t15FDD13257A03AE3C229ABF24885852FB1B82491*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_t15FDD13257A03AE3C229ABF24885852FB1B82491_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass10_0__ctor_m98F4143DFD48809124764F77F87670308B42A42D(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass10_0_t15FDD13257A03AE3C229ABF24885852FB1B82491* L_1 = V_0;
		String_t* L_2 = ___0_targetText;
		NullCheck(L_1);
		L_1->___targetText_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___targetText_0), (void*)L_2);
		// Target currentTarget = navigationTargetObjects.Find(x => x.Name.ToLower().Equals(targetText.ToLower()));
		List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_3 = __this->___navigationTargetObjects_7;
		U3CU3Ec__DisplayClass10_0_t15FDD13257A03AE3C229ABF24885852FB1B82491* L_4 = V_0;
		Predicate_1_t20287AEA8C42BE98D3E87A6245361D7AF842FC70* L_5 = (Predicate_1_t20287AEA8C42BE98D3E87A6245361D7AF842FC70*)il2cpp_codegen_object_new(Predicate_1_t20287AEA8C42BE98D3E87A6245361D7AF842FC70_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_m526CCFEBC03A459518F5001C34CE272E89902287(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass10_0_U3CSetQrCodeRecenterTargetU3Eb__0_mE6E20400AE418FF8998623E50C552B2ED7104930_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_6;
		L_6 = List_1_Find_m830774A37EBA7DBAA97D47E4491E1314313EE720(L_3, L_5, List_1_Find_m830774A37EBA7DBAA97D47E4491E1314313EE720_RuntimeMethod_var);
		V_1 = L_6;
		// if (currentTarget != null)
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0073;
		}
	}
	{
		// session.Reset();
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_8 = __this->___session_4;
		NullCheck(L_8);
		ARSession_Reset_mE905496B8400CB5BF1EB50A01C675771FCCF9A91(L_8, NULL);
		// sessionOrigin.transform.position = currentTarget.PositionObject.transform.position;
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_9 = __this->___sessionOrigin_5;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_11 = V_1;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___PositionObject_1;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_14, NULL);
		// sessionOrigin.transform.rotation = currentTarget.PositionObject.transform.rotation;
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_15 = __this->___sessionOrigin_5;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_17 = V_1;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = L_17->___PositionObject_1;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		NullCheck(L_19);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_19, NULL);
		NullCheck(L_16);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_16, L_20, NULL);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void QrCodeRecenter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter__ctor_mA089181E2E59AC0F2538D1DF51D403784D4D5EDD (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE436230BB8A75F6CFA6557297F3D21AAB9BF282F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Target> navigationTargetObjects = new List<Target>();
		List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_0 = (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A*)il2cpp_codegen_object_new(List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE436230BB8A75F6CFA6557297F3D21AAB9BF282F(L_0, List_1__ctor_mE436230BB8A75F6CFA6557297F3D21AAB9BF282F_RuntimeMethod_var);
		__this->___navigationTargetObjects_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___navigationTargetObjects_7), (void*)L_0);
		// private IBarcodeReader reader = new BarcodeReader(); // create a barcode reader instance
		BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB* L_1 = (BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB*)il2cpp_codegen_object_new(BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BarcodeReader__ctor_mCD1732A2FA39D8C385CDCDEF5348B60F02E7E30D(L_1, NULL);
		__this->___reader_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_9), (void*)L_1);
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
// System.Void QrCodeRecenter/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m98F4143DFD48809124764F77F87670308B42A42D (U3CU3Ec__DisplayClass10_0_t15FDD13257A03AE3C229ABF24885852FB1B82491* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean QrCodeRecenter/<>c__DisplayClass10_0::<SetQrCodeRecenterTarget>b__0(Target)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass10_0_U3CSetQrCodeRecenterTargetU3Eb__0_mE6E20400AE418FF8998623E50C552B2ED7104930 (U3CU3Ec__DisplayClass10_0_t15FDD13257A03AE3C229ABF24885852FB1B82491* __this, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* ___0_x, const RuntimeMethod* method) 
{
	{
		// Target currentTarget = navigationTargetObjects.Find(x => x.Name.ToLower().Equals(targetText.ToLower()));
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_0 = ___0_x;
		NullCheck(L_0);
		String_t* L_1 = L_0->___Name_0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_1, NULL);
		String_t* L_3 = __this->___targetText_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_3, NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, L_4, NULL);
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
// System.String Goal::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Goal_get_Name_m1660D411D047D516201CA50BC99AA1BAA9E8358B (Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Goal::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Goal_set_Name_m06817AF3FBB9CDFF807562805E0EA1378423FC3F (Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// QuestController Goal::get_QuestController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuestController_t86F8F39B58F9D58247AE5F21D36144F374072CC5* Goal_get_QuestController_m205ABF80A5B721EB4A6E0C62C2392F78663524AD (Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* __this, const RuntimeMethod* method) 
{
	{
		// public QuestController QuestController { get; private set; }
		QuestController_t86F8F39B58F9D58247AE5F21D36144F374072CC5* L_0 = __this->___U3CQuestControllerU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Goal::set_QuestController(QuestController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Goal_set_QuestController_m81706D6715BEC855A8261274FD54D5CA19CEDB04 (Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* __this, QuestController_t86F8F39B58F9D58247AE5F21D36144F374072CC5* ___0_value, const RuntimeMethod* method) 
{
	{
		// public QuestController QuestController { get; private set; }
		QuestController_t86F8F39B58F9D58247AE5F21D36144F374072CC5* L_0 = ___0_value;
		__this->___U3CQuestControllerU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CQuestControllerU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Void Goal::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Goal_Start_mDF487E1EEE7A888569814C65D99C9B1668768126 (Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* __this, const RuntimeMethod* method) 
{
	{
		// Name = this.gameObject.name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		Goal_set_Name_m06817AF3FBB9CDFF807562805E0EA1378423FC3F_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Goal::setQuestController(QuestController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Goal_setQuestController_m035B6FFA33F0D64E40810E353F750A2B1CDA31C0 (Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* __this, QuestController_t86F8F39B58F9D58247AE5F21D36144F374072CC5* ___0_questController, const RuntimeMethod* method) 
{
	{
		// this.QuestController = questController;
		QuestController_t86F8F39B58F9D58247AE5F21D36144F374072CC5* L_0 = ___0_questController;
		Goal_set_QuestController_m81706D6715BEC855A8261274FD54D5CA19CEDB04_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Goal::CompleteGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Goal_CompleteGoal_m1C0E155327E9B1DD420BBD88994E90074C0C4EBE (Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* __this, const RuntimeMethod* method) 
{
	{
		// this.QuestController.CompleteGoal();
		QuestController_t86F8F39B58F9D58247AE5F21D36144F374072CC5* L_0;
		L_0 = Goal_get_QuestController_m205ABF80A5B721EB4A6E0C62C2392F78663524AD_inline(__this, NULL);
		NullCheck(L_0);
		QuestController_CompleteGoal_mD7390FD7F7067BB53E38608288CF9A3858A49473(L_0, NULL);
		// }
		return;
	}
}
// System.Void Goal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Goal__ctor_m45EA1A6CC66451C8E34FE091151CFE7D6576EDC2 (Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* __this, const RuntimeMethod* method) 
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
// System.Void Quest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quest__ctor_m8952599902E706C78A452CE9817AC64199B12621 (Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* __this, const RuntimeMethod* method) 
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
// System.Void QuestController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestController_Start_mC117A732084AF3FFAB4F52473EE09A95493A4738 (QuestController_t86F8F39B58F9D58247AE5F21D36144F374072CC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1C4FDFB6E7B7CC78B49428488961C909B33089B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0287BE1E6ED3AE32977D9344A2FACA0954E804B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0;i < GoalList.Count; i++) {
		V_0 = 0;
		goto IL_001a;
	}

IL_0004:
	{
		// GoalList[i].setQuestController(this);
		List_1_t3E0D818B201F2B798A548F06D449F4CEBBDB15B3* L_0 = __this->___GoalList_5;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* L_2;
		L_2 = List_1_get_Item_m0287BE1E6ED3AE32977D9344A2FACA0954E804B1(L_0, L_1, List_1_get_Item_m0287BE1E6ED3AE32977D9344A2FACA0954E804B1_RuntimeMethod_var);
		NullCheck(L_2);
		Goal_setQuestController_m035B6FFA33F0D64E40810E353F750A2B1CDA31C0(L_2, __this, NULL);
		// for (int i = 0;i < GoalList.Count; i++) {
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_001a:
	{
		// for (int i = 0;i < GoalList.Count; i++) {
		int32_t L_4 = V_0;
		List_1_t3E0D818B201F2B798A548F06D449F4CEBBDB15B3* L_5 = __this->___GoalList_5;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m1C4FDFB6E7B7CC78B49428488961C909B33089B4_inline(L_5, List_1_get_Count_m1C4FDFB6E7B7CC78B49428488961C909B33089B4_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// setGoalsActive();
		QuestController_setGoalsActive_m4FFF5BAFEFFC742B5C8A88194335EC985C61A50C(__this, NULL);
		// }
		return;
	}
}
// System.Void QuestController::setGoalsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestController_setGoalsActive_m4FFF5BAFEFFC742B5C8A88194335EC985C61A50C (QuestController_t86F8F39B58F9D58247AE5F21D36144F374072CC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1C4FDFB6E7B7CC78B49428488961C909B33089B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0287BE1E6ED3AE32977D9344A2FACA0954E804B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < GoalList.Count; i++)
		V_0 = 0;
		goto IL_0054;
	}

IL_0004:
	{
		// GoalList[i].gameObject.SetActive(this.QuestList[currentQuestIndex].Goal.Name.ToString().Equals(GoalList[i].Name));
		List_1_t3E0D818B201F2B798A548F06D449F4CEBBDB15B3* L_0 = __this->___GoalList_5;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* L_2;
		L_2 = List_1_get_Item_m0287BE1E6ED3AE32977D9344A2FACA0954E804B1(L_0, L_1, List_1_get_Item_m0287BE1E6ED3AE32977D9344A2FACA0954E804B1_RuntimeMethod_var);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* L_4 = __this->___QuestList_4;
		int32_t L_5 = __this->___currentQuestIndex_6;
		NullCheck(L_4);
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_6;
		L_6 = List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C(L_4, L_5, List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C_RuntimeMethod_var);
		NullCheck(L_6);
		Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* L_7 = L_6->___Goal_8;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Goal_get_Name_m1660D411D047D516201CA50BC99AA1BAA9E8358B_inline(L_7, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		List_1_t3E0D818B201F2B798A548F06D449F4CEBBDB15B3* L_10 = __this->___GoalList_5;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* L_12;
		L_12 = List_1_get_Item_m0287BE1E6ED3AE32977D9344A2FACA0954E804B1(L_10, L_11, List_1_get_Item_m0287BE1E6ED3AE32977D9344A2FACA0954E804B1_RuntimeMethod_var);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = Goal_get_Name_m1660D411D047D516201CA50BC99AA1BAA9E8358B_inline(L_12, NULL);
		NullCheck(L_9);
		bool L_14;
		L_14 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_9, L_13, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, L_14, NULL);
		// for (int i = 0; i < GoalList.Count; i++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0054:
	{
		// for (int i = 0; i < GoalList.Count; i++)
		int32_t L_16 = V_0;
		List_1_t3E0D818B201F2B798A548F06D449F4CEBBDB15B3* L_17 = __this->___GoalList_5;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m1C4FDFB6E7B7CC78B49428488961C909B33089B4_inline(L_17, List_1_get_Count_m1C4FDFB6E7B7CC78B49428488961C909B33089B4_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void QuestController::CompleteGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestController_CompleteGoal_mD7390FD7F7067BB53E38608288CF9A3858A49473 (QuestController_t86F8F39B58F9D58247AE5F21D36144F374072CC5* __this, const RuntimeMethod* method) 
{
	{
		// currentQuestIndex++;
		int32_t L_0 = __this->___currentQuestIndex_6;
		__this->___currentQuestIndex_6 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// setGoalsActive();
		QuestController_setGoalsActive_m4FFF5BAFEFFC742B5C8A88194335EC985C61A50C(__this, NULL);
		// }
		return;
	}
}
// Quest QuestController::GetActiveQuest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* QuestController_GetActiveQuest_m1A9224BBC2331924800B2E56DEDCA85176621C5F (QuestController_t86F8F39B58F9D58247AE5F21D36144F374072CC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.QuestList[currentQuestIndex];
		List_1_tC535F9CD686AF631ADF2E758CC14257CA84FBC88* L_0 = __this->___QuestList_4;
		int32_t L_1 = __this->___currentQuestIndex_6;
		NullCheck(L_0);
		Quest_tEC1246A2C0E042A3081F297279B59702FB449CB9* L_2;
		L_2 = List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C(L_0, L_1, List_1_get_Item_m3531CBD1C32E07D868F9C916895554A6C2CDB67C_RuntimeMethod_var);
		return L_2;
	}
}
// Goal QuestController::GetCurrentGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* QuestController_GetCurrentGoal_m295A559ACD6FB61D672010285AE32C6E9728DEBC (QuestController_t86F8F39B58F9D58247AE5F21D36144F374072CC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0287BE1E6ED3AE32977D9344A2FACA0954E804B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.GoalList[currentQuestIndex];
		List_1_t3E0D818B201F2B798A548F06D449F4CEBBDB15B3* L_0 = __this->___GoalList_5;
		int32_t L_1 = __this->___currentQuestIndex_6;
		NullCheck(L_0);
		Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* L_2;
		L_2 = List_1_get_Item_m0287BE1E6ED3AE32977D9344A2FACA0954E804B1(L_0, L_1, List_1_get_Item_m0287BE1E6ED3AE32977D9344A2FACA0954E804B1_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void QuestController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestController__ctor_m8C5682FE11802CA62DBA4C9737FCAFA1CD826482 (QuestController_t86F8F39B58F9D58247AE5F21D36144F374072CC5* __this, const RuntimeMethod* method) 
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
// System.Void SetNavTarget::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetNavTarget_Start_m90AD56EE9D598CB2007BC81E48BD75D46437A667 (SetNavTarget_t1D0FB5EAEB95EDE2DA845DB133DE96157A52A8A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// path = new NavMeshPath();
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_0 = (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7*)il2cpp_codegen_object_new(NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NavMeshPath__ctor_mEA40BFC2492814FFC97A71C3AEC2154A9415C37F(L_0, NULL);
		__this->___path_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___path_6), (void*)L_0);
		// line = transform.GetComponent<LineRenderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_2;
		L_2 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(L_1, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		__this->___line_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___line_7), (void*)L_2);
		// line.enabled = lineToggle;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_3 = __this->___line_7;
		bool L_4 = __this->___lineToggle_9;
		NullCheck(L_3);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void SetNavTarget::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetNavTarget_Update_m93FCFF95227820B945F100B71A7FA0BC80B2F100 (SetNavTarget_t1D0FB5EAEB95EDE2DA845DB133DE96157A52A8A0* __this, const RuntimeMethod* method) 
{
	{
		// if (lineToggle && targetPosition != Vector3.zero)
		bool L_0 = __this->___lineToggle_9;
		if (!L_0)
		{
			goto IL_0066;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___targetPosition_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_3;
		L_3 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0066;
		}
	}
	{
		// NavMesh.CalculatePath(transform.position, targetPosition, NavMesh.AllAreas, path);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___targetPosition_8;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_7 = __this->___path_6;
		bool L_8;
		L_8 = NavMesh_CalculatePath_m15FF9A2E008A90375072B9293D290D9167E580E9(L_5, L_6, (-1), L_7, NULL);
		// line.positionCount = path.corners.Length;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_9 = __this->___line_7;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_10 = __this->___path_6;
		NullCheck(L_10);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11;
		L_11 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_10, NULL);
		NullCheck(L_11);
		NullCheck(L_9);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_9, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		// line.SetPositions(path.corners);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_12 = __this->___line_7;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_13 = __this->___path_6;
		NullCheck(L_13);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14;
		L_14 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_13, NULL);
		NullCheck(L_12);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_12, L_14, NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void SetNavTarget::SetCurrentNavigationTarget(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetNavTarget_SetCurrentNavigationTarget_m4AE25A9D323D3475C437B02B210CCFD41C7175A1 (SetNavTarget_t1D0FB5EAEB95EDE2DA845DB133DE96157A52A8A0* __this, int32_t ___0_selectedValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m830774A37EBA7DBAA97D47E4491E1314313EE720_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBE3176F40529BACB1E6DBB68BDFD5894B04BD1BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t20287AEA8C42BE98D3E87A6245361D7AF842FC70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CSetCurrentNavigationTargetU3Eb__0_mD49FD4345756719774E93A4B52EC234C4AF3E223_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_tE6EEF1A20A9529CC7CD88933EDB06F395237A5E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_tE6EEF1A20A9529CC7CD88933EDB06F395237A5E2* V_0 = NULL;
	Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass8_0_tE6EEF1A20A9529CC7CD88933EDB06F395237A5E2* L_0 = (U3CU3Ec__DisplayClass8_0_tE6EEF1A20A9529CC7CD88933EDB06F395237A5E2*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_tE6EEF1A20A9529CC7CD88933EDB06F395237A5E2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass8_0__ctor_m43947A246E0BD3361512EB470F9F6D56ED7BDD0C(L_0, NULL);
		V_0 = L_0;
		// targetPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___targetPosition_8 = L_1;
		// string selectedText = navigationTargetDropDown.options[selectedValue].text;
		U3CU3Ec__DisplayClass8_0_tE6EEF1A20A9529CC7CD88933EDB06F395237A5E2* L_2 = V_0;
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_3 = __this->___navigationTargetDropDown_4;
		NullCheck(L_3);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_4;
		L_4 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_3, NULL);
		int32_t L_5 = ___0_selectedValue;
		NullCheck(L_4);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_6;
		L_6 = List_1_get_Item_mBE3176F40529BACB1E6DBB68BDFD5894B04BD1BA(L_4, L_5, List_1_get_Item_mBE3176F40529BACB1E6DBB68BDFD5894B04BD1BA_RuntimeMethod_var);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = OptionData_get_text_m2E822D5D50B597BFBA7AB3485EF15B526A726A1A_inline(L_6, NULL);
		NullCheck(L_2);
		L_2->___selectedText_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___selectedText_0), (void*)L_7);
		// Target currentTarget = navigationTargetObjects.Find(x => x.Name.ToLower().Equals(selectedText.ToLower()));
		List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_8 = __this->___navigationTargetObjects_5;
		U3CU3Ec__DisplayClass8_0_tE6EEF1A20A9529CC7CD88933EDB06F395237A5E2* L_9 = V_0;
		Predicate_1_t20287AEA8C42BE98D3E87A6245361D7AF842FC70* L_10 = (Predicate_1_t20287AEA8C42BE98D3E87A6245361D7AF842FC70*)il2cpp_codegen_object_new(Predicate_1_t20287AEA8C42BE98D3E87A6245361D7AF842FC70_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Predicate_1__ctor_m526CCFEBC03A459518F5001C34CE272E89902287(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CSetCurrentNavigationTargetU3Eb__0_mD49FD4345756719774E93A4B52EC234C4AF3E223_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_11;
		L_11 = List_1_Find_m830774A37EBA7DBAA97D47E4491E1314313EE720(L_8, L_10, List_1_Find_m830774A37EBA7DBAA97D47E4491E1314313EE720_RuntimeMethod_var);
		V_1 = L_11;
		// if (currentTarget != null)
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_12 = V_1;
		if (!L_12)
		{
			goto IL_005e;
		}
	}
	{
		// targetPosition = currentTarget.PositionObject.transform.position;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_13 = V_1;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_13->___PositionObject_1;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		__this->___targetPosition_8 = L_16;
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void SetNavTarget::ToggleVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetNavTarget_ToggleVisibility_mFEB5FBB404CBFBDDEDC7B1DA982CFAF444813952 (SetNavTarget_t1D0FB5EAEB95EDE2DA845DB133DE96157A52A8A0* __this, const RuntimeMethod* method) 
{
	{
		// lineToggle = !lineToggle;
		bool L_0 = __this->___lineToggle_9;
		__this->___lineToggle_9 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// line.enabled = lineToggle;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_1 = __this->___line_7;
		bool L_2 = __this->___lineToggle_9;
		NullCheck(L_1);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void SetNavTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetNavTarget__ctor_mEDC40F2AAE53CF12E7B94DE5543131592CCD9255 (SetNavTarget_t1D0FB5EAEB95EDE2DA845DB133DE96157A52A8A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE436230BB8A75F6CFA6557297F3D21AAB9BF282F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Target> navigationTargetObjects = new List<Target>();
		List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_0 = (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A*)il2cpp_codegen_object_new(List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE436230BB8A75F6CFA6557297F3D21AAB9BF282F(L_0, List_1__ctor_mE436230BB8A75F6CFA6557297F3D21AAB9BF282F_RuntimeMethod_var);
		__this->___navigationTargetObjects_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___navigationTargetObjects_5), (void*)L_0);
		// private Vector3 targetPosition = Vector3.zero; // current target position
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___targetPosition_8 = L_1;
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
// System.Void SetNavTarget/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m43947A246E0BD3361512EB470F9F6D56ED7BDD0C (U3CU3Ec__DisplayClass8_0_tE6EEF1A20A9529CC7CD88933EDB06F395237A5E2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean SetNavTarget/<>c__DisplayClass8_0::<SetCurrentNavigationTarget>b__0(Target)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass8_0_U3CSetCurrentNavigationTargetU3Eb__0_mD49FD4345756719774E93A4B52EC234C4AF3E223 (U3CU3Ec__DisplayClass8_0_tE6EEF1A20A9529CC7CD88933EDB06F395237A5E2* __this, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* ___0_x, const RuntimeMethod* method) 
{
	{
		// Target currentTarget = navigationTargetObjects.Find(x => x.Name.ToLower().Equals(selectedText.ToLower()));
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_0 = ___0_x;
		NullCheck(L_0);
		String_t* L_1 = L_0->___Name_0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_1, NULL);
		String_t* L_3 = __this->___selectedText_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_3, NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, L_4, NULL);
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
// System.Void Target::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Target__ctor_m5524C5EEF36FA6DB1E6B5BFA323B37E68635C216 (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void DamageTextController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageTextController_Start_m0E7024D02F01A69456F468E472B83EB27AD7259F (DamageTextController_t7879B02C62EA298731E377CF181B3678FEA4182E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// moveDirs = new Vector3[]{
		//     transform.up
		// };
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)1);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = L_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_2, NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_3);
		__this->___moveDirs_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moveDirs_7), (void*)L_1);
		// }
		return;
	}
}
// System.Void DamageTextController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageTextController_Update_mD6281E2A67F509A5C6D37477944050897D8091AC (DamageTextController_t7879B02C62EA298731E377CF181B3678FEA4182E* __this, const RuntimeMethod* method) 
{
	{
		// if(canMove) transform.position = Vector3.MoveTowards(transform.position, transform.position + moveDirs[0], moveAmt * (moveSpeed*Time.deltaTime));
		bool L_0 = __this->___canMove_8;
		if (!L_0)
		{
			goto IL_0052;
		}
	}
	{
		// if(canMove) transform.position = Vector3.MoveTowards(transform.position, transform.position + moveDirs[0], moveAmt * (moveSpeed*Time.deltaTime));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = __this->___moveDirs_7;
		NullCheck(L_6);
		int32_t L_7 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_8, NULL);
		float L_10 = __this->___moveAmt_5;
		float L_11 = __this->___moveSpeed_6;
		float L_12;
		L_12 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_3, L_9, ((float)il2cpp_codegen_multiply(L_10, ((float)il2cpp_codegen_multiply(L_11, L_12)))), NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_13, NULL);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void DamageTextController::SetTextAndMove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageTextController_SetTextAndMove_mCD21F9E6A50DF72CBD6583EEC88D5AEF785D0429 (DamageTextController_t7879B02C62EA298731E377CF181B3678FEA4182E* __this, String_t* ___0_textStr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myText = GetComponentInChildren<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0;
		L_0 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(__this, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		__this->___myText_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myText_4), (void*)L_0);
		// myText.text = textStr;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___myText_4;
		String_t* L_2 = ___0_textStr;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_2);
		// canMove = true;
		__this->___canMove_8 = (bool)1;
		// }
		return;
	}
}
// System.Void DamageTextController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageTextController__ctor_mA7583D758927A1CE1512606FF43CAC82563F4F6B (DamageTextController_t7879B02C62EA298731E377CF181B3678FEA4182E* __this, const RuntimeMethod* method) 
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
// System.Void TextAppearInteraction::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAppearInteraction_Start_m188CE8187D6684C40A79818B3867074C0F6D4944 (TextAppearInteraction_tC5B4C8DEA5EDD5009DA3788CD69641F17EBCE68D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TextAppearInteraction::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAppearInteraction_Update_m95799BE1B6C8051D4A8E41716964AE78CBE490D5 (TextAppearInteraction_tC5B4C8DEA5EDD5009DA3788CD69641F17EBCE68D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE69C6A3A0BD2A9030375061C78273B2EABD411D0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// for (int i = 0; i < Input.touchCount; ++i) {
		V_0 = 0;
		goto IL_007c;
	}

IL_0004:
	{
		// if (Input.GetTouch(i).phase.Equals(TouchPhase.Began)) {
		int32_t L_0 = V_0;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(L_0, NULL);
		V_1 = L_1;
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_1), NULL);
		V_2 = L_2;
		int32_t L_3 = 0;
		RuntimeObject* L_4 = Box(TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E_il2cpp_TypeInfo_var, &L_3);
		Il2CppFakeBox<int32_t> L_5(TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E_il2cpp_TypeInfo_var, (&V_2));
		bool L_6;
		L_6 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), L_4, NULL);
		if (!L_6)
		{
			goto IL_0078;
		}
	}
	{
		// ray = Camera.main.ScreenPointToRay(Input.GetTouch(i).position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		int32_t L_8 = V_0;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_9;
		L_9 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(L_8, NULL);
		V_1 = L_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_10, NULL);
		NullCheck(L_7);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_12;
		L_12 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_7, L_11, NULL);
		__this->___ray_7 = L_12;
		// if (Physics.Raycast(ray, out hit)) {
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_13 = __this->___ray_7;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_14 = (&__this->___hit_8);
		bool L_15;
		L_15 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_13, L_14, NULL);
		if (!L_15)
		{
			goto IL_0078;
		}
	}
	{
		// hit.transform.gameObject.SendMessage("OnMouseDown");
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_16 = (&__this->___hit_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_16, NULL);
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
		NullCheck(L_18);
		GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E(L_18, _stringLiteralE69C6A3A0BD2A9030375061C78273B2EABD411D0, NULL);
	}

IL_0078:
	{
		// for (int i = 0; i < Input.touchCount; ++i) {
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007c:
	{
		// for (int i = 0; i < Input.touchCount; ++i) {
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TextAppearInteraction::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAppearInteraction_OnMouseDown_m9564E898DC1FB0FB86D8A80D0243B3DB5C9B4491 (TextAppearInteraction_tC5B4C8DEA5EDD5009DA3788CD69641F17EBCE68D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugDrawer_t54B7EE56BB73B8687EA2425763A12182A578E001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTypeWriterController_tF5AA1AF5800EEB0BFF3722E0385A4CB326667E61_m42F58B739118B6088412C2F12E6A36F926A08A6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral457537F3C30CB51AF6430FADDB0791329907CBBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// var currObjPos = this.gameObject.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		V_0 = L_2;
		// currObjPos.y += 0.5f;
		float* L_3 = (&(&V_0)->___y_3);
		float* L_4 = L_3;
		float L_5 = *((float*)L_4);
		*((float*)L_4) = (float)((float)il2cpp_codegen_add(L_5, (0.5f)));
		// var textPos = currObjPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		V_1 = L_6;
		// GameObject newText = Instantiate(textPrefab, textPos, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___textPrefab_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_7, L_8, L_9, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_2 = L_10;
		// newText.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_2;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
		// StartCoroutine(newText.GetComponent<TypeWriterController>().SetText("Hi . . . Fuck off"));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_2;
		NullCheck(L_12);
		TypeWriterController_tF5AA1AF5800EEB0BFF3722E0385A4CB326667E61* L_13;
		L_13 = GameObject_GetComponent_TisTypeWriterController_tF5AA1AF5800EEB0BFF3722E0385A4CB326667E61_m42F58B739118B6088412C2F12E6A36F926A08A6D(L_12, GameObject_GetComponent_TisTypeWriterController_tF5AA1AF5800EEB0BFF3722E0385A4CB326667E61_m42F58B739118B6088412C2F12E6A36F926A08A6D_RuntimeMethod_var);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = TypeWriterController_SetText_mF39453806AA9961BE26007B5D51C44749F32AE95(L_13, _stringLiteral457537F3C30CB51AF6430FADDB0791329907CBBF, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_15;
		L_15 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_14, NULL);
		// Destroy(newText.gameObject, textKillTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_2;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_16, NULL);
		float L_18 = __this->___textKillTime_5;
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_17, L_18, NULL);
		// CompleteGoalAfterTime(10);
		RuntimeObject* L_19;
		L_19 = TextAppearInteraction_CompleteGoalAfterTime_m014562250D169F976C72468F0DF894C98ED42858(__this, (10.0f), NULL);
		// DebugDrawer.instance.HandleLog("", "", LogType.Error);
		DebugDrawer_t54B7EE56BB73B8687EA2425763A12182A578E001* L_20 = ((DebugDrawer_t54B7EE56BB73B8687EA2425763A12182A578E001_StaticFields*)il2cpp_codegen_static_fields_for(DebugDrawer_t54B7EE56BB73B8687EA2425763A12182A578E001_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_20);
		DebugDrawer_HandleLog_mCC997A684524E2F2581041729E0B2063220F7CC3(L_20, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator TextAppearInteraction::CompleteGoalAfterTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextAppearInteraction_CompleteGoalAfterTime_m014562250D169F976C72468F0DF894C98ED42858 (TextAppearInteraction_tC5B4C8DEA5EDD5009DA3788CD69641F17EBCE68D* __this, float ___0_time, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCompleteGoalAfterTimeU3Ed__8_tB47B0EC036B74F4ABC04DB38EC239AE9FA15FC04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCompleteGoalAfterTimeU3Ed__8_tB47B0EC036B74F4ABC04DB38EC239AE9FA15FC04* L_0 = (U3CCompleteGoalAfterTimeU3Ed__8_tB47B0EC036B74F4ABC04DB38EC239AE9FA15FC04*)il2cpp_codegen_object_new(U3CCompleteGoalAfterTimeU3Ed__8_tB47B0EC036B74F4ABC04DB38EC239AE9FA15FC04_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCompleteGoalAfterTimeU3Ed__8__ctor_mE796946ECC64231970C0B06CA5239DA51DE57403(L_0, 0, NULL);
		U3CCompleteGoalAfterTimeU3Ed__8_tB47B0EC036B74F4ABC04DB38EC239AE9FA15FC04* L_1 = L_0;
		float L_2 = ___0_time;
		NullCheck(L_1);
		L_1->___time_2 = L_2;
		return L_1;
	}
}
// System.Void TextAppearInteraction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAppearInteraction__ctor_m0B1E4298B4D5E89788B3953EAFAED6D876B9706F (TextAppearInteraction_tC5B4C8DEA5EDD5009DA3788CD69641F17EBCE68D* __this, const RuntimeMethod* method) 
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
// System.Void TextAppearInteraction/<CompleteGoalAfterTime>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCompleteGoalAfterTimeU3Ed__8__ctor_mE796946ECC64231970C0B06CA5239DA51DE57403 (U3CCompleteGoalAfterTimeU3Ed__8_tB47B0EC036B74F4ABC04DB38EC239AE9FA15FC04* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TextAppearInteraction/<CompleteGoalAfterTime>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCompleteGoalAfterTimeU3Ed__8_System_IDisposable_Dispose_m5A7D6FE64E7B4E4CB47BA89B04F12875C6988EFF (U3CCompleteGoalAfterTimeU3Ed__8_tB47B0EC036B74F4ABC04DB38EC239AE9FA15FC04* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TextAppearInteraction/<CompleteGoalAfterTime>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCompleteGoalAfterTimeU3Ed__8_MoveNext_m41FA5701E6855F1BFD87F2C295FFEB0DE6601BF3 (U3CCompleteGoalAfterTimeU3Ed__8_tB47B0EC036B74F4ABC04DB38EC239AE9FA15FC04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(time);
		float L_3 = __this->___time_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, L_3, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0031:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object TextAppearInteraction/<CompleteGoalAfterTime>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCompleteGoalAfterTimeU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9EE8A00CC46D3CB346CA61704995C85FF2DA2DE2 (U3CCompleteGoalAfterTimeU3Ed__8_tB47B0EC036B74F4ABC04DB38EC239AE9FA15FC04* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TextAppearInteraction/<CompleteGoalAfterTime>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCompleteGoalAfterTimeU3Ed__8_System_Collections_IEnumerator_Reset_mBF4C499679AC22BBE1F086FA001AF2B482C22D67 (U3CCompleteGoalAfterTimeU3Ed__8_tB47B0EC036B74F4ABC04DB38EC239AE9FA15FC04* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCompleteGoalAfterTimeU3Ed__8_System_Collections_IEnumerator_Reset_mBF4C499679AC22BBE1F086FA001AF2B482C22D67_RuntimeMethod_var)));
	}
}
// System.Object TextAppearInteraction/<CompleteGoalAfterTime>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCompleteGoalAfterTimeU3Ed__8_System_Collections_IEnumerator_get_Current_m32A3B291E5DE9927FE142D948275CE9A64BDF57F (U3CCompleteGoalAfterTimeU3Ed__8_tB47B0EC036B74F4ABC04DB38EC239AE9FA15FC04* __this, const RuntimeMethod* method) 
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
// System.Void TypeWriterController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeWriterController_Start_m805A2116C590EFB535E643D8A31FC7D8736AD3BE (TypeWriterController_tF5AA1AF5800EEB0BFF3722E0385A4CB326667E61* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TypeWriterController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeWriterController_Update_m73560B1ACA804985EC80A766EAA50D5915377951 (TypeWriterController_tF5AA1AF5800EEB0BFF3722E0385A4CB326667E61* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator TypeWriterController::SetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeWriterController_SetText_mF39453806AA9961BE26007B5D51C44749F32AE95 (TypeWriterController_tF5AA1AF5800EEB0BFF3722E0385A4CB326667E61* __this, String_t* ___0_textStr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSetTextU3Ed__5_tBBD490A20451A6FB5153CC19210EEC514BB15446_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSetTextU3Ed__5_tBBD490A20451A6FB5153CC19210EEC514BB15446* L_0 = (U3CSetTextU3Ed__5_tBBD490A20451A6FB5153CC19210EEC514BB15446*)il2cpp_codegen_object_new(U3CSetTextU3Ed__5_tBBD490A20451A6FB5153CC19210EEC514BB15446_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSetTextU3Ed__5__ctor_m4807761B882B8053FAE11F4201B676E1050B3079(L_0, 0, NULL);
		U3CSetTextU3Ed__5_tBBD490A20451A6FB5153CC19210EEC514BB15446* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CSetTextU3Ed__5_tBBD490A20451A6FB5153CC19210EEC514BB15446* L_2 = L_1;
		String_t* L_3 = ___0_textStr;
		NullCheck(L_2);
		L_2->___textStr_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___textStr_3), (void*)L_3);
		return L_2;
	}
}
// System.Void TypeWriterController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeWriterController__ctor_m702DDD781ADDE635F91344D073620928DD078049 (TypeWriterController_tF5AA1AF5800EEB0BFF3722E0385A4CB326667E61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float delay = 0.1f;
		__this->___delay_5 = (0.100000001f);
		// private string currText = "";
		__this->___currText_6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currText_6), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Void TypeWriterController/<SetText>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetTextU3Ed__5__ctor_m4807761B882B8053FAE11F4201B676E1050B3079 (U3CSetTextU3Ed__5_tBBD490A20451A6FB5153CC19210EEC514BB15446* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TypeWriterController/<SetText>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetTextU3Ed__5_System_IDisposable_Dispose_mAB319C5D2CEB213F74BDDA258D19870C9B4EA10E (U3CSetTextU3Ed__5_tBBD490A20451A6FB5153CC19210EEC514BB15446* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TypeWriterController/<SetText>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSetTextU3Ed__5_MoveNext_mDFF09377677BEC5DE76C305E406FD891C15823A7 (U3CSetTextU3Ed__5_tBBD490A20451A6FB5153CC19210EEC514BB15446* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TypeWriterController_tF5AA1AF5800EEB0BFF3722E0385A4CB326667E61* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TypeWriterController_tF5AA1AF5800EEB0BFF3722E0385A4CB326667E61* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0076;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// myText = GetComponentInChildren<TextMeshProUGUI>();
		TypeWriterController_tF5AA1AF5800EEB0BFF3722E0385A4CB326667E61* L_4 = V_1;
		TypeWriterController_tF5AA1AF5800EEB0BFF3722E0385A4CB326667E61* L_5 = V_1;
		NullCheck(L_5);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6;
		L_6 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_5, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___myText_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___myText_4), (void*)L_6);
		// for(int i = 0;i < textStr.Length; i++)
		__this->___U3CiU3E5__2_4 = 0;
		goto IL_008d;
	}

IL_0033:
	{
		// currText = textStr.Substring(0,i);
		TypeWriterController_tF5AA1AF5800EEB0BFF3722E0385A4CB326667E61* L_7 = V_1;
		String_t* L_8 = __this->___textStr_3;
		int32_t L_9 = __this->___U3CiU3E5__2_4;
		NullCheck(L_8);
		String_t* L_10;
		L_10 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_8, 0, L_9, NULL);
		NullCheck(L_7);
		L_7->___currText_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___currText_6), (void*)L_10);
		// myText.text = currText;
		TypeWriterController_tF5AA1AF5800EEB0BFF3722E0385A4CB326667E61* L_11 = V_1;
		NullCheck(L_11);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_12 = L_11->___myText_4;
		TypeWriterController_tF5AA1AF5800EEB0BFF3722E0385A4CB326667E61* L_13 = V_1;
		NullCheck(L_13);
		String_t* L_14 = L_13->___currText_6;
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, L_14);
		// yield return new WaitForSeconds(delay);
		TypeWriterController_tF5AA1AF5800EEB0BFF3722E0385A4CB326667E61* L_15 = V_1;
		NullCheck(L_15);
		float L_16 = L_15->___delay_5;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_17 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_17, L_16, NULL);
		__this->___U3CU3E2__current_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0076:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for(int i = 0;i < textStr.Length; i++)
		int32_t L_18 = __this->___U3CiU3E5__2_4;
		V_2 = L_18;
		int32_t L_19 = V_2;
		__this->___U3CiU3E5__2_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_008d:
	{
		// for(int i = 0;i < textStr.Length; i++)
		int32_t L_20 = __this->___U3CiU3E5__2_4;
		String_t* L_21 = __this->___textStr_3;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_21, NULL);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0033;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object TypeWriterController/<SetText>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSetTextU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m715418921789D14CEBF9BFB8BDCD2542ADF94576 (U3CSetTextU3Ed__5_tBBD490A20451A6FB5153CC19210EEC514BB15446* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TypeWriterController/<SetText>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetTextU3Ed__5_System_Collections_IEnumerator_Reset_m32681C7031F96EE4DBB61E1E1411D197918CDE6D (U3CSetTextU3Ed__5_tBBD490A20451A6FB5153CC19210EEC514BB15446* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSetTextU3Ed__5_System_Collections_IEnumerator_Reset_m32681C7031F96EE4DBB61E1E1411D197918CDE6D_RuntimeMethod_var)));
	}
}
// System.Object TypeWriterController/<SetText>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSetTextU3Ed__5_System_Collections_IEnumerator_get_Current_m2AF44334C689747C984A8F15C096FCBB2776009E (U3CSetTextU3Ed__5_tBBD490A20451A6FB5153CC19210EEC514BB15446* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_inputRect_m7965864AED4C5176D58F3766D6BBB35DFF7BC903_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_InputRect = value;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_0 = ___0_value;
		__this->___m_InputRect_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___1_y;
		__this->___m_Y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_outputDimensions_m97EC09EE536EA456A18894311BF75AC9D5A90A3B_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_OutputDimensions = value;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ___0_value;
		__this->___m_OutputDimensions_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_outputFormat_mA82EA0ECC19D14AECBA318B9B485D08CFB46A1F4_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_Format = value;
		int32_t L_0 = ___0_value;
		__this->___m_Format_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_transformation_mBCE73B14CCE8A31A258C6B8F6104446A2D495A0F_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_Transformation = value;
		int32_t L_0 = ___0_value;
		__this->___m_Transformation_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ConversionParams_get_outputDimensions_m6295F96DCE9B406AB6D79E8CD86A6FF388CF5035_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, const RuntimeMethod* method) 
{
	{
		// get => m_OutputDimensions;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = __this->___m_OutputDimensions_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConversionParams_get_outputFormat_m8CD52ADADE8FFE505A90E02D9BD6C7D9EE1C8715_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Format;
		int32_t L_0 = __this->___m_Format_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Result_get_Text_m65A52D001505F5311D513F3CDD86D3BB72103E89_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Goal_set_Name_m06817AF3FBB9CDFF807562805E0EA1378423FC3F_inline (Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Goal_set_QuestController_m81706D6715BEC855A8261274FD54D5CA19CEDB04_inline (Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* __this, QuestController_t86F8F39B58F9D58247AE5F21D36144F374072CC5* ___0_value, const RuntimeMethod* method) 
{
	{
		// public QuestController QuestController { get; private set; }
		QuestController_t86F8F39B58F9D58247AE5F21D36144F374072CC5* L_0 = ___0_value;
		__this->___U3CQuestControllerU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CQuestControllerU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuestController_t86F8F39B58F9D58247AE5F21D36144F374072CC5* Goal_get_QuestController_m205ABF80A5B721EB4A6E0C62C2392F78663524AD_inline (Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* __this, const RuntimeMethod* method) 
{
	{
		// public QuestController QuestController { get; private set; }
		QuestController_t86F8F39B58F9D58247AE5F21D36144F374072CC5* L_0 = __this->___U3CQuestControllerU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Goal_get_Name_m1660D411D047D516201CA50BC99AA1BAA9E8358B_inline (Goal_tA07CAE5E13E53F9356FD032516AB76F0E8B73DB3* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_4;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m2E822D5D50B597BFBA7AB3485EF15B526A726A1A_inline (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* __this, const RuntimeMethod* method) 
{
	{
		// public string text { get { return m_Text; } set { m_Text = value; } }
		String_t* L_0 = __this->___m_Text_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, float ___2_maxDistanceDelta, const RuntimeMethod* method) 
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
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_target;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_current;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_target;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_current;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___1_target;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_current;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___2_maxDistanceDelta;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___2_maxDistanceDelta;
		float L_22 = ___2_maxDistanceDelta;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___1_target;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___0_current;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___0_current;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___0_current;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
