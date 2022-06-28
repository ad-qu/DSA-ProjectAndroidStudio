#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<Sound>
struct Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
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
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
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
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// Sound[]
struct SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5;
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
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// AudioManager
struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B;
// UnityEngine.Audio.AudioMixerGroup
struct AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// BGSoundScript
struct BGSoundScript_tEA8A6F7B0B316322DCE80716924AA0625B75DC0B;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// BoardManager
struct BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA;
// BulletDie
struct BulletDie_t7B02E64F972A94C85F84FBB39676CC019BA34FB7;
// CameraMovement
struct CameraMovement_tF96219C0A51576E5F631C99326572CE14C492022;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CoinSystem
struct CoinSystem_t395C61906FB3167B363B7553CF25CC3E07F805B7;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DoNotDestroy
struct DoNotDestroy_t509534158702C1DCA85D208C05FD684D506F37B8;
// EnemyHP
struct EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E;
// EnemyPatrol
struct EnemyPatrol_t0979F349D65EED1831ED158D7EF995562DAC625D;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// HealthSystem
struct HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// InventorySystem
struct InventorySystem_t4E8479CCC27DAD6E7E985F52035780E1C95F81EB;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PlayerCollision
struct PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1;
// PlayerMovement
struct PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351;
// PlayerShoot
struct PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43;
// PointSystem
struct PointSystem_t651E7CE6F5F1EAD04F09E2626F0F08116E1ED624;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Sound
struct Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
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
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// AudioManager/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t7D97D1EBC2AE12371D5B558A851542A202D41BFC;
// AudioManager/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89;
// BoardManager/Count
struct Count_t35028C167B30D47ACF748289ED8A25C7A9CD0CB3;
// BulletDie/<Timer>d__5
struct U3CTimerU3Ed__5_t40F59C1EA693418DD3E882EECEFED1E5665F719C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// PlayerCollision/<GetHurt>d__25
struct U3CGetHurtU3Ed__25_tCE23B855AA771A236EAB6E9936C71921B3D53587;
// PlayerCollision/<ShowMessage>d__26
struct U3CShowMessageU3Ed__26_t56D968B3ED74217A6E30985E809E48A6C8BE3FF1;
// PlayerShoot/<Shoot1>d__14
struct U3CShoot1U3Ed__14_tF8E830FE47DD2966449C802E910F6A7B994290A0;
// PlayerShoot/<Shoot2>d__15
struct U3CShoot2U3Ed__15_tE8F23CF62304B3FB0CEC831BE889CB281D03BA35;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BGSoundScript_tEA8A6F7B0B316322DCE80716924AA0625B75DC0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BulletDie_t7B02E64F972A94C85F84FBB39676CC019BA34FB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoinSystem_t395C61906FB3167B363B7553CF25CC3E07F805B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointSystem_t651E7CE6F5F1EAD04F09E2626F0F08116E1ED624_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleInput_tEE9EB918A5CFBD4DD0FB0ABA51A7D5C9866A21D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetHurtU3Ed__25_tCE23B855AA771A236EAB6E9936C71921B3D53587_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShoot1U3Ed__14_tF8E830FE47DD2966449C802E910F6A7B994290A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShoot2U3Ed__15_tE8F23CF62304B3FB0CEC831BE889CB281D03BA35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShowMessageU3Ed__26_t56D968B3ED74217A6E30985E809E48A6C8BE3FF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTimerU3Ed__5_t40F59C1EA693418DD3E882EECEFED1E5665F719C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t7D97D1EBC2AE12371D5B558A851542A202D41BFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0E484327649BB8EC03EF677BE2A857A59C67E729;
IL2CPP_EXTERN_C String_t* _stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral332F3BBC69B280E1E9E6E8F0E59EE51FB8E6EA2C;
IL2CPP_EXTERN_C String_t* _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192;
IL2CPP_EXTERN_C String_t* _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E;
IL2CPP_EXTERN_C String_t* _stringLiteral4C459A33B11E3AB83E34CD4E146B521BA8ED64F5;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral5004BB2B79B894E5CC70CDBEA1DD320044EF8F3A;
IL2CPP_EXTERN_C String_t* _stringLiteral515679AB29628ECDDDD7FACA99AE118567A911D5;
IL2CPP_EXTERN_C String_t* _stringLiteral535A3526D250E62F3A4254300FD4DA71EB36F36E;
IL2CPP_EXTERN_C String_t* _stringLiteral55C55F06F540638BB0C811FD4FFC86C7127043FE;
IL2CPP_EXTERN_C String_t* _stringLiteral5AE45639C5F7DB8D717ED0292F5AAAFA3666E7D4;
IL2CPP_EXTERN_C String_t* _stringLiteral620B186569AF131C0B90443659189F9FE0DD8AB1;
IL2CPP_EXTERN_C String_t* _stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8;
IL2CPP_EXTERN_C String_t* _stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7;
IL2CPP_EXTERN_C String_t* _stringLiteral6E82A1DE8DD4EE10E1C3A213A1A62CF3EA79F602;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5;
IL2CPP_EXTERN_C String_t* _stringLiteral78FF4FA942C1B42A8039C2BA8E962E337610543C;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral81B6E477026EF768F836E8D052EF8CD0A02E8D81;
IL2CPP_EXTERN_C String_t* _stringLiteral84EE66A73B24F0E9CEE249A5A8879E93FCC66EB0;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8964425D5AFA567D9602F7E19CD9E3B473DEBE0C;
IL2CPP_EXTERN_C String_t* _stringLiteral8A96A1C91C60BC1DFDDD3434AAC6041AA566E9A4;
IL2CPP_EXTERN_C String_t* _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0;
IL2CPP_EXTERN_C String_t* _stringLiteralA2DC2839A1BEB829FDD23526BC9D732882819B4A;
IL2CPP_EXTERN_C String_t* _stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralBECAADA6F600B6AE5D9AB428314DAE17FE474130;
IL2CPP_EXTERN_C String_t* _stringLiteralC6BB6E51318A73F893E5ECC5FA841B3043DC4C87;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD79006BDB559C95F5F33E2DFF6B4FC10CE663E30;
IL2CPP_EXTERN_C String_t* _stringLiteralF202BD9C29F9FE8967D2598978C59BC250D49ECC;
IL2CPP_EXTERN_C String_t* _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mD3A41C4C52E64EEE0ED91D1995DDCA83047EDB87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7_m73A6E2D09CAA87DA44F0872922430ABC1A14FFFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mD8D79A38B1B77044341029CE43038AEBA28284DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetHurtU3Ed__25_System_Collections_IEnumerator_Reset_m597BE714057E81FE170FA5E1040775479F090061_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShoot1U3Ed__14_System_Collections_IEnumerator_Reset_m2E178AC2E5ACD3EB571B8FB4230D69F514BA81F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShoot2U3Ed__15_System_Collections_IEnumerator_Reset_m8534392F6D9F4AEFAD91BE555907A983A4E25DA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowMessageU3Ed__26_System_Collections_IEnumerator_Reset_m3CDABDED7560F1D776B76A09523FAF8CF5FFB824_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTimerU3Ed__5_System_Collections_IEnumerator_Reset_mE488ABA13603D37324374ADF42A2756142CAD314_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CPlayU3Eb__0_m23B2020F4BA0988B77604ECE1FA058F865EA5CE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CStopU3Eb__0_mEFB2723130567555BE300AC1D9D112EBC6FF826E_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

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

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// Sound
struct Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0  : public RuntimeObject
{
	// System.String Sound::name
	String_t* ___name_0;
	// UnityEngine.AudioClip Sound::clip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip_1;
	// UnityEngine.Audio.AudioMixerGroup Sound::mixer
	AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* ___mixer_2;
	// System.Single Sound::volume
	float ___volume_3;
	// System.Single Sound::pitch
	float ___pitch_4;
	// System.Boolean Sound::loop
	bool ___loop_5;
	// UnityEngine.AudioSource Sound::source
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___source_6;
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

// AudioManager/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t7D97D1EBC2AE12371D5B558A851542A202D41BFC  : public RuntimeObject
{
	// System.String AudioManager/<>c__DisplayClass3_0::sound
	String_t* ___sound_0;
};

// AudioManager/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89  : public RuntimeObject
{
	// System.String AudioManager/<>c__DisplayClass4_0::sound
	String_t* ___sound_0;
};

// BoardManager/Count
struct Count_t35028C167B30D47ACF748289ED8A25C7A9CD0CB3  : public RuntimeObject
{
	// System.Int32 BoardManager/Count::minimum
	int32_t ___minimum_0;
	// System.Int32 BoardManager/Count::maximum
	int32_t ___maximum_1;
};

// BulletDie/<Timer>d__5
struct U3CTimerU3Ed__5_t40F59C1EA693418DD3E882EECEFED1E5665F719C  : public RuntimeObject
{
	// System.Int32 BulletDie/<Timer>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BulletDie/<Timer>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// BulletDie BulletDie/<Timer>d__5::<>4__this
	BulletDie_t7B02E64F972A94C85F84FBB39676CC019BA34FB7* ___U3CU3E4__this_2;
};

// PlayerCollision/<GetHurt>d__25
struct U3CGetHurtU3Ed__25_tCE23B855AA771A236EAB6E9936C71921B3D53587  : public RuntimeObject
{
	// System.Int32 PlayerCollision/<GetHurt>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerCollision/<GetHurt>d__25::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerCollision PlayerCollision/<GetHurt>d__25::<>4__this
	PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* ___U3CU3E4__this_2;
};

// PlayerCollision/<ShowMessage>d__26
struct U3CShowMessageU3Ed__26_t56D968B3ED74217A6E30985E809E48A6C8BE3FF1  : public RuntimeObject
{
	// System.Int32 PlayerCollision/<ShowMessage>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerCollision/<ShowMessage>d__26::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerCollision PlayerCollision/<ShowMessage>d__26::<>4__this
	PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* ___U3CU3E4__this_2;
};

// PlayerShoot/<Shoot1>d__14
struct U3CShoot1U3Ed__14_tF8E830FE47DD2966449C802E910F6A7B994290A0  : public RuntimeObject
{
	// System.Int32 PlayerShoot/<Shoot1>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerShoot/<Shoot1>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerShoot PlayerShoot/<Shoot1>d__14::<>4__this
	PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* ___U3CU3E4__this_2;
};

// PlayerShoot/<Shoot2>d__15
struct U3CShoot2U3Ed__15_tE8F23CF62304B3FB0CEC831BE889CB281D03BA35  : public RuntimeObject
{
	// System.Int32 PlayerShoot/<Shoot2>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerShoot/<Shoot2>d__15::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerShoot PlayerShoot/<Shoot2>d__15::<>4__this
	PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* ___U3CU3E4__this_2;
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

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
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

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
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

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Audio.AudioMixerGroup
struct AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.Predicate`1<Sound>
struct Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AudioManager
struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Sound[] AudioManager::sounds
	SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* ___sounds_5;
};

struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields
{
	// AudioManager AudioManager::instance
	AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* ___instance_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BGSoundScript
struct BGSoundScript_tEA8A6F7B0B316322DCE80716924AA0625B75DC0B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct BGSoundScript_tEA8A6F7B0B316322DCE80716924AA0625B75DC0B_StaticFields
{
	// BGSoundScript BGSoundScript::instance
	BGSoundScript_tEA8A6F7B0B316322DCE80716924AA0625B75DC0B* ___instance_4;
};

// BoardManager
struct BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 BoardManager::rows
	int32_t ___rows_4;
	// System.Int32 BoardManager::columns
	int32_t ___columns_5;
	// UnityEngine.GameObject BoardManager::coin
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___coin_6;
	// UnityEngine.GameObject BoardManager::goomba
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___goomba_7;
	// UnityEngine.GameObject BoardManager::sky
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sky_8;
	// UnityEngine.GameObject BoardManager::ground
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ground_9;
	// UnityEngine.GameObject BoardManager::basicWall
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___basicWall_10;
	// UnityEngine.GameObject BoardManager::brick
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___brick_11;
	// UnityEngine.GameObject BoardManager::invisibleBlock
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___invisibleBlock_12;
	// UnityEngine.GameObject BoardManager::exit
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___exit_13;
	// UnityEngine.GameObject[] BoardManager::wall
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___wall_14;
	// UnityEngine.GameObject[] BoardManager::smallBush
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___smallBush_15;
	// UnityEngine.GameObject[] BoardManager::bigBush
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___bigBush_16;
	// UnityEngine.GameObject[] BoardManager::smallCloud
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___smallCloud_17;
	// UnityEngine.GameObject[] BoardManager::castle
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___castle_18;
	// UnityEngine.GameObject[] BoardManager::mountain
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___mountain_19;
};

// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// BulletDie
struct BulletDie_t7B02E64F972A94C85F84FBB39676CC019BA34FB7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject BulletDie::dieEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___dieEffect_5;
	// System.Single BulletDie::dieTime
	float ___dieTime_6;
};

struct BulletDie_t7B02E64F972A94C85F84FBB39676CC019BA34FB7_StaticFields
{
	// System.Int32 BulletDie::weaponType
	int32_t ___weaponType_4;
};

// CameraMovement
struct CameraMovement_tF96219C0A51576E5F631C99326572CE14C492022  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CameraMovement::Target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Target_4;
	// UnityEngine.Vector3 CameraMovement::TargetPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___TargetPos_5;
	// System.Single CameraMovement::Smoothing
	float ___Smoothing_6;
	// System.Single CameraMovement::CameraForward
	float ___CameraForward_7;
};

// CoinSystem
struct CoinSystem_t395C61906FB3167B363B7553CF25CC3E07F805B7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI CoinSystem::infoCoins
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___infoCoins_5;
	// TMPro.TextMeshProUGUI CoinSystem::endCoins
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___endCoins_6;
};

struct CoinSystem_t395C61906FB3167B363B7553CF25CC3E07F805B7_StaticFields
{
	// System.Single CoinSystem::coin
	float ___coin_4;
};

// DoNotDestroy
struct DoNotDestroy_t509534158702C1DCA85D208C05FD684D506F37B8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// EnemyHP
struct EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 EnemyHP::enemyHP
	int32_t ___enemyHP_4;
};

// EnemyPatrol
struct EnemyPatrol_t0979F349D65EED1831ED158D7EF995562DAC625D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single EnemyPatrol::speed
	float ___speed_4;
	// System.Boolean EnemyPatrol::movingRight
	bool ___movingRight_5;
	// UnityEngine.Transform EnemyPatrol::groundCheck
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___groundCheck_6;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String GameManager::informationFromAndroid
	String_t* ___informationFromAndroid_4;
	// UnityEngine.AndroidJavaClass GameManager::UnityPlayer
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___UnityPlayer_8;
	// UnityEngine.AndroidJavaObject GameManager::currentActivity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___currentActivity_9;
};

struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___instance_5;
	// BoardManager GameManager::boardScript
	BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* ___boardScript_6;
	// System.Int32 GameManager::level
	int32_t ___level_7;
};

// HealthSystem
struct HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image[] HealthSystem::hearts
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ___hearts_5;
};

struct HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_StaticFields
{
	// System.Int32 HealthSystem::health
	int32_t ___health_4;
};

// InventorySystem
struct InventorySystem_t4E8479CCC27DAD6E7E985F52035780E1C95F81EB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// PlayerCollision
struct PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 PlayerCollision::respawnPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___respawnPoint_4;
	// UnityEngine.GameObject PlayerCollision::fallDetector
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fallDetector_5;
	// UnityEngine.GameObject PlayerCollision::infoMenuScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___infoMenuScreen_6;
	// UnityEngine.GameObject PlayerCollision::pauseMenuScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseMenuScreen_7;
	// UnityEngine.GameObject PlayerCollision::endMenuScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___endMenuScreen_8;
	// UnityEngine.GameObject[] PlayerCollision::players
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___players_9;
	// UnityEngine.GameObject[] PlayerCollision::fallDetectors
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___fallDetectors_10;
	// UnityEngine.GameObject[] PlayerCollision::infoMenuScreens
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___infoMenuScreens_11;
	// UnityEngine.GameObject[] PlayerCollision::pauseMenuScreens
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___pauseMenuScreens_12;
	// UnityEngine.GameObject[] PlayerCollision::endMenuScreens
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___endMenuScreens_13;
	// TMPro.TextMeshProUGUI PlayerCollision::levelText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___levelText_16;
	// TMPro.TextMeshProUGUI PlayerCollision::coinEnd
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___coinEnd_17;
	// TMPro.TextMeshProUGUI PlayerCollision::pointsEnd
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___pointsEnd_18;
	// System.String PlayerCollision::informationToAndroid
	String_t* ___informationToAndroid_19;
	// UnityEngine.AndroidJavaClass PlayerCollision::UnityPlayer
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___UnityPlayer_20;
	// UnityEngine.AndroidJavaObject PlayerCollision::currentActivity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___currentActivity_21;
};

struct PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1_StaticFields
{
	// System.Boolean PlayerCollision::activeShield
	bool ___activeShield_14;
	// System.Boolean PlayerCollision::endGame
	bool ___endGame_15;
};

// PlayerMovement
struct PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PlayerMovement::speed
	float ___speed_4;
	// System.Single PlayerMovement::jumpPower
	float ___jumpPower_5;
	// UnityEngine.LayerMask PlayerMovement::groundLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___groundLayer_6;
	// UnityEngine.LayerMask PlayerMovement::wallLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___wallLayer_7;
	// UnityEngine.Rigidbody2D PlayerMovement::body
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___body_8;
	// UnityEngine.Animator PlayerMovement::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_9;
	// UnityEngine.BoxCollider2D PlayerMovement::boxCollider
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___boxCollider_10;
	// System.Single PlayerMovement::wallJumpCoolDown
	float ___wallJumpCoolDown_11;
	// System.Single PlayerMovement::horizontalInput
	float ___horizontalInput_12;
	// System.String PlayerMovement::informationToAndroid
	String_t* ___informationToAndroid_14;
	// UnityEngine.GameObject PlayerMovement::infoMenuScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___infoMenuScreen_15;
	// UnityEngine.GameObject PlayerMovement::pauseMenuScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseMenuScreen_16;
	// UnityEngine.AndroidJavaClass PlayerMovement::UnityPlayer
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___UnityPlayer_17;
	// UnityEngine.AndroidJavaObject PlayerMovement::currentActivity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___currentActivity_18;
};

struct PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_StaticFields
{
	// System.Int32 PlayerMovement::numberCoins
	int32_t ___numberCoins_13;
};

// PlayerShoot
struct PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean PlayerShoot::isShooting
	bool ___isShooting_4;
	// System.Single PlayerShoot::shootSpeed
	float ___shootSpeed_5;
	// System.Single PlayerShoot::shootTimer
	float ___shootTimer_6;
	// UnityEngine.Transform PlayerShoot::shootPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___shootPos_7;
	// UnityEngine.GameObject PlayerShoot::bullet
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bullet_8;
	// System.String PlayerShoot::toastText
	String_t* ___toastText_9;
	// UnityEngine.Animator PlayerShoot::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_12;
};

struct PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43_StaticFields
{
	// System.Boolean PlayerShoot::weapon1
	bool ___weapon1_10;
	// System.Boolean PlayerShoot::weapon2
	bool ___weapon2_11;
};

// PointSystem
struct PointSystem_t651E7CE6F5F1EAD04F09E2626F0F08116E1ED624  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI PointSystem::countdownText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___countdownText_4;
	// TMPro.TextMeshProUGUI PointSystem::endCountDownText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___endCountDownText_5;
};

struct PointSystem_t651E7CE6F5F1EAD04F09E2626F0F08116E1ED624_StaticFields
{
	// System.Single PointSystem::currentTime
	float ___currentTime_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Sound[]
struct SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5  : public RuntimeArray
{
	ALIGN_FIELD (8) Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* m_Items[1];

	inline Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
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
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78  : public RuntimeArray
{
	ALIGN_FIELD (8) Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* m_Items[1];

	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Array::Find<System.Object>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Find_TisRuntimeObject_m9CD4698A92B100B5B54C53DB03F738B7CD233F21_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match1, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Int32>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;

// System.Collections.IEnumerator BulletDie::Timer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BulletDie_Timer_m8C9558C6FC285B620AE7B861E66A62555CFEFD44 (BulletDie_t7B02E64F972A94C85F84FBB39676CC019BA34FB7* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<EnemyHP>()
inline EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* GameObject_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mD8D79A38B1B77044341029CE43038AEBA28284DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void EnemyHP::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHP_TakeDamage_m9BA94C087AFDE442BA4484C66D05D464949CADE5 (EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* __this, int32_t ___damageAmout0, const RuntimeMethod* method) ;
// System.Void BulletDie::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletDie_Die_m026C44D3AA8599F46D849EC22D24D19C7F8141F9 (BulletDie_t7B02E64F972A94C85F84FBB39676CC019BA34FB7* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void BulletDie/<Timer>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__5__ctor_m7F78DF0AC387D61083F043D56E5162602671B0DC (U3CTimerU3Ed__5_t40F59C1EA693418DD3E882EECEFED1E5665F719C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_down_m744DCF40A3F17B76B9C084145D6E66AC0DE3D5CD_inline (const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA Physics2D_Raycast_m274780A393AF3EEAB93D4DAF2A5DD95706D5A2CB (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction1, float ___distance2, const RuntimeMethod* method) ;
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_outputAudioMixerGroup(UnityEngine.Audio.AudioMixerGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_outputAudioMixerGroup_m10D0A0EAE270424CD2F3BB960CFAA158D9FC24CF (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void AudioManager/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m9A4BA6BE43B4E5D7649B229BD0E20C9E42DE0972 (U3CU3Ec__DisplayClass3_0_t7D97D1EBC2AE12371D5B558A851542A202D41BFC* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Sound>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mD508F46C736E97AC65AEC65E413880D3C2A905BD (Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Array::Find<Sound>(T[],System.Predicate`1<T>)
inline Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mD3A41C4C52E64EEE0ED91D1995DDCA83047EDB87 (SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* ___array0, Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A* ___match1, const RuntimeMethod* method)
{
	return ((  Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* (*) (SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5*, Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A*, const RuntimeMethod*))Array_Find_TisRuntimeObject_m9CD4698A92B100B5B54C53DB03F738B7CD233F21_gshared)(___array0, ___match1, method);
}
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void AudioManager/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m3DD23E7EFFDED69B9EAC81FE50CDC950F4B7EC9D (U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void BoardManager::PlacingCoins(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_PlacingCoins_m6FDC5559A592DA9FA3FB39FBC8B9C8EB0BECE6FD (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___level0, const RuntimeMethod* method) ;
// System.Void BoardManager::GenerateEnemies(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_GenerateEnemies_m5E125128B858CD3465C018045BF5D227942E0771 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___level0, const RuntimeMethod* method) ;
// System.Void BoardManager::PlacingDecorations(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_PlacingDecorations_mD0078FADB7D000A0EAC673D219C353AC6CD8A3C1 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___level0, const RuntimeMethod* method) ;
// System.Void BoardManager::BuildingInvisibleWallAndExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_BuildingInvisibleWallAndExit_m085AE4AB4D3589DDE701DD0AEF13EC3EDA06EE83 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) ;
// System.Void BoardManager::PlacingClouds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_PlacingClouds_m27388B1D9846DD92421A10730322F57DCA508781 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// System.String[] System.String::Split(System.String,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB (String_t* __this, String_t* ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mF408441B7F1DCAE57A286EC80B594E54C872EC05 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<BoardManager>()
inline BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* Component_GetComponent_TisBoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7_m73A6E2D09CAA87DA44F0872922430ABC1A14FFFD (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void GameManager::InitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_InitGame_mDF7FADBA0B49B6C48C3F0D2333F55208ED9023E9 (const RuntimeMethod* method) ;
// System.Void BoardManager::SetupScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_SetupScene_m605D571EEB0DA94B6ABE05E8ACDD0A1DD9DE4CE8 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___level0, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void AudioManager::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, String_t* ___sound0, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlayerCollision::ShowMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerCollision_ShowMessage_m9144D402C026D322606D9E1CD3C8012E160B159E (PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void PlayerCollision::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollision_End_mA022F018EF65B38C26CE34023B62801123DB4F87 (PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Collision2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Collision2D_get_transform_mC59737F246B2DAFF2AB4F6322664C87B28605CC7 (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlayerCollision::GetHurt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerCollision_GetHurt_m6C3C1C67F65D0E18B397ACCF3A04F118C324A2C6 (PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void PlayerCollision/<GetHurt>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetHurtU3Ed__25__ctor_mC6936B4D72262112FDD558691125173399866A64 (U3CGetHurtU3Ed__25_tCE23B855AA771A236EAB6E9936C71921B3D53587* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void PlayerCollision/<ShowMessage>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowMessageU3Ed__26__ctor_mCCC483FDFE5FB3AD3B53E4AF31C66E9D6DA9A007 (U3CShowMessageU3Ed__26_t56D968B3ED74217A6E30985E809E48A6C8BE3FF1* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Physics2D::IgnoreLayerCollision(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics2D_IgnoreLayerCollision_mCA5F43703A7D1F84AF29F5B69E5161E8735FD1E1 (int32_t ___layer10, int32_t ___layer21, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, float ___weight1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Physics2D::IgnoreLayerCollision(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics2D_IgnoreLayerCollision_m347DECEEE192BDFF01A56AB6C7E79985D091A448 (int32_t ___layer10, int32_t ___layer21, bool ___ignore2, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Single SimpleInput::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SimpleInput_GetAxis_m441D6292BE9EAFBE6D7393FC2B5EA1D2385B1380 (String_t* ___axis0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Boolean PlayerMovement::isGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMovement_isGrounded_mE2B56FF688E68521E9E26F0740FE913021175F13 (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Boolean PlayerMovement::onWall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMovement_onWall_mCB668AFE77B51A812DFF6EF082A65CB733CE33BA (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_gravityScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void PlayerMovement::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Jump_mCA26EA1D2892C47F04966998153F3FD4FFBCEB43 (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline (float ___f0, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Collider2D::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::BoxCast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA Physics2D_BoxCast_m40F89A8F56F51A2369B918CD84F7548C1A47BBC9 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size1, float ___angle2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction3, float ___distance4, int32_t ___layerMask5, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.Void PlayerShoot::Attack1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerShoot_Attack1_m9B76967E6C7C62A05B00A97AFF1E5B325ADB2B23 (PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* __this, const RuntimeMethod* method) ;
// System.Void PlayerShoot::Attack2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerShoot_Attack2_m84F520E70F07C393F9ADD26FE21F8224BB70C6AD (PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlayerShoot::Shoot1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerShoot_Shoot1_mF87DA3F0CC0B5C8799BF54F4067F5A2CC66EF07A (PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* __this, const RuntimeMethod* method) ;
// System.Void PlayerShoot::onShowToastClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerShoot_onShowToastClicked_mC2C7A3A5BDA8DF0C762F0801C7C3A48FE1B4473D (PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlayerShoot::Shoot2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerShoot_Shoot2_m95EBCED3145AFF9076B57E2CB7FD07EB3EB7D3FF (PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* __this, const RuntimeMethod* method) ;
// System.Void PlayerShoot/<Shoot1>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShoot1U3Ed__14__ctor_m1E0BA435EA58A4B78B5B520A9022AC934767BB6B (U3CShoot1U3Ed__14_tF8E830FE47DD2966449C802E910F6A7B994290A0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void PlayerShoot/<Shoot2>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShoot2U3Ed__15__ctor_m1E6B601DD3F504F0AC2A6DE9C5701C288CEDD0B6 (U3CShoot2U3Ed__15_tE8F23CF62304B3FB0CEC831BE889CB281D03BA35* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void PlayerShoot::showAndroidToast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerShoot_showAndroidToast_mFB8BED13EF2064A0112D80ACB917AEF6CCBDF0F2 (PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* __this, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Int32>(System.String)
inline int32_t AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC_gshared)(__this, ___fieldName0, method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___methodName0, ___args1, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 PlayerShoot::<Shoot1>g__direction|14_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerShoot_U3CShoot1U3Eg__directionU7C14_0_m8B2F5F18791F9BD7BB1D59D8D40D016CEED90ABE (PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088 (const RuntimeMethod* method) ;
// System.Int32 PlayerShoot::<Shoot2>g__direction|15_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerShoot_U3CShoot2U3Eg__directionU7C15_0_mA05FCB7E38A595CE04C7F6F0A3AA187228D6A769 (PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
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
// System.Void BulletDie::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletDie_Start_mA41CD271F76BFE212C0CEC61BDED61D802B800A1 (BulletDie_t7B02E64F972A94C85F84FBB39676CC019BA34FB7* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Timer());
		RuntimeObject* L_0;
		L_0 = BulletDie_Timer_m8C9558C6FC285B620AE7B861E66A62555CFEFD44(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void BulletDie::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletDie_OnCollisionEnter2D_m73B7F2922A7358EEDFEA870F42E825F54A301CB8 (BulletDie_t7B02E64F972A94C85F84FBB39676CC019BA34FB7* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BulletDie_t7B02E64F972A94C85F84FBB39676CC019BA34FB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mD8D79A38B1B77044341029CE43038AEBA28284DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject collisionGameObject = collision.gameObject;
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		V_0 = L_1;
		// if(collisionGameObject.tag == "Enemy")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_2, NULL);
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		// if(weaponType == 1)
		int32_t L_5 = ((BulletDie_t7B02E64F972A94C85F84FBB39676CC019BA34FB7_StaticFields*)il2cpp_codegen_static_fields_for(BulletDie_t7B02E64F972A94C85F84FBB39676CC019BA34FB7_il2cpp_TypeInfo_var))->___weaponType_4;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}
	{
		// collisionGameObject.GetComponent<EnemyHP>().TakeDamage(1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		NullCheck(L_6);
		EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* L_7;
		L_7 = GameObject_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mD8D79A38B1B77044341029CE43038AEBA28284DC(L_6, GameObject_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mD8D79A38B1B77044341029CE43038AEBA28284DC_RuntimeMethod_var);
		NullCheck(L_7);
		EnemyHP_TakeDamage_m9BA94C087AFDE442BA4484C66D05D464949CADE5(L_7, 1, NULL);
		goto IL_003b;
	}

IL_002f:
	{
		// collisionGameObject.GetComponent<EnemyHP>().TakeDamage(2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		NullCheck(L_8);
		EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* L_9;
		L_9 = GameObject_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mD8D79A38B1B77044341029CE43038AEBA28284DC(L_8, GameObject_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mD8D79A38B1B77044341029CE43038AEBA28284DC_RuntimeMethod_var);
		NullCheck(L_9);
		EnemyHP_TakeDamage_m9BA94C087AFDE442BA4484C66D05D464949CADE5(L_9, 2, NULL);
	}

IL_003b:
	{
		// Die();
		BulletDie_Die_m026C44D3AA8599F46D849EC22D24D19C7F8141F9(__this, NULL);
		return;
	}

IL_0042:
	{
		// else if(collisionGameObject.name != "Player")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		bool L_12;
		L_12 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_11, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		// Die();
		BulletDie_Die_m026C44D3AA8599F46D849EC22D24D19C7F8141F9(__this, NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator BulletDie::Timer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BulletDie_Timer_m8C9558C6FC285B620AE7B861E66A62555CFEFD44 (BulletDie_t7B02E64F972A94C85F84FBB39676CC019BA34FB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTimerU3Ed__5_t40F59C1EA693418DD3E882EECEFED1E5665F719C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTimerU3Ed__5_t40F59C1EA693418DD3E882EECEFED1E5665F719C* L_0 = (U3CTimerU3Ed__5_t40F59C1EA693418DD3E882EECEFED1E5665F719C*)il2cpp_codegen_object_new(U3CTimerU3Ed__5_t40F59C1EA693418DD3E882EECEFED1E5665F719C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTimerU3Ed__5__ctor_m7F78DF0AC387D61083F043D56E5162602671B0DC(L_0, 0, NULL);
		U3CTimerU3Ed__5_t40F59C1EA693418DD3E882EECEFED1E5665F719C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void BulletDie::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletDie_Die_m026C44D3AA8599F46D849EC22D24D19C7F8141F9 (BulletDie_t7B02E64F972A94C85F84FBB39676CC019BA34FB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(dieEffect != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___dieEffect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// Instantiate(dieEffect, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___dieEffect_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_2, L_4, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
	}

IL_002a:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_7, NULL);
		// }
		return;
	}
}
// System.Void BulletDie::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletDie__ctor_m807A15A16CCF0899AA620CCED820F5ED6AB3EE72 (BulletDie_t7B02E64F972A94C85F84FBB39676CC019BA34FB7* __this, const RuntimeMethod* method) 
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
// System.Void BulletDie/<Timer>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__5__ctor_m7F78DF0AC387D61083F043D56E5162602671B0DC (U3CTimerU3Ed__5_t40F59C1EA693418DD3E882EECEFED1E5665F719C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void BulletDie/<Timer>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__5_System_IDisposable_Dispose_mD5F9874228EB4A051CDB28BC18590219C79EB15E (U3CTimerU3Ed__5_t40F59C1EA693418DD3E882EECEFED1E5665F719C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean BulletDie/<Timer>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTimerU3Ed__5_MoveNext_m7F0208966CA2853FBDFFB561C9C909A6287D5A30 (U3CTimerU3Ed__5_t40F59C1EA693418DD3E882EECEFED1E5665F719C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BulletDie_t7B02E64F972A94C85F84FBB39676CC019BA34FB7* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BulletDie_t7B02E64F972A94C85F84FBB39676CC019BA34FB7* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(dieTime);
		BulletDie_t7B02E64F972A94C85F84FBB39676CC019BA34FB7* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___dieTime_6;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object BulletDie/<Timer>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTimerU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m14BBC102FE5E99947ED85DB6B4062DF75AAC1CB0 (U3CTimerU3Ed__5_t40F59C1EA693418DD3E882EECEFED1E5665F719C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void BulletDie/<Timer>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__5_System_Collections_IEnumerator_Reset_mE488ABA13603D37324374ADF42A2756142CAD314 (U3CTimerU3Ed__5_t40F59C1EA693418DD3E882EECEFED1E5665F719C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTimerU3Ed__5_System_Collections_IEnumerator_Reset_mE488ABA13603D37324374ADF42A2756142CAD314_RuntimeMethod_var)));
	}
}
// System.Object BulletDie/<Timer>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTimerU3Ed__5_System_Collections_IEnumerator_get_Current_mE92181050F1CA007ADC782275658590F748C1F9E (U3CTimerU3Ed__5_t40F59C1EA693418DD3E882EECEFED1E5665F719C* __this, const RuntimeMethod* method) 
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
// System.Void DoNotDestroy::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoNotDestroy_Awake_m58681D7C2C95FDB6D354E3DD8996CDACF3A637DE (DoNotDestroy_t509534158702C1DCA85D208C05FD684D506F37B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_0, NULL);
		// }
		return;
	}
}
// System.Void DoNotDestroy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoNotDestroy__ctor_mCFAA815591F1A9EB128E49BB09358C915DD105F2 (DoNotDestroy_t509534158702C1DCA85D208C05FD684D506F37B8* __this, const RuntimeMethod* method) 
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
// System.Void EnemyHP::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHP_TakeDamage_m9BA94C087AFDE442BA4484C66D05D464949CADE5 (EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* __this, int32_t ___damageAmout0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemyHP -= damageAmout;
		int32_t L_0 = __this->___enemyHP_4;
		int32_t L_1 = ___damageAmout0;
		__this->___enemyHP_4 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// if(enemyHP <= 0)
		int32_t L_2 = __this->___enemyHP_4;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void EnemyHP::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHP__ctor_m2A18417A936A42002D14F08A999EBB8142789167 (EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* __this, const RuntimeMethod* method) 
{
	{
		// public int enemyHP = 4;
		__this->___enemyHP_4 = 4;
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
// System.Void EnemyPatrol::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyPatrol_Update_mA5F1DF5DD099B7675945ADCE5C7CD731F671138F (EnemyPatrol_t0979F349D65EED1831ED158D7EF995562DAC625D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// transform.Translate(Vector2.right * speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline(NULL);
		float L_2 = __this->___speed_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_5, NULL);
		NullCheck(L_0);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_0, L_6, NULL);
		// RaycastHit2D groundInfo = Physics2D.Raycast(groundCheck.position, Vector2.down, 2f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___groundCheck_6;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_get_down_m744DCF40A3F17B76B9C084145D6E66AC0DE3D5CD_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_11;
		L_11 = Physics2D_Raycast_m274780A393AF3EEAB93D4DAF2A5DD95706D5A2CB(L_9, L_10, (2.0f), NULL);
		V_0 = L_11;
		// if(groundInfo.collider == false)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_12;
		L_12 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_12, NULL);
		if (L_13)
		{
			goto IL_00ad;
		}
	}
	{
		// if(movingRight == true)
		bool L_14 = __this->___movingRight_5;
		if (!L_14)
		{
			goto IL_0087;
		}
	}
	{
		// transform.eulerAngles = new Vector3(0, -180, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), (0.0f), (-180.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_15, L_16, NULL);
		// movingRight = false;
		__this->___movingRight_5 = (bool)0;
		return;
	}

IL_0087:
	{
		// transform.eulerAngles = new Vector3(0, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_17, L_18, NULL);
		// movingRight = true;
		__this->___movingRight_5 = (bool)1;
	}

IL_00ad:
	{
		// }
		return;
	}
}
// System.Void EnemyPatrol::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyPatrol__ctor_mB1E0D31784A88322028F981669FF3EEA071D62B4 (EnemyPatrol_t0979F349D65EED1831ED158D7EF995562DAC625D* __this, const RuntimeMethod* method) 
{
	{
		// private bool movingRight = true;
		__this->___movingRight_5 = (bool)1;
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
// System.Void AudioManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Awake_m8138BCED4D692C83C95626A1A09AB46EA5205569 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* V_0 = NULL;
	int32_t V_1 = 0;
	Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* V_2 = NULL;
	{
		// if (instance != null)
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_0 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_2, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		// instance = this;
		((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_3, NULL);
	}

IL_002b:
	{
		// foreach (Sound s in sounds)
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_4 = __this->___sounds_5;
		V_0 = L_4;
		V_1 = 0;
		goto IL_00a4;
	}

IL_0036:
	{
		// foreach (Sound s in sounds)
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		// s.source = gameObject.AddComponent<AudioSource>();
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_9 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_10);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11;
		L_11 = GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14(L_10, GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		NullCheck(L_9);
		L_9->___source_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___source_6), (void*)L_11);
		// s.source.clip = s.clip;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_12 = V_2;
		NullCheck(L_12);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_13 = L_12->___source_6;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_14 = V_2;
		NullCheck(L_14);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_15 = L_14->___clip_1;
		NullCheck(L_13);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_13, L_15, NULL);
		// s.source.outputAudioMixerGroup = s.mixer;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_16 = V_2;
		NullCheck(L_16);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_17 = L_16->___source_6;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_18 = V_2;
		NullCheck(L_18);
		AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* L_19 = L_18->___mixer_2;
		NullCheck(L_17);
		AudioSource_set_outputAudioMixerGroup_m10D0A0EAE270424CD2F3BB960CFAA158D9FC24CF(L_17, L_19, NULL);
		// s.source.volume = s.volume;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_20 = V_2;
		NullCheck(L_20);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_21 = L_20->___source_6;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_22 = V_2;
		NullCheck(L_22);
		float L_23 = L_22->___volume_3;
		NullCheck(L_21);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_21, L_23, NULL);
		// s.source.pitch = s.pitch;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_24 = V_2;
		NullCheck(L_24);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_25 = L_24->___source_6;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_26 = V_2;
		NullCheck(L_26);
		float L_27 = L_26->___pitch_4;
		NullCheck(L_25);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_25, L_27, NULL);
		// s.source.loop = s.loop;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_28 = V_2;
		NullCheck(L_28);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_29 = L_28->___source_6;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_30 = V_2;
		NullCheck(L_30);
		bool L_31 = L_30->___loop_5;
		NullCheck(L_29);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_29, L_31, NULL);
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00a4:
	{
		// foreach (Sound s in sounds)
		int32_t L_33 = V_1;
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_34 = V_0;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_0036;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AudioManager::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, String_t* ___sound0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mD3A41C4C52E64EEE0ED91D1995DDCA83047EDB87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CPlayU3Eb__0_m23B2020F4BA0988B77604ECE1FA058F865EA5CE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t7D97D1EBC2AE12371D5B558A851542A202D41BFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t7D97D1EBC2AE12371D5B558A851542A202D41BFC* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t7D97D1EBC2AE12371D5B558A851542A202D41BFC* L_0 = (U3CU3Ec__DisplayClass3_0_t7D97D1EBC2AE12371D5B558A851542A202D41BFC*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t7D97D1EBC2AE12371D5B558A851542A202D41BFC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_m9A4BA6BE43B4E5D7649B229BD0E20C9E42DE0972(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t7D97D1EBC2AE12371D5B558A851542A202D41BFC* L_1 = V_0;
		String_t* L_2 = ___sound0;
		NullCheck(L_1);
		L_1->___sound_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___sound_0), (void*)L_2);
		// Sound s = Array.Find(sounds, item => item.name == sound);
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_3 = __this->___sounds_5;
		U3CU3Ec__DisplayClass3_0_t7D97D1EBC2AE12371D5B558A851542A202D41BFC* L_4 = V_0;
		Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A* L_5 = (Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A*)il2cpp_codegen_object_new(Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_mD508F46C736E97AC65AEC65E413880D3C2A905BD(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CPlayU3Eb__0_m23B2020F4BA0988B77604ECE1FA058F865EA5CE3_RuntimeMethod_var), NULL);
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_6;
		L_6 = Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mD3A41C4C52E64EEE0ED91D1995DDCA83047EDB87(L_3, L_5, Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mD3A41C4C52E64EEE0ED91D1995DDCA83047EDB87_RuntimeMethod_var);
		// s.source.Play();
		NullCheck(L_6);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = L_6->___source_6;
		NullCheck(L_7);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_7, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::Stop(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Stop_m45D13BF030985CD03F88752B8CA92FFFCD0B11C3 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, String_t* ___sound0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mD3A41C4C52E64EEE0ED91D1995DDCA83047EDB87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CStopU3Eb__0_mEFB2723130567555BE300AC1D9D112EBC6FF826E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89* L_0 = (U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m3DD23E7EFFDED69B9EAC81FE50CDC950F4B7EC9D(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89* L_1 = V_0;
		String_t* L_2 = ___sound0;
		NullCheck(L_1);
		L_1->___sound_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___sound_0), (void*)L_2);
		// Sound s = Array.Find(sounds, item => item.name == sound);
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_3 = __this->___sounds_5;
		U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89* L_4 = V_0;
		Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A* L_5 = (Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A*)il2cpp_codegen_object_new(Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_mD508F46C736E97AC65AEC65E413880D3C2A905BD(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CStopU3Eb__0_mEFB2723130567555BE300AC1D9D112EBC6FF826E_RuntimeMethod_var), NULL);
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_6;
		L_6 = Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mD3A41C4C52E64EEE0ED91D1995DDCA83047EDB87(L_3, L_5, Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mD3A41C4C52E64EEE0ED91D1995DDCA83047EDB87_RuntimeMethod_var);
		// s.source.Stop();
		NullCheck(L_6);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = L_6->___source_6;
		NullCheck(L_7);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_7, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager__ctor_mA793A9DF6B975D03690B7C953972EFE41AE4D5E6 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
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
// System.Void AudioManager/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m9A4BA6BE43B4E5D7649B229BD0E20C9E42DE0972 (U3CU3Ec__DisplayClass3_0_t7D97D1EBC2AE12371D5B558A851542A202D41BFC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean AudioManager/<>c__DisplayClass3_0::<Play>b__0(Sound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass3_0_U3CPlayU3Eb__0_m23B2020F4BA0988B77604ECE1FA058F865EA5CE3 (U3CU3Ec__DisplayClass3_0_t7D97D1EBC2AE12371D5B558A851542A202D41BFC* __this, Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* ___item0, const RuntimeMethod* method) 
{
	{
		// Sound s = Array.Find(sounds, item => item.name == sound);
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_0 = ___item0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___name_0;
		String_t* L_2 = __this->___sound_0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_2, NULL);
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
// System.Void AudioManager/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m3DD23E7EFFDED69B9EAC81FE50CDC950F4B7EC9D (U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean AudioManager/<>c__DisplayClass4_0::<Stop>b__0(Sound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass4_0_U3CStopU3Eb__0_mEFB2723130567555BE300AC1D9D112EBC6FF826E (U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89* __this, Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* ___item0, const RuntimeMethod* method) 
{
	{
		// Sound s = Array.Find(sounds, item => item.name == sound);
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_0 = ___item0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___name_0;
		String_t* L_2 = __this->___sound_0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_2, NULL);
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
// System.Void BGSoundScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BGSoundScript_Start_m484F9545A77CF1C967A38D1456BB37C08F6EBC11 (BGSoundScript_tEA8A6F7B0B316322DCE80716924AA0625B75DC0B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// BGSoundScript BGSoundScript::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BGSoundScript_tEA8A6F7B0B316322DCE80716924AA0625B75DC0B* BGSoundScript_get_Instance_mE0B3BED1E4A1D334FE1D929FF55DEBC961EB6245 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BGSoundScript_tEA8A6F7B0B316322DCE80716924AA0625B75DC0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		BGSoundScript_tEA8A6F7B0B316322DCE80716924AA0625B75DC0B* L_0 = ((BGSoundScript_tEA8A6F7B0B316322DCE80716924AA0625B75DC0B_StaticFields*)il2cpp_codegen_static_fields_for(BGSoundScript_tEA8A6F7B0B316322DCE80716924AA0625B75DC0B_il2cpp_TypeInfo_var))->___instance_4;
		return L_0;
	}
}
// System.Void BGSoundScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BGSoundScript_Awake_mFB1A8BFA5C98803AE92F005E731278DA4FBD38CD (BGSoundScript_tEA8A6F7B0B316322DCE80716924AA0625B75DC0B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BGSoundScript_tEA8A6F7B0B316322DCE80716924AA0625B75DC0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance != this)
		BGSoundScript_tEA8A6F7B0B316322DCE80716924AA0625B75DC0B* L_0 = ((BGSoundScript_tEA8A6F7B0B316322DCE80716924AA0625B75DC0B_StaticFields*)il2cpp_codegen_static_fields_for(BGSoundScript_tEA8A6F7B0B316322DCE80716924AA0625B75DC0B_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		BGSoundScript_tEA8A6F7B0B316322DCE80716924AA0625B75DC0B* L_2 = ((BGSoundScript_tEA8A6F7B0B316322DCE80716924AA0625B75DC0B_StaticFields*)il2cpp_codegen_static_fields_for(BGSoundScript_tEA8A6F7B0B316322DCE80716924AA0625B75DC0B_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, __this, NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_4, NULL);
		// return;
		return;
	}

IL_0026:
	{
		// instance = this;
		((BGSoundScript_tEA8A6F7B0B316322DCE80716924AA0625B75DC0B_StaticFields*)il2cpp_codegen_static_fields_for(BGSoundScript_tEA8A6F7B0B316322DCE80716924AA0625B75DC0B_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((BGSoundScript_tEA8A6F7B0B316322DCE80716924AA0625B75DC0B_StaticFields*)il2cpp_codegen_static_fields_for(BGSoundScript_tEA8A6F7B0B316322DCE80716924AA0625B75DC0B_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// DontDestroyOnLoad(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_5, NULL);
		// }
		return;
	}
}
// System.Void BGSoundScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BGSoundScript__ctor_m1B57A784CC0EFE9E8AABC5CEF71A4B5C149DE7AB (BGSoundScript_tEA8A6F7B0B316322DCE80716924AA0625B75DC0B* __this, const RuntimeMethod* method) 
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
// System.Void BoardManager::SetupScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_SetupScene_m605D571EEB0DA94B6ABE05E8ACDD0A1DD9DE4CE8 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___level0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// int i = -10, y = -10;
		V_0 = ((int32_t)-10);
		// int i = -10, y = -10;
		V_1 = ((int32_t)-10);
		// if (level == 0)
		int32_t L_0 = ___level0;
		if (L_0)
		{
			goto IL_0457;
		}
	}
	{
		goto IL_003c;
	}

IL_000e:
	{
		// while (y <= rows) { Instantiate(sky, new Vector3(i, y), Quaternion.identity); y++; } y = -10; i++;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___sky_8;
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_4), ((float)L_2), ((float)L_3), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_1, L_4, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// while (y <= rows) { Instantiate(sky, new Vector3(i, y), Quaternion.identity); y++; } y = -10; i++;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002c:
	{
		// while (y <= rows) { Instantiate(sky, new Vector3(i, y), Quaternion.identity); y++; } y = -10; i++;
		int32_t L_8 = V_1;
		int32_t L_9 = __this->___rows_4;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_000e;
		}
	}
	{
		// while (y <= rows) { Instantiate(sky, new Vector3(i, y), Quaternion.identity); y++; } y = -10; i++;
		V_1 = ((int32_t)-10);
		// while (y <= rows) { Instantiate(sky, new Vector3(i, y), Quaternion.identity); y++; } y = -10; i++;
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003c:
	{
		// while (i <= (columns + 10)) //Building the sky
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___columns_5;
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)il2cpp_codegen_add(L_12, ((int32_t)10))))))
		{
			goto IL_002c;
		}
	}
	{
		// i = -10; y = -3;
		V_0 = ((int32_t)-10);
		// i = -10; y = -3;
		V_1 = ((int32_t)-3);
		goto IL_00ee;
	}

IL_0053:
	{
		// if ((i == 12) || (i == 13) || (i == 14) || (i == 24) || (i == 26) || (i == 27) || (i == 33) || (i == 34) ||
		//     (i == 45) || (i == 46) || (i == 47) || (i == 48) || (i == 49) || (i == 50) || (i == 51) || (i == 52) || (i == 61) || (i == 62) || (i == 63) || (i == 64)) { i++; }
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)12))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)13))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)14))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)24))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)26))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)27))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)33))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)34))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)45))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)46))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)47))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_24 = V_0;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)48))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)49))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)50))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)51))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)52))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)61))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)62))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)63))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_32 = V_0;
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_00bd;
		}
	}

IL_00b7:
	{
		// (i == 45) || (i == 46) || (i == 47) || (i == 48) || (i == 49) || (i == 50) || (i == 51) || (i == 52) || (i == 61) || (i == 62) || (i == 63) || (i == 64)) { i++; }
		int32_t L_33 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_00db;
	}

IL_00bd:
	{
		// else { Instantiate(ground, new Vector3(i, y), Quaternion.identity); i++; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->___ground_9;
		int32_t L_35 = V_0;
		int32_t L_36 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_37), ((float)L_35), ((float)L_36), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38;
		L_38 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_34, L_37, L_38, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// else { Instantiate(ground, new Vector3(i, y), Quaternion.identity); i++; }
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00db:
	{
		// while (i < columns)
		int32_t L_41 = V_0;
		int32_t L_42 = __this->___columns_5;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0053;
		}
	}
	{
		// i = -10;
		V_0 = ((int32_t)-10);
		// y++;
		int32_t L_43 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00ee:
	{
		// while (y <= 0) //Building the ground
		int32_t L_44 = V_1;
		if ((((int32_t)L_44) <= ((int32_t)0)))
		{
			goto IL_00db;
		}
	}
	{
		// i = 10; y = 1;
		V_0 = ((int32_t)10);
		// i = 10; y = 1;
		V_1 = 1;
		goto IL_020e;
	}

IL_00fc:
	{
		// if (((i == 17) && (y == 4)) || ((i == 18) && (y == 4)) || ((i == 19) && (y == 4)) || ((i == 20) && (y == 4)) || ((i == 21) && (y == 4)) ||
		//     ((i == 28) && (y == 5)) || ((i == 29) && (y == 5)) || ((i == 30) && (y == 5)) || ((i == 31) && (y == 5)) || ((i == 32) && (y == 5)) ||
		//     ((i == 33) && (y == 5)) || ((i == 35) && (y == 5)) || ((i == 36) && (y == 5)) || ((i == 37) && (y == 5)) || ((i == 38) && (y == 5)) || ((i == 39) && (y == 5)) ||
		//     ((i == 46) && (y == 2)) || ((i == 47) && (y == 2)) || ((i == 48) && (y == 2)) || ((i == 49) && (y == 2)) || ((i == 50) && (y == 2)) || ((i == 51) && (y == 2))) { Instantiate(brick, new Vector3(i, y), Quaternion.identity); i++; }
		int32_t L_45 = V_0;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_0108;
		}
	}
	{
		int32_t L_46 = V_1;
		if ((((int32_t)L_46) == ((int32_t)4)))
		{
			goto IL_01d7;
		}
	}

IL_0108:
	{
		int32_t L_47 = V_0;
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_0114;
		}
	}
	{
		int32_t L_48 = V_1;
		if ((((int32_t)L_48) == ((int32_t)4)))
		{
			goto IL_01d7;
		}
	}

IL_0114:
	{
		int32_t L_49 = V_0;
		if ((!(((uint32_t)L_49) == ((uint32_t)((int32_t)19)))))
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) == ((int32_t)4)))
		{
			goto IL_01d7;
		}
	}

IL_0120:
	{
		int32_t L_51 = V_0;
		if ((!(((uint32_t)L_51) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_012c;
		}
	}
	{
		int32_t L_52 = V_1;
		if ((((int32_t)L_52) == ((int32_t)4)))
		{
			goto IL_01d7;
		}
	}

IL_012c:
	{
		int32_t L_53 = V_0;
		if ((!(((uint32_t)L_53) == ((uint32_t)((int32_t)21)))))
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_54 = V_1;
		if ((((int32_t)L_54) == ((int32_t)4)))
		{
			goto IL_01d7;
		}
	}

IL_0138:
	{
		int32_t L_55 = V_0;
		if ((!(((uint32_t)L_55) == ((uint32_t)((int32_t)28)))))
		{
			goto IL_0144;
		}
	}
	{
		int32_t L_56 = V_1;
		if ((((int32_t)L_56) == ((int32_t)5)))
		{
			goto IL_01d7;
		}
	}

IL_0144:
	{
		int32_t L_57 = V_0;
		if ((!(((uint32_t)L_57) == ((uint32_t)((int32_t)29)))))
		{
			goto IL_0150;
		}
	}
	{
		int32_t L_58 = V_1;
		if ((((int32_t)L_58) == ((int32_t)5)))
		{
			goto IL_01d7;
		}
	}

IL_0150:
	{
		int32_t L_59 = V_0;
		if ((!(((uint32_t)L_59) == ((uint32_t)((int32_t)30)))))
		{
			goto IL_0159;
		}
	}
	{
		int32_t L_60 = V_1;
		if ((((int32_t)L_60) == ((int32_t)5)))
		{
			goto IL_01d7;
		}
	}

IL_0159:
	{
		int32_t L_61 = V_0;
		if ((!(((uint32_t)L_61) == ((uint32_t)((int32_t)31)))))
		{
			goto IL_0162;
		}
	}
	{
		int32_t L_62 = V_1;
		if ((((int32_t)L_62) == ((int32_t)5)))
		{
			goto IL_01d7;
		}
	}

IL_0162:
	{
		int32_t L_63 = V_0;
		if ((!(((uint32_t)L_63) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_016b;
		}
	}
	{
		int32_t L_64 = V_1;
		if ((((int32_t)L_64) == ((int32_t)5)))
		{
			goto IL_01d7;
		}
	}

IL_016b:
	{
		int32_t L_65 = V_0;
		if ((!(((uint32_t)L_65) == ((uint32_t)((int32_t)33)))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_66 = V_1;
		if ((((int32_t)L_66) == ((int32_t)5)))
		{
			goto IL_01d7;
		}
	}

IL_0174:
	{
		int32_t L_67 = V_0;
		if ((!(((uint32_t)L_67) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_017d;
		}
	}
	{
		int32_t L_68 = V_1;
		if ((((int32_t)L_68) == ((int32_t)5)))
		{
			goto IL_01d7;
		}
	}

IL_017d:
	{
		int32_t L_69 = V_0;
		if ((!(((uint32_t)L_69) == ((uint32_t)((int32_t)36)))))
		{
			goto IL_0186;
		}
	}
	{
		int32_t L_70 = V_1;
		if ((((int32_t)L_70) == ((int32_t)5)))
		{
			goto IL_01d7;
		}
	}

IL_0186:
	{
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_71) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_018f;
		}
	}
	{
		int32_t L_72 = V_1;
		if ((((int32_t)L_72) == ((int32_t)5)))
		{
			goto IL_01d7;
		}
	}

IL_018f:
	{
		int32_t L_73 = V_0;
		if ((!(((uint32_t)L_73) == ((uint32_t)((int32_t)38)))))
		{
			goto IL_0198;
		}
	}
	{
		int32_t L_74 = V_1;
		if ((((int32_t)L_74) == ((int32_t)5)))
		{
			goto IL_01d7;
		}
	}

IL_0198:
	{
		int32_t L_75 = V_0;
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_01a1;
		}
	}
	{
		int32_t L_76 = V_1;
		if ((((int32_t)L_76) == ((int32_t)5)))
		{
			goto IL_01d7;
		}
	}

IL_01a1:
	{
		int32_t L_77 = V_0;
		if ((!(((uint32_t)L_77) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_01aa;
		}
	}
	{
		int32_t L_78 = V_1;
		if ((((int32_t)L_78) == ((int32_t)2)))
		{
			goto IL_01d7;
		}
	}

IL_01aa:
	{
		int32_t L_79 = V_0;
		if ((!(((uint32_t)L_79) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_01b3;
		}
	}
	{
		int32_t L_80 = V_1;
		if ((((int32_t)L_80) == ((int32_t)2)))
		{
			goto IL_01d7;
		}
	}

IL_01b3:
	{
		int32_t L_81 = V_0;
		if ((!(((uint32_t)L_81) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_01bc;
		}
	}
	{
		int32_t L_82 = V_1;
		if ((((int32_t)L_82) == ((int32_t)2)))
		{
			goto IL_01d7;
		}
	}

IL_01bc:
	{
		int32_t L_83 = V_0;
		if ((!(((uint32_t)L_83) == ((uint32_t)((int32_t)49)))))
		{
			goto IL_01c5;
		}
	}
	{
		int32_t L_84 = V_1;
		if ((((int32_t)L_84) == ((int32_t)2)))
		{
			goto IL_01d7;
		}
	}

IL_01c5:
	{
		int32_t L_85 = V_0;
		if ((!(((uint32_t)L_85) == ((uint32_t)((int32_t)50)))))
		{
			goto IL_01ce;
		}
	}
	{
		int32_t L_86 = V_1;
		if ((((int32_t)L_86) == ((int32_t)2)))
		{
			goto IL_01d7;
		}
	}

IL_01ce:
	{
		int32_t L_87 = V_0;
		if ((!(((uint32_t)L_87) == ((uint32_t)((int32_t)51)))))
		{
			goto IL_01f7;
		}
	}
	{
		int32_t L_88 = V_1;
		if ((!(((uint32_t)L_88) == ((uint32_t)2))))
		{
			goto IL_01f7;
		}
	}

IL_01d7:
	{
		// ((i == 46) && (y == 2)) || ((i == 47) && (y == 2)) || ((i == 48) && (y == 2)) || ((i == 49) && (y == 2)) || ((i == 50) && (y == 2)) || ((i == 51) && (y == 2))) { Instantiate(brick, new Vector3(i, y), Quaternion.identity); i++; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_89 = __this->___brick_11;
		int32_t L_90 = V_0;
		int32_t L_91 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		memset((&L_92), 0, sizeof(L_92));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_92), ((float)L_90), ((float)L_91), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_93;
		L_93 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_94;
		L_94 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_89, L_92, L_93, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// ((i == 46) && (y == 2)) || ((i == 47) && (y == 2)) || ((i == 48) && (y == 2)) || ((i == 49) && (y == 2)) || ((i == 50) && (y == 2)) || ((i == 51) && (y == 2))) { Instantiate(brick, new Vector3(i, y), Quaternion.identity); i++; }
		int32_t L_95 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_95, 1));
		goto IL_01fb;
	}

IL_01f7:
	{
		// else { i++; }
		int32_t L_96 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_96, 1));
	}

IL_01fb:
	{
		// while (i < columns)
		int32_t L_97 = V_0;
		int32_t L_98 = __this->___columns_5;
		if ((((int32_t)L_97) < ((int32_t)L_98)))
		{
			goto IL_00fc;
		}
	}
	{
		// i = 10;
		V_0 = ((int32_t)10);
		// y++;
		int32_t L_99 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_99, 1));
	}

IL_020e:
	{
		// while (y < 10) //Building the bricks
		int32_t L_100 = V_1;
		if ((((int32_t)L_100) < ((int32_t)((int32_t)10))))
		{
			goto IL_01fb;
		}
	}
	{
		// i = 10; y = 1;
		V_0 = ((int32_t)10);
		// i = 10; y = 1;
		V_1 = 1;
		goto IL_02ff;
	}

IL_021d:
	{
		// if (((i == 11) && (y == 1)) || ((i == 11) && (y == 2)) || ((i == 11) && (y == 3)) || ((i == 11) && (y == 4)) || ((i == 11) && (y == 5)) || ((i == 25) && (y == 1)) ||
		//     ((i == 25) && (y == 2)) || ((i == 49) && (y == 4)) || ((i == 49) && (y == 5)) || ((i == 49) && (y == 6)) || ((i == 49) && (y == 7)) || ((i == 49) && (y == 8)) ||
		//     ((i == 58) && (y == 1)) || ((i == 59) && (y == 1)) ||  ((i == 60) && (y == 1)) || ((i == 59) && (y == 2)) || ((i == 60) && (y == 2)) || ((i == 60) && (y == 3))) { Instantiate(basicWall, new Vector3(i, y), Quaternion.identity); i++; }
		int32_t L_101 = V_0;
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0229;
		}
	}
	{
		int32_t L_102 = V_1;
		if ((((int32_t)L_102) == ((int32_t)1)))
		{
			goto IL_02c8;
		}
	}

IL_0229:
	{
		int32_t L_103 = V_0;
		if ((!(((uint32_t)L_103) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0235;
		}
	}
	{
		int32_t L_104 = V_1;
		if ((((int32_t)L_104) == ((int32_t)2)))
		{
			goto IL_02c8;
		}
	}

IL_0235:
	{
		int32_t L_105 = V_0;
		if ((!(((uint32_t)L_105) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0241;
		}
	}
	{
		int32_t L_106 = V_1;
		if ((((int32_t)L_106) == ((int32_t)3)))
		{
			goto IL_02c8;
		}
	}

IL_0241:
	{
		int32_t L_107 = V_0;
		if ((!(((uint32_t)L_107) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_024a;
		}
	}
	{
		int32_t L_108 = V_1;
		if ((((int32_t)L_108) == ((int32_t)4)))
		{
			goto IL_02c8;
		}
	}

IL_024a:
	{
		int32_t L_109 = V_0;
		if ((!(((uint32_t)L_109) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0253;
		}
	}
	{
		int32_t L_110 = V_1;
		if ((((int32_t)L_110) == ((int32_t)5)))
		{
			goto IL_02c8;
		}
	}

IL_0253:
	{
		int32_t L_111 = V_0;
		if ((!(((uint32_t)L_111) == ((uint32_t)((int32_t)25)))))
		{
			goto IL_025c;
		}
	}
	{
		int32_t L_112 = V_1;
		if ((((int32_t)L_112) == ((int32_t)1)))
		{
			goto IL_02c8;
		}
	}

IL_025c:
	{
		int32_t L_113 = V_0;
		if ((!(((uint32_t)L_113) == ((uint32_t)((int32_t)25)))))
		{
			goto IL_0265;
		}
	}
	{
		int32_t L_114 = V_1;
		if ((((int32_t)L_114) == ((int32_t)2)))
		{
			goto IL_02c8;
		}
	}

IL_0265:
	{
		int32_t L_115 = V_0;
		if ((!(((uint32_t)L_115) == ((uint32_t)((int32_t)49)))))
		{
			goto IL_026e;
		}
	}
	{
		int32_t L_116 = V_1;
		if ((((int32_t)L_116) == ((int32_t)4)))
		{
			goto IL_02c8;
		}
	}

IL_026e:
	{
		int32_t L_117 = V_0;
		if ((!(((uint32_t)L_117) == ((uint32_t)((int32_t)49)))))
		{
			goto IL_0277;
		}
	}
	{
		int32_t L_118 = V_1;
		if ((((int32_t)L_118) == ((int32_t)5)))
		{
			goto IL_02c8;
		}
	}

IL_0277:
	{
		int32_t L_119 = V_0;
		if ((!(((uint32_t)L_119) == ((uint32_t)((int32_t)49)))))
		{
			goto IL_0280;
		}
	}
	{
		int32_t L_120 = V_1;
		if ((((int32_t)L_120) == ((int32_t)6)))
		{
			goto IL_02c8;
		}
	}

IL_0280:
	{
		int32_t L_121 = V_0;
		if ((!(((uint32_t)L_121) == ((uint32_t)((int32_t)49)))))
		{
			goto IL_0289;
		}
	}
	{
		int32_t L_122 = V_1;
		if ((((int32_t)L_122) == ((int32_t)7)))
		{
			goto IL_02c8;
		}
	}

IL_0289:
	{
		int32_t L_123 = V_0;
		if ((!(((uint32_t)L_123) == ((uint32_t)((int32_t)49)))))
		{
			goto IL_0292;
		}
	}
	{
		int32_t L_124 = V_1;
		if ((((int32_t)L_124) == ((int32_t)8)))
		{
			goto IL_02c8;
		}
	}

IL_0292:
	{
		int32_t L_125 = V_0;
		if ((!(((uint32_t)L_125) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_029b;
		}
	}
	{
		int32_t L_126 = V_1;
		if ((((int32_t)L_126) == ((int32_t)1)))
		{
			goto IL_02c8;
		}
	}

IL_029b:
	{
		int32_t L_127 = V_0;
		if ((!(((uint32_t)L_127) == ((uint32_t)((int32_t)59)))))
		{
			goto IL_02a4;
		}
	}
	{
		int32_t L_128 = V_1;
		if ((((int32_t)L_128) == ((int32_t)1)))
		{
			goto IL_02c8;
		}
	}

IL_02a4:
	{
		int32_t L_129 = V_0;
		if ((!(((uint32_t)L_129) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_02ad;
		}
	}
	{
		int32_t L_130 = V_1;
		if ((((int32_t)L_130) == ((int32_t)1)))
		{
			goto IL_02c8;
		}
	}

IL_02ad:
	{
		int32_t L_131 = V_0;
		if ((!(((uint32_t)L_131) == ((uint32_t)((int32_t)59)))))
		{
			goto IL_02b6;
		}
	}
	{
		int32_t L_132 = V_1;
		if ((((int32_t)L_132) == ((int32_t)2)))
		{
			goto IL_02c8;
		}
	}

IL_02b6:
	{
		int32_t L_133 = V_0;
		if ((!(((uint32_t)L_133) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_02bf;
		}
	}
	{
		int32_t L_134 = V_1;
		if ((((int32_t)L_134) == ((int32_t)2)))
		{
			goto IL_02c8;
		}
	}

IL_02bf:
	{
		int32_t L_135 = V_0;
		if ((!(((uint32_t)L_135) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_02e8;
		}
	}
	{
		int32_t L_136 = V_1;
		if ((!(((uint32_t)L_136) == ((uint32_t)3))))
		{
			goto IL_02e8;
		}
	}

IL_02c8:
	{
		// ((i == 58) && (y == 1)) || ((i == 59) && (y == 1)) ||  ((i == 60) && (y == 1)) || ((i == 59) && (y == 2)) || ((i == 60) && (y == 2)) || ((i == 60) && (y == 3))) { Instantiate(basicWall, new Vector3(i, y), Quaternion.identity); i++; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_137 = __this->___basicWall_10;
		int32_t L_138 = V_0;
		int32_t L_139 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140;
		memset((&L_140), 0, sizeof(L_140));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_140), ((float)L_138), ((float)L_139), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_141;
		L_141 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_142;
		L_142 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_137, L_140, L_141, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// ((i == 58) && (y == 1)) || ((i == 59) && (y == 1)) ||  ((i == 60) && (y == 1)) || ((i == 59) && (y == 2)) || ((i == 60) && (y == 2)) || ((i == 60) && (y == 3))) { Instantiate(basicWall, new Vector3(i, y), Quaternion.identity); i++; }
		int32_t L_143 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_143, 1));
		goto IL_02ec;
	}

IL_02e8:
	{
		// else { i++; }
		int32_t L_144 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_144, 1));
	}

IL_02ec:
	{
		// while (i < columns)
		int32_t L_145 = V_0;
		int32_t L_146 = __this->___columns_5;
		if ((((int32_t)L_145) < ((int32_t)L_146)))
		{
			goto IL_021d;
		}
	}
	{
		// i = 10;
		V_0 = ((int32_t)10);
		// y++;
		int32_t L_147 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_147, 1));
	}

IL_02ff:
	{
		// while (y < 10) //Building the basic walls
		int32_t L_148 = V_1;
		if ((((int32_t)L_148) < ((int32_t)((int32_t)10))))
		{
			goto IL_02ec;
		}
	}
	{
		// i = 10; y = 1;
		V_0 = ((int32_t)10);
		// i = 10; y = 1;
		V_1 = 1;
		goto IL_0405;
	}

IL_030e:
	{
		// var rnd1 = Random.Range(0, 2);
		int32_t L_149;
		L_149 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, 2, NULL);
		V_2 = L_149;
		// var rnd2 = Random.Range(3, 5);
		int32_t L_150;
		L_150 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(3, 5, NULL);
		V_3 = L_150;
		goto IL_03f2;
	}

IL_0323:
	{
		// if (((i == 10) && (y == 1)) || ((i == 10) && (y == 2)) || ((i == 10) && (y == 3)) || ((i == 10) && (y == 4)) || ((i == 10) && (y == 5)) || ((i == 48) && (y == 4)) ||
		//     ((i == 48) && (y == 5)) || ((i == 48) && (y == 6)) || ((i == 48) && (y == 7)) || ((i == 48) && (y == 8))) { Instantiate(wall[rnd1], new Vector3(i, y), Quaternion.identity); i++; }
		int32_t L_151 = V_0;
		if ((!(((uint32_t)L_151) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_032c;
		}
	}
	{
		int32_t L_152 = V_1;
		if ((((int32_t)L_152) == ((int32_t)1)))
		{
			goto IL_037d;
		}
	}

IL_032c:
	{
		int32_t L_153 = V_0;
		if ((!(((uint32_t)L_153) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0335;
		}
	}
	{
		int32_t L_154 = V_1;
		if ((((int32_t)L_154) == ((int32_t)2)))
		{
			goto IL_037d;
		}
	}

IL_0335:
	{
		int32_t L_155 = V_0;
		if ((!(((uint32_t)L_155) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_033e;
		}
	}
	{
		int32_t L_156 = V_1;
		if ((((int32_t)L_156) == ((int32_t)3)))
		{
			goto IL_037d;
		}
	}

IL_033e:
	{
		int32_t L_157 = V_0;
		if ((!(((uint32_t)L_157) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0347;
		}
	}
	{
		int32_t L_158 = V_1;
		if ((((int32_t)L_158) == ((int32_t)4)))
		{
			goto IL_037d;
		}
	}

IL_0347:
	{
		int32_t L_159 = V_0;
		if ((!(((uint32_t)L_159) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0350;
		}
	}
	{
		int32_t L_160 = V_1;
		if ((((int32_t)L_160) == ((int32_t)5)))
		{
			goto IL_037d;
		}
	}

IL_0350:
	{
		int32_t L_161 = V_0;
		if ((!(((uint32_t)L_161) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0359;
		}
	}
	{
		int32_t L_162 = V_1;
		if ((((int32_t)L_162) == ((int32_t)4)))
		{
			goto IL_037d;
		}
	}

IL_0359:
	{
		int32_t L_163 = V_0;
		if ((!(((uint32_t)L_163) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0362;
		}
	}
	{
		int32_t L_164 = V_1;
		if ((((int32_t)L_164) == ((int32_t)5)))
		{
			goto IL_037d;
		}
	}

IL_0362:
	{
		int32_t L_165 = V_0;
		if ((!(((uint32_t)L_165) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_036b;
		}
	}
	{
		int32_t L_166 = V_1;
		if ((((int32_t)L_166) == ((int32_t)6)))
		{
			goto IL_037d;
		}
	}

IL_036b:
	{
		int32_t L_167 = V_0;
		if ((!(((uint32_t)L_167) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0374;
		}
	}
	{
		int32_t L_168 = V_1;
		if ((((int32_t)L_168) == ((int32_t)7)))
		{
			goto IL_037d;
		}
	}

IL_0374:
	{
		int32_t L_169 = V_0;
		if ((!(((uint32_t)L_169) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_039f;
		}
	}
	{
		int32_t L_170 = V_1;
		if ((!(((uint32_t)L_170) == ((uint32_t)8))))
		{
			goto IL_039f;
		}
	}

IL_037d:
	{
		// ((i == 48) && (y == 5)) || ((i == 48) && (y == 6)) || ((i == 48) && (y == 7)) || ((i == 48) && (y == 8))) { Instantiate(wall[rnd1], new Vector3(i, y), Quaternion.identity); i++; }
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_171 = __this->___wall_14;
		int32_t L_172 = V_2;
		NullCheck(L_171);
		int32_t L_173 = L_172;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_174 = (L_171)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		int32_t L_175 = V_0;
		int32_t L_176 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_177;
		memset((&L_177), 0, sizeof(L_177));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_177), ((float)L_175), ((float)L_176), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_178;
		L_178 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_179;
		L_179 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_174, L_177, L_178, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// ((i == 48) && (y == 5)) || ((i == 48) && (y == 6)) || ((i == 48) && (y == 7)) || ((i == 48) && (y == 8))) { Instantiate(wall[rnd1], new Vector3(i, y), Quaternion.identity); i++; }
		int32_t L_180 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_180, 1));
		goto IL_03f2;
	}

IL_039f:
	{
		// else if (((i == 40) && (y == 1)) || ((i == 40) && (y == 2)) || ((i == 40) && (y == 3)) || ((i == 40) && (y == 4)) || ((i == 40) && (y == 5))) { Instantiate(wall[rnd2], new Vector3(i, y), Quaternion.identity); i++; }
		int32_t L_181 = V_0;
		if ((!(((uint32_t)L_181) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_03a8;
		}
	}
	{
		int32_t L_182 = V_1;
		if ((((int32_t)L_182) == ((int32_t)1)))
		{
			goto IL_03cc;
		}
	}

IL_03a8:
	{
		int32_t L_183 = V_0;
		if ((!(((uint32_t)L_183) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_03b1;
		}
	}
	{
		int32_t L_184 = V_1;
		if ((((int32_t)L_184) == ((int32_t)2)))
		{
			goto IL_03cc;
		}
	}

IL_03b1:
	{
		int32_t L_185 = V_0;
		if ((!(((uint32_t)L_185) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_03ba;
		}
	}
	{
		int32_t L_186 = V_1;
		if ((((int32_t)L_186) == ((int32_t)3)))
		{
			goto IL_03cc;
		}
	}

IL_03ba:
	{
		int32_t L_187 = V_0;
		if ((!(((uint32_t)L_187) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_03c3;
		}
	}
	{
		int32_t L_188 = V_1;
		if ((((int32_t)L_188) == ((int32_t)4)))
		{
			goto IL_03cc;
		}
	}

IL_03c3:
	{
		int32_t L_189 = V_0;
		if ((!(((uint32_t)L_189) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_03ee;
		}
	}
	{
		int32_t L_190 = V_1;
		if ((!(((uint32_t)L_190) == ((uint32_t)5))))
		{
			goto IL_03ee;
		}
	}

IL_03cc:
	{
		// else if (((i == 40) && (y == 1)) || ((i == 40) && (y == 2)) || ((i == 40) && (y == 3)) || ((i == 40) && (y == 4)) || ((i == 40) && (y == 5))) { Instantiate(wall[rnd2], new Vector3(i, y), Quaternion.identity); i++; }
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_191 = __this->___wall_14;
		int32_t L_192 = V_3;
		NullCheck(L_191);
		int32_t L_193 = L_192;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_194 = (L_191)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		int32_t L_195 = V_0;
		int32_t L_196 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_197;
		memset((&L_197), 0, sizeof(L_197));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_197), ((float)L_195), ((float)L_196), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_198;
		L_198 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_199;
		L_199 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_194, L_197, L_198, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// else if (((i == 40) && (y == 1)) || ((i == 40) && (y == 2)) || ((i == 40) && (y == 3)) || ((i == 40) && (y == 4)) || ((i == 40) && (y == 5))) { Instantiate(wall[rnd2], new Vector3(i, y), Quaternion.identity); i++; }
		int32_t L_200 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_200, 1));
		goto IL_03f2;
	}

IL_03ee:
	{
		// else { i++; }
		int32_t L_201 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_201, 1));
	}

IL_03f2:
	{
		// while (i < columns)
		int32_t L_202 = V_0;
		int32_t L_203 = __this->___columns_5;
		if ((((int32_t)L_202) < ((int32_t)L_203)))
		{
			goto IL_0323;
		}
	}
	{
		// i = 10;
		V_0 = ((int32_t)10);
		// y++;
		int32_t L_204 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_204, 1));
	}

IL_0405:
	{
		// while (y < 10) //Building the sticky walls
		int32_t L_205 = V_1;
		if ((((int32_t)L_205) < ((int32_t)((int32_t)10))))
		{
			goto IL_030e;
		}
	}
	{
		// PlacingCoins(level);
		int32_t L_206 = ___level0;
		BoardManager_PlacingCoins_m6FDC5559A592DA9FA3FB39FBC8B9C8EB0BECE6FD(__this, L_206, NULL);
		// GenerateEnemies(level);
		int32_t L_207 = ___level0;
		BoardManager_GenerateEnemies_m5E125128B858CD3465C018045BF5D227942E0771(__this, L_207, NULL);
		// PlacingDecorations(level);
		int32_t L_208 = ___level0;
		BoardManager_PlacingDecorations_mD0078FADB7D000A0EAC673D219C353AC6CD8A3C1(__this, L_208, NULL);
		// BuildingInvisibleWallAndExit();
		BoardManager_BuildingInvisibleWallAndExit_m085AE4AB4D3589DDE701DD0AEF13EC3EDA06EE83(__this, NULL);
		return;
	}

IL_0429:
	{
		// while (y <= rows) { Instantiate(sky, new Vector3(i, y), Quaternion.identity); y++; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_209 = __this->___sky_8;
		int32_t L_210 = V_0;
		int32_t L_211 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_212;
		memset((&L_212), 0, sizeof(L_212));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_212), ((float)L_210), ((float)L_211), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_213;
		L_213 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_214;
		L_214 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_209, L_212, L_213, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// while (y <= rows) { Instantiate(sky, new Vector3(i, y), Quaternion.identity); y++; }
		int32_t L_215 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_215, 1));
	}

IL_0447:
	{
		// while (y <= rows) { Instantiate(sky, new Vector3(i, y), Quaternion.identity); y++; }
		int32_t L_216 = V_1;
		int32_t L_217 = __this->___rows_4;
		if ((((int32_t)L_216) <= ((int32_t)L_217)))
		{
			goto IL_0429;
		}
	}
	{
		// y = -10; i++;
		V_1 = ((int32_t)-10);
		// y = -10; i++;
		int32_t L_218 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_218, 1));
	}

IL_0457:
	{
		// while (i <= (columns + 10)) //Building the sky
		int32_t L_219 = V_0;
		int32_t L_220 = __this->___columns_5;
		if ((((int32_t)L_219) <= ((int32_t)((int32_t)il2cpp_codegen_add(L_220, ((int32_t)10))))))
		{
			goto IL_0447;
		}
	}
	{
		// i = -10; y = -3;
		V_0 = ((int32_t)-10);
		// i = -10; y = -3;
		V_1 = ((int32_t)-3);
		goto IL_0509;
	}

IL_046e:
	{
		// if ((i == 12) || (i == 13) || (i == 14) || (i == 15) || (i == 16) || (i == 17) || (i == 18) || (i == 19) || (i == 20) || (i == 21) ||
		//     (i == 22) || (i == 23) || (i == 24) || (i == 25) || (i == 26) || (i == 28) || (i == 57) || (i == 62) || (i == 63) || (i == 64)) { i++; }
		int32_t L_221 = V_0;
		if ((((int32_t)L_221) == ((int32_t)((int32_t)12))))
		{
			goto IL_04d2;
		}
	}
	{
		int32_t L_222 = V_0;
		if ((((int32_t)L_222) == ((int32_t)((int32_t)13))))
		{
			goto IL_04d2;
		}
	}
	{
		int32_t L_223 = V_0;
		if ((((int32_t)L_223) == ((int32_t)((int32_t)14))))
		{
			goto IL_04d2;
		}
	}
	{
		int32_t L_224 = V_0;
		if ((((int32_t)L_224) == ((int32_t)((int32_t)15))))
		{
			goto IL_04d2;
		}
	}
	{
		int32_t L_225 = V_0;
		if ((((int32_t)L_225) == ((int32_t)((int32_t)16))))
		{
			goto IL_04d2;
		}
	}
	{
		int32_t L_226 = V_0;
		if ((((int32_t)L_226) == ((int32_t)((int32_t)17))))
		{
			goto IL_04d2;
		}
	}
	{
		int32_t L_227 = V_0;
		if ((((int32_t)L_227) == ((int32_t)((int32_t)18))))
		{
			goto IL_04d2;
		}
	}
	{
		int32_t L_228 = V_0;
		if ((((int32_t)L_228) == ((int32_t)((int32_t)19))))
		{
			goto IL_04d2;
		}
	}
	{
		int32_t L_229 = V_0;
		if ((((int32_t)L_229) == ((int32_t)((int32_t)20))))
		{
			goto IL_04d2;
		}
	}
	{
		int32_t L_230 = V_0;
		if ((((int32_t)L_230) == ((int32_t)((int32_t)21))))
		{
			goto IL_04d2;
		}
	}
	{
		int32_t L_231 = V_0;
		if ((((int32_t)L_231) == ((int32_t)((int32_t)22))))
		{
			goto IL_04d2;
		}
	}
	{
		int32_t L_232 = V_0;
		if ((((int32_t)L_232) == ((int32_t)((int32_t)23))))
		{
			goto IL_04d2;
		}
	}
	{
		int32_t L_233 = V_0;
		if ((((int32_t)L_233) == ((int32_t)((int32_t)24))))
		{
			goto IL_04d2;
		}
	}
	{
		int32_t L_234 = V_0;
		if ((((int32_t)L_234) == ((int32_t)((int32_t)25))))
		{
			goto IL_04d2;
		}
	}
	{
		int32_t L_235 = V_0;
		if ((((int32_t)L_235) == ((int32_t)((int32_t)26))))
		{
			goto IL_04d2;
		}
	}
	{
		int32_t L_236 = V_0;
		if ((((int32_t)L_236) == ((int32_t)((int32_t)28))))
		{
			goto IL_04d2;
		}
	}
	{
		int32_t L_237 = V_0;
		if ((((int32_t)L_237) == ((int32_t)((int32_t)57))))
		{
			goto IL_04d2;
		}
	}
	{
		int32_t L_238 = V_0;
		if ((((int32_t)L_238) == ((int32_t)((int32_t)62))))
		{
			goto IL_04d2;
		}
	}
	{
		int32_t L_239 = V_0;
		if ((((int32_t)L_239) == ((int32_t)((int32_t)63))))
		{
			goto IL_04d2;
		}
	}
	{
		int32_t L_240 = V_0;
		if ((!(((uint32_t)L_240) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_04d8;
		}
	}

IL_04d2:
	{
		// (i == 22) || (i == 23) || (i == 24) || (i == 25) || (i == 26) || (i == 28) || (i == 57) || (i == 62) || (i == 63) || (i == 64)) { i++; }
		int32_t L_241 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_241, 1));
		goto IL_04f6;
	}

IL_04d8:
	{
		// else { Instantiate(ground, new Vector3(i, y), Quaternion.identity); i++; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_242 = __this->___ground_9;
		int32_t L_243 = V_0;
		int32_t L_244 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_245;
		memset((&L_245), 0, sizeof(L_245));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_245), ((float)L_243), ((float)L_244), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_246;
		L_246 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_247;
		L_247 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_242, L_245, L_246, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// else { Instantiate(ground, new Vector3(i, y), Quaternion.identity); i++; }
		int32_t L_248 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_248, 1));
	}

IL_04f6:
	{
		// while (i < columns)
		int32_t L_249 = V_0;
		int32_t L_250 = __this->___columns_5;
		if ((((int32_t)L_249) < ((int32_t)L_250)))
		{
			goto IL_046e;
		}
	}
	{
		// i = -10;
		V_0 = ((int32_t)-10);
		// y++;
		int32_t L_251 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_251, 1));
	}

IL_0509:
	{
		// while (y <= 0) //Building the ground
		int32_t L_252 = V_1;
		if ((((int32_t)L_252) <= ((int32_t)0)))
		{
			goto IL_04f6;
		}
	}
	{
		// i = 10; y = 1;
		V_0 = ((int32_t)10);
		// i = 10; y = 1;
		V_1 = 1;
		goto IL_06c9;
	}

IL_0517:
	{
		// if (((i == 14) && (y == 2)) || ((i == 15) && (y == 2)) || ((i == 16) && (y == 2)) || ((i == 17) && (y == 2)) || ((i == 18) && (y == 2)) || ((i == 19) && (y == 2)) ||
		//     ((i == 16) && (y == 7)) || ((i == 17) && (y == 7)) || ((i == 21) && (y == 7)) || ((i == 22) && (y == 7)) || ((i == 25) && (y == 2)) ||
		//     ((i == 23) && (y == 7)) || ((i == 22) && (y == 2)) || ((i == 23) && (y == 2)) || ((i == 24) && (y == 2)) || ((i == 30) && (y == 4)) || ((i == 31) && (y == 4)) ||
		//     ((i == 32) && (y == 4)) || ((i == 33) && (y == 4)) || ((i == 36) && (y == 7)) || ((i == 37) && (y == 7)) || ((i == 40) && (y == 2)) || ((i == 41) && (y == 2)) ||
		//     ((i == 42) && (y == 2)) || ((i == 43) && (y == 2)) || ((i == 45) && (y == 4)) || ((i == 46) && (y == 4)) || ((i == 47) && (y == 4)) || ((i == 48) && (y == 4)) ||
		//     ((i == 49) && (y == 4)) || ((i == 50) && (y == 4))) { Instantiate(brick, new Vector3(i, y), Quaternion.identity); i++; }
		int32_t L_253 = V_0;
		if ((!(((uint32_t)L_253) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_0523;
		}
	}
	{
		int32_t L_254 = V_1;
		if ((((int32_t)L_254) == ((int32_t)2)))
		{
			goto IL_065e;
		}
	}

IL_0523:
	{
		int32_t L_255 = V_0;
		if ((!(((uint32_t)L_255) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_052f;
		}
	}
	{
		int32_t L_256 = V_1;
		if ((((int32_t)L_256) == ((int32_t)2)))
		{
			goto IL_065e;
		}
	}

IL_052f:
	{
		int32_t L_257 = V_0;
		if ((!(((uint32_t)L_257) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_053b;
		}
	}
	{
		int32_t L_258 = V_1;
		if ((((int32_t)L_258) == ((int32_t)2)))
		{
			goto IL_065e;
		}
	}

IL_053b:
	{
		int32_t L_259 = V_0;
		if ((!(((uint32_t)L_259) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_0547;
		}
	}
	{
		int32_t L_260 = V_1;
		if ((((int32_t)L_260) == ((int32_t)2)))
		{
			goto IL_065e;
		}
	}

IL_0547:
	{
		int32_t L_261 = V_0;
		if ((!(((uint32_t)L_261) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_0553;
		}
	}
	{
		int32_t L_262 = V_1;
		if ((((int32_t)L_262) == ((int32_t)2)))
		{
			goto IL_065e;
		}
	}

IL_0553:
	{
		int32_t L_263 = V_0;
		if ((!(((uint32_t)L_263) == ((uint32_t)((int32_t)19)))))
		{
			goto IL_055f;
		}
	}
	{
		int32_t L_264 = V_1;
		if ((((int32_t)L_264) == ((int32_t)2)))
		{
			goto IL_065e;
		}
	}

IL_055f:
	{
		int32_t L_265 = V_0;
		if ((!(((uint32_t)L_265) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_056b;
		}
	}
	{
		int32_t L_266 = V_1;
		if ((((int32_t)L_266) == ((int32_t)7)))
		{
			goto IL_065e;
		}
	}

IL_056b:
	{
		int32_t L_267 = V_0;
		if ((!(((uint32_t)L_267) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_0577;
		}
	}
	{
		int32_t L_268 = V_1;
		if ((((int32_t)L_268) == ((int32_t)7)))
		{
			goto IL_065e;
		}
	}

IL_0577:
	{
		int32_t L_269 = V_0;
		if ((!(((uint32_t)L_269) == ((uint32_t)((int32_t)21)))))
		{
			goto IL_0583;
		}
	}
	{
		int32_t L_270 = V_1;
		if ((((int32_t)L_270) == ((int32_t)7)))
		{
			goto IL_065e;
		}
	}

IL_0583:
	{
		int32_t L_271 = V_0;
		if ((!(((uint32_t)L_271) == ((uint32_t)((int32_t)22)))))
		{
			goto IL_058f;
		}
	}
	{
		int32_t L_272 = V_1;
		if ((((int32_t)L_272) == ((int32_t)7)))
		{
			goto IL_065e;
		}
	}

IL_058f:
	{
		int32_t L_273 = V_0;
		if ((!(((uint32_t)L_273) == ((uint32_t)((int32_t)25)))))
		{
			goto IL_059b;
		}
	}
	{
		int32_t L_274 = V_1;
		if ((((int32_t)L_274) == ((int32_t)2)))
		{
			goto IL_065e;
		}
	}

IL_059b:
	{
		int32_t L_275 = V_0;
		if ((!(((uint32_t)L_275) == ((uint32_t)((int32_t)23)))))
		{
			goto IL_05a7;
		}
	}
	{
		int32_t L_276 = V_1;
		if ((((int32_t)L_276) == ((int32_t)7)))
		{
			goto IL_065e;
		}
	}

IL_05a7:
	{
		int32_t L_277 = V_0;
		if ((!(((uint32_t)L_277) == ((uint32_t)((int32_t)22)))))
		{
			goto IL_05b3;
		}
	}
	{
		int32_t L_278 = V_1;
		if ((((int32_t)L_278) == ((int32_t)2)))
		{
			goto IL_065e;
		}
	}

IL_05b3:
	{
		int32_t L_279 = V_0;
		if ((!(((uint32_t)L_279) == ((uint32_t)((int32_t)23)))))
		{
			goto IL_05bf;
		}
	}
	{
		int32_t L_280 = V_1;
		if ((((int32_t)L_280) == ((int32_t)2)))
		{
			goto IL_065e;
		}
	}

IL_05bf:
	{
		int32_t L_281 = V_0;
		if ((!(((uint32_t)L_281) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_05cb;
		}
	}
	{
		int32_t L_282 = V_1;
		if ((((int32_t)L_282) == ((int32_t)2)))
		{
			goto IL_065e;
		}
	}

IL_05cb:
	{
		int32_t L_283 = V_0;
		if ((!(((uint32_t)L_283) == ((uint32_t)((int32_t)30)))))
		{
			goto IL_05d7;
		}
	}
	{
		int32_t L_284 = V_1;
		if ((((int32_t)L_284) == ((int32_t)4)))
		{
			goto IL_065e;
		}
	}

IL_05d7:
	{
		int32_t L_285 = V_0;
		if ((!(((uint32_t)L_285) == ((uint32_t)((int32_t)31)))))
		{
			goto IL_05e0;
		}
	}
	{
		int32_t L_286 = V_1;
		if ((((int32_t)L_286) == ((int32_t)4)))
		{
			goto IL_065e;
		}
	}

IL_05e0:
	{
		int32_t L_287 = V_0;
		if ((!(((uint32_t)L_287) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_05e9;
		}
	}
	{
		int32_t L_288 = V_1;
		if ((((int32_t)L_288) == ((int32_t)4)))
		{
			goto IL_065e;
		}
	}

IL_05e9:
	{
		int32_t L_289 = V_0;
		if ((!(((uint32_t)L_289) == ((uint32_t)((int32_t)33)))))
		{
			goto IL_05f2;
		}
	}
	{
		int32_t L_290 = V_1;
		if ((((int32_t)L_290) == ((int32_t)4)))
		{
			goto IL_065e;
		}
	}

IL_05f2:
	{
		int32_t L_291 = V_0;
		if ((!(((uint32_t)L_291) == ((uint32_t)((int32_t)36)))))
		{
			goto IL_05fb;
		}
	}
	{
		int32_t L_292 = V_1;
		if ((((int32_t)L_292) == ((int32_t)7)))
		{
			goto IL_065e;
		}
	}

IL_05fb:
	{
		int32_t L_293 = V_0;
		if ((!(((uint32_t)L_293) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0604;
		}
	}
	{
		int32_t L_294 = V_1;
		if ((((int32_t)L_294) == ((int32_t)7)))
		{
			goto IL_065e;
		}
	}

IL_0604:
	{
		int32_t L_295 = V_0;
		if ((!(((uint32_t)L_295) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_060d;
		}
	}
	{
		int32_t L_296 = V_1;
		if ((((int32_t)L_296) == ((int32_t)2)))
		{
			goto IL_065e;
		}
	}

IL_060d:
	{
		int32_t L_297 = V_0;
		if ((!(((uint32_t)L_297) == ((uint32_t)((int32_t)41)))))
		{
			goto IL_0616;
		}
	}
	{
		int32_t L_298 = V_1;
		if ((((int32_t)L_298) == ((int32_t)2)))
		{
			goto IL_065e;
		}
	}

IL_0616:
	{
		int32_t L_299 = V_0;
		if ((!(((uint32_t)L_299) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_061f;
		}
	}
	{
		int32_t L_300 = V_1;
		if ((((int32_t)L_300) == ((int32_t)2)))
		{
			goto IL_065e;
		}
	}

IL_061f:
	{
		int32_t L_301 = V_0;
		if ((!(((uint32_t)L_301) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_0628;
		}
	}
	{
		int32_t L_302 = V_1;
		if ((((int32_t)L_302) == ((int32_t)2)))
		{
			goto IL_065e;
		}
	}

IL_0628:
	{
		int32_t L_303 = V_0;
		if ((!(((uint32_t)L_303) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0631;
		}
	}
	{
		int32_t L_304 = V_1;
		if ((((int32_t)L_304) == ((int32_t)4)))
		{
			goto IL_065e;
		}
	}

IL_0631:
	{
		int32_t L_305 = V_0;
		if ((!(((uint32_t)L_305) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_063a;
		}
	}
	{
		int32_t L_306 = V_1;
		if ((((int32_t)L_306) == ((int32_t)4)))
		{
			goto IL_065e;
		}
	}

IL_063a:
	{
		int32_t L_307 = V_0;
		if ((!(((uint32_t)L_307) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0643;
		}
	}
	{
		int32_t L_308 = V_1;
		if ((((int32_t)L_308) == ((int32_t)4)))
		{
			goto IL_065e;
		}
	}

IL_0643:
	{
		int32_t L_309 = V_0;
		if ((!(((uint32_t)L_309) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_064c;
		}
	}
	{
		int32_t L_310 = V_1;
		if ((((int32_t)L_310) == ((int32_t)4)))
		{
			goto IL_065e;
		}
	}

IL_064c:
	{
		int32_t L_311 = V_0;
		if ((!(((uint32_t)L_311) == ((uint32_t)((int32_t)49)))))
		{
			goto IL_0655;
		}
	}
	{
		int32_t L_312 = V_1;
		if ((((int32_t)L_312) == ((int32_t)4)))
		{
			goto IL_065e;
		}
	}

IL_0655:
	{
		int32_t L_313 = V_0;
		if ((!(((uint32_t)L_313) == ((uint32_t)((int32_t)50)))))
		{
			goto IL_067e;
		}
	}
	{
		int32_t L_314 = V_1;
		if ((!(((uint32_t)L_314) == ((uint32_t)4))))
		{
			goto IL_067e;
		}
	}

IL_065e:
	{
		// ((i == 49) && (y == 4)) || ((i == 50) && (y == 4))) { Instantiate(brick, new Vector3(i, y), Quaternion.identity); i++; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_315 = __this->___brick_11;
		int32_t L_316 = V_0;
		int32_t L_317 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_318;
		memset((&L_318), 0, sizeof(L_318));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_318), ((float)L_316), ((float)L_317), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_319;
		L_319 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_320;
		L_320 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_315, L_318, L_319, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// ((i == 49) && (y == 4)) || ((i == 50) && (y == 4))) { Instantiate(brick, new Vector3(i, y), Quaternion.identity); i++; }
		int32_t L_321 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_321, 1));
		goto IL_06b6;
	}

IL_067e:
	{
		// else if (((i == 16) && (y == 6)) || ((i == 17) && (y == 6))) { Instantiate(castle[2], new Vector3(i, y), Quaternion.identity); i++; }
		int32_t L_322 = V_0;
		if ((!(((uint32_t)L_322) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0687;
		}
	}
	{
		int32_t L_323 = V_1;
		if ((((int32_t)L_323) == ((int32_t)6)))
		{
			goto IL_0690;
		}
	}

IL_0687:
	{
		int32_t L_324 = V_0;
		if ((!(((uint32_t)L_324) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_06b2;
		}
	}
	{
		int32_t L_325 = V_1;
		if ((!(((uint32_t)L_325) == ((uint32_t)6))))
		{
			goto IL_06b2;
		}
	}

IL_0690:
	{
		// else if (((i == 16) && (y == 6)) || ((i == 17) && (y == 6))) { Instantiate(castle[2], new Vector3(i, y), Quaternion.identity); i++; }
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_326 = __this->___castle_18;
		NullCheck(L_326);
		int32_t L_327 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_328 = (L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_327));
		int32_t L_329 = V_0;
		int32_t L_330 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_331;
		memset((&L_331), 0, sizeof(L_331));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_331), ((float)L_329), ((float)L_330), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_332;
		L_332 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_333;
		L_333 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_328, L_331, L_332, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// else if (((i == 16) && (y == 6)) || ((i == 17) && (y == 6))) { Instantiate(castle[2], new Vector3(i, y), Quaternion.identity); i++; }
		int32_t L_334 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_334, 1));
		goto IL_06b6;
	}

IL_06b2:
	{
		// else { i++; }
		int32_t L_335 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_335, 1));
	}

IL_06b6:
	{
		// while (i < columns)
		int32_t L_336 = V_0;
		int32_t L_337 = __this->___columns_5;
		if ((((int32_t)L_336) < ((int32_t)L_337)))
		{
			goto IL_0517;
		}
	}
	{
		// i = 10;
		V_0 = ((int32_t)10);
		// y++;
		int32_t L_338 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_338, 1));
	}

IL_06c9:
	{
		// while (y < 10) //Building the bricks
		int32_t L_339 = V_1;
		if ((((int32_t)L_339) < ((int32_t)((int32_t)10))))
		{
			goto IL_06b6;
		}
	}
	{
		// i = 10; y = 1;
		V_0 = ((int32_t)10);
		// i = 10; y = 1;
		V_1 = 1;
		goto IL_0822;
	}

IL_06d8:
	{
		// if (((i == 11) && (y == 1)) || ((i == 11) && (y == 2)) || ((i == 11) && (y == 3)) || ((i == 11) && (y == 4)) || ((i == 11) && (y == 5)) ||
		//     ((i == 26) && (y == 9)) || ((i == 26) && (y == 10)) || ((i == 26) && (y == 11)) || ((i == 27) && (y == 1)) || ((i == 38) && (y == 2)) ||
		//     ((i == 38) && (y == 3)) || ((i == 48) && (y == 6)) || ((i == 48) && (y == 7)) || ((i == 48) && (y == 8)) || ((i == 48) && (y == 9)) || ((i == 48) && (y == 10)) ||
		//     ((i == 58) && (y == 1)) || ((i == 59) && (y == 1)) || ((i == 60) && (y == 1)) || ((i == 61) && (y == 1)) || ((i == 59) && (y == 2)) || ((i == 60) && (y == 2)) ||
		//     ((i == 61) && (y == 2)) || ((i == 60) && (y == 3)) || ((i == 61) && (y == 3)) || ((i == 61) && (y == 4))) { Instantiate(basicWall, new Vector3(i, y), Quaternion.identity); i++; }
		int32_t L_340 = V_0;
		if ((!(((uint32_t)L_340) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_06e4;
		}
	}
	{
		int32_t L_341 = V_1;
		if ((((int32_t)L_341) == ((int32_t)1)))
		{
			goto IL_07eb;
		}
	}

IL_06e4:
	{
		int32_t L_342 = V_0;
		if ((!(((uint32_t)L_342) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_06f0;
		}
	}
	{
		int32_t L_343 = V_1;
		if ((((int32_t)L_343) == ((int32_t)2)))
		{
			goto IL_07eb;
		}
	}

IL_06f0:
	{
		int32_t L_344 = V_0;
		if ((!(((uint32_t)L_344) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_06fc;
		}
	}
	{
		int32_t L_345 = V_1;
		if ((((int32_t)L_345) == ((int32_t)3)))
		{
			goto IL_07eb;
		}
	}

IL_06fc:
	{
		int32_t L_346 = V_0;
		if ((!(((uint32_t)L_346) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0708;
		}
	}
	{
		int32_t L_347 = V_1;
		if ((((int32_t)L_347) == ((int32_t)4)))
		{
			goto IL_07eb;
		}
	}

IL_0708:
	{
		int32_t L_348 = V_0;
		if ((!(((uint32_t)L_348) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0714;
		}
	}
	{
		int32_t L_349 = V_1;
		if ((((int32_t)L_349) == ((int32_t)5)))
		{
			goto IL_07eb;
		}
	}

IL_0714:
	{
		int32_t L_350 = V_0;
		if ((!(((uint32_t)L_350) == ((uint32_t)((int32_t)26)))))
		{
			goto IL_0721;
		}
	}
	{
		int32_t L_351 = V_1;
		if ((((int32_t)L_351) == ((int32_t)((int32_t)9))))
		{
			goto IL_07eb;
		}
	}

IL_0721:
	{
		int32_t L_352 = V_0;
		if ((!(((uint32_t)L_352) == ((uint32_t)((int32_t)26)))))
		{
			goto IL_072e;
		}
	}
	{
		int32_t L_353 = V_1;
		if ((((int32_t)L_353) == ((int32_t)((int32_t)10))))
		{
			goto IL_07eb;
		}
	}

IL_072e:
	{
		int32_t L_354 = V_0;
		if ((!(((uint32_t)L_354) == ((uint32_t)((int32_t)26)))))
		{
			goto IL_073b;
		}
	}
	{
		int32_t L_355 = V_1;
		if ((((int32_t)L_355) == ((int32_t)((int32_t)11))))
		{
			goto IL_07eb;
		}
	}

IL_073b:
	{
		int32_t L_356 = V_0;
		if ((!(((uint32_t)L_356) == ((uint32_t)((int32_t)27)))))
		{
			goto IL_0747;
		}
	}
	{
		int32_t L_357 = V_1;
		if ((((int32_t)L_357) == ((int32_t)1)))
		{
			goto IL_07eb;
		}
	}

IL_0747:
	{
		int32_t L_358 = V_0;
		if ((!(((uint32_t)L_358) == ((uint32_t)((int32_t)38)))))
		{
			goto IL_0753;
		}
	}
	{
		int32_t L_359 = V_1;
		if ((((int32_t)L_359) == ((int32_t)2)))
		{
			goto IL_07eb;
		}
	}

IL_0753:
	{
		int32_t L_360 = V_0;
		if ((!(((uint32_t)L_360) == ((uint32_t)((int32_t)38)))))
		{
			goto IL_075f;
		}
	}
	{
		int32_t L_361 = V_1;
		if ((((int32_t)L_361) == ((int32_t)3)))
		{
			goto IL_07eb;
		}
	}

IL_075f:
	{
		int32_t L_362 = V_0;
		if ((!(((uint32_t)L_362) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_076b;
		}
	}
	{
		int32_t L_363 = V_1;
		if ((((int32_t)L_363) == ((int32_t)6)))
		{
			goto IL_07eb;
		}
	}

IL_076b:
	{
		int32_t L_364 = V_0;
		if ((!(((uint32_t)L_364) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0774;
		}
	}
	{
		int32_t L_365 = V_1;
		if ((((int32_t)L_365) == ((int32_t)7)))
		{
			goto IL_07eb;
		}
	}

IL_0774:
	{
		int32_t L_366 = V_0;
		if ((!(((uint32_t)L_366) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_077d;
		}
	}
	{
		int32_t L_367 = V_1;
		if ((((int32_t)L_367) == ((int32_t)8)))
		{
			goto IL_07eb;
		}
	}

IL_077d:
	{
		int32_t L_368 = V_0;
		if ((!(((uint32_t)L_368) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0787;
		}
	}
	{
		int32_t L_369 = V_1;
		if ((((int32_t)L_369) == ((int32_t)((int32_t)9))))
		{
			goto IL_07eb;
		}
	}

IL_0787:
	{
		int32_t L_370 = V_0;
		if ((!(((uint32_t)L_370) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0791;
		}
	}
	{
		int32_t L_371 = V_1;
		if ((((int32_t)L_371) == ((int32_t)((int32_t)10))))
		{
			goto IL_07eb;
		}
	}

IL_0791:
	{
		int32_t L_372 = V_0;
		if ((!(((uint32_t)L_372) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_079a;
		}
	}
	{
		int32_t L_373 = V_1;
		if ((((int32_t)L_373) == ((int32_t)1)))
		{
			goto IL_07eb;
		}
	}

IL_079a:
	{
		int32_t L_374 = V_0;
		if ((!(((uint32_t)L_374) == ((uint32_t)((int32_t)59)))))
		{
			goto IL_07a3;
		}
	}
	{
		int32_t L_375 = V_1;
		if ((((int32_t)L_375) == ((int32_t)1)))
		{
			goto IL_07eb;
		}
	}

IL_07a3:
	{
		int32_t L_376 = V_0;
		if ((!(((uint32_t)L_376) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_07ac;
		}
	}
	{
		int32_t L_377 = V_1;
		if ((((int32_t)L_377) == ((int32_t)1)))
		{
			goto IL_07eb;
		}
	}

IL_07ac:
	{
		int32_t L_378 = V_0;
		if ((!(((uint32_t)L_378) == ((uint32_t)((int32_t)61)))))
		{
			goto IL_07b5;
		}
	}
	{
		int32_t L_379 = V_1;
		if ((((int32_t)L_379) == ((int32_t)1)))
		{
			goto IL_07eb;
		}
	}

IL_07b5:
	{
		int32_t L_380 = V_0;
		if ((!(((uint32_t)L_380) == ((uint32_t)((int32_t)59)))))
		{
			goto IL_07be;
		}
	}
	{
		int32_t L_381 = V_1;
		if ((((int32_t)L_381) == ((int32_t)2)))
		{
			goto IL_07eb;
		}
	}

IL_07be:
	{
		int32_t L_382 = V_0;
		if ((!(((uint32_t)L_382) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_07c7;
		}
	}
	{
		int32_t L_383 = V_1;
		if ((((int32_t)L_383) == ((int32_t)2)))
		{
			goto IL_07eb;
		}
	}

IL_07c7:
	{
		int32_t L_384 = V_0;
		if ((!(((uint32_t)L_384) == ((uint32_t)((int32_t)61)))))
		{
			goto IL_07d0;
		}
	}
	{
		int32_t L_385 = V_1;
		if ((((int32_t)L_385) == ((int32_t)2)))
		{
			goto IL_07eb;
		}
	}

IL_07d0:
	{
		int32_t L_386 = V_0;
		if ((!(((uint32_t)L_386) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_07d9;
		}
	}
	{
		int32_t L_387 = V_1;
		if ((((int32_t)L_387) == ((int32_t)3)))
		{
			goto IL_07eb;
		}
	}

IL_07d9:
	{
		int32_t L_388 = V_0;
		if ((!(((uint32_t)L_388) == ((uint32_t)((int32_t)61)))))
		{
			goto IL_07e2;
		}
	}
	{
		int32_t L_389 = V_1;
		if ((((int32_t)L_389) == ((int32_t)3)))
		{
			goto IL_07eb;
		}
	}

IL_07e2:
	{
		int32_t L_390 = V_0;
		if ((!(((uint32_t)L_390) == ((uint32_t)((int32_t)61)))))
		{
			goto IL_080b;
		}
	}
	{
		int32_t L_391 = V_1;
		if ((!(((uint32_t)L_391) == ((uint32_t)4))))
		{
			goto IL_080b;
		}
	}

IL_07eb:
	{
		// ((i == 61) && (y == 2)) || ((i == 60) && (y == 3)) || ((i == 61) && (y == 3)) || ((i == 61) && (y == 4))) { Instantiate(basicWall, new Vector3(i, y), Quaternion.identity); i++; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_392 = __this->___basicWall_10;
		int32_t L_393 = V_0;
		int32_t L_394 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_395;
		memset((&L_395), 0, sizeof(L_395));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_395), ((float)L_393), ((float)L_394), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_396;
		L_396 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_397;
		L_397 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_392, L_395, L_396, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// ((i == 61) && (y == 2)) || ((i == 60) && (y == 3)) || ((i == 61) && (y == 3)) || ((i == 61) && (y == 4))) { Instantiate(basicWall, new Vector3(i, y), Quaternion.identity); i++; }
		int32_t L_398 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_398, 1));
		goto IL_080f;
	}

IL_080b:
	{
		// else { i++; }
		int32_t L_399 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_399, 1));
	}

IL_080f:
	{
		// while (i < columns)
		int32_t L_400 = V_0;
		int32_t L_401 = __this->___columns_5;
		if ((((int32_t)L_400) < ((int32_t)L_401)))
		{
			goto IL_06d8;
		}
	}
	{
		// i = 10;
		V_0 = ((int32_t)10);
		// y++;
		int32_t L_402 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_402, 1));
	}

IL_0822:
	{
		// while (y < 12) //Building the basic walls
		int32_t L_403 = V_1;
		if ((((int32_t)L_403) < ((int32_t)((int32_t)12))))
		{
			goto IL_080f;
		}
	}
	{
		// i = 10; y = 1;
		V_0 = ((int32_t)10);
		// i = 10; y = 1;
		V_1 = 1;
		goto IL_0919;
	}

IL_0831:
	{
		// var rnd = Random.Range(0, 2);
		int32_t L_404;
		L_404 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, 2, NULL);
		V_4 = L_404;
		goto IL_0906;
	}

IL_083f:
	{
		// if (((i == 10) && (y == 1)) || ((i == 10) && (y == 2)) || ((i == 10) && (y == 3)) || ((i == 10) && (y == 4)) || ((i == 10) && (y == 5)) || ((i == 20) && (y == 4)) ||
		//     ((i == 20) && (y == 5)) || ((i == 20) && (y == 6)) || ((i == 20) && (y == 7)) || ((i == 37) && (y == 2)) || ((i == 37) && (y == 3)) || ((i == 47) && (y == 6)) ||
		//     ((i == 47) && (y == 7)) || ((i == 47) && (y == 8)) || ((i == 47) && (y == 9)) || ((i == 47) && (y == 10))) { Instantiate(wall[rnd = Random.Range(0, 2)], new Vector3(i, y), Quaternion.identity); i++; }
		int32_t L_405 = V_0;
		if ((!(((uint32_t)L_405) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_084b;
		}
	}
	{
		int32_t L_406 = V_1;
		if ((((int32_t)L_406) == ((int32_t)1)))
		{
			goto IL_08d7;
		}
	}

IL_084b:
	{
		int32_t L_407 = V_0;
		if ((!(((uint32_t)L_407) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0857;
		}
	}
	{
		int32_t L_408 = V_1;
		if ((((int32_t)L_408) == ((int32_t)2)))
		{
			goto IL_08d7;
		}
	}

IL_0857:
	{
		int32_t L_409 = V_0;
		if ((!(((uint32_t)L_409) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0860;
		}
	}
	{
		int32_t L_410 = V_1;
		if ((((int32_t)L_410) == ((int32_t)3)))
		{
			goto IL_08d7;
		}
	}

IL_0860:
	{
		int32_t L_411 = V_0;
		if ((!(((uint32_t)L_411) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0869;
		}
	}
	{
		int32_t L_412 = V_1;
		if ((((int32_t)L_412) == ((int32_t)4)))
		{
			goto IL_08d7;
		}
	}

IL_0869:
	{
		int32_t L_413 = V_0;
		if ((!(((uint32_t)L_413) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0872;
		}
	}
	{
		int32_t L_414 = V_1;
		if ((((int32_t)L_414) == ((int32_t)5)))
		{
			goto IL_08d7;
		}
	}

IL_0872:
	{
		int32_t L_415 = V_0;
		if ((!(((uint32_t)L_415) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_087b;
		}
	}
	{
		int32_t L_416 = V_1;
		if ((((int32_t)L_416) == ((int32_t)4)))
		{
			goto IL_08d7;
		}
	}

IL_087b:
	{
		int32_t L_417 = V_0;
		if ((!(((uint32_t)L_417) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_0884;
		}
	}
	{
		int32_t L_418 = V_1;
		if ((((int32_t)L_418) == ((int32_t)5)))
		{
			goto IL_08d7;
		}
	}

IL_0884:
	{
		int32_t L_419 = V_0;
		if ((!(((uint32_t)L_419) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_088d;
		}
	}
	{
		int32_t L_420 = V_1;
		if ((((int32_t)L_420) == ((int32_t)6)))
		{
			goto IL_08d7;
		}
	}

IL_088d:
	{
		int32_t L_421 = V_0;
		if ((!(((uint32_t)L_421) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_0896;
		}
	}
	{
		int32_t L_422 = V_1;
		if ((((int32_t)L_422) == ((int32_t)7)))
		{
			goto IL_08d7;
		}
	}

IL_0896:
	{
		int32_t L_423 = V_0;
		if ((!(((uint32_t)L_423) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_089f;
		}
	}
	{
		int32_t L_424 = V_1;
		if ((((int32_t)L_424) == ((int32_t)2)))
		{
			goto IL_08d7;
		}
	}

IL_089f:
	{
		int32_t L_425 = V_0;
		if ((!(((uint32_t)L_425) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_08a8;
		}
	}
	{
		int32_t L_426 = V_1;
		if ((((int32_t)L_426) == ((int32_t)3)))
		{
			goto IL_08d7;
		}
	}

IL_08a8:
	{
		int32_t L_427 = V_0;
		if ((!(((uint32_t)L_427) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_08b1;
		}
	}
	{
		int32_t L_428 = V_1;
		if ((((int32_t)L_428) == ((int32_t)6)))
		{
			goto IL_08d7;
		}
	}

IL_08b1:
	{
		int32_t L_429 = V_0;
		if ((!(((uint32_t)L_429) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_08ba;
		}
	}
	{
		int32_t L_430 = V_1;
		if ((((int32_t)L_430) == ((int32_t)7)))
		{
			goto IL_08d7;
		}
	}

IL_08ba:
	{
		int32_t L_431 = V_0;
		if ((!(((uint32_t)L_431) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_08c3;
		}
	}
	{
		int32_t L_432 = V_1;
		if ((((int32_t)L_432) == ((int32_t)8)))
		{
			goto IL_08d7;
		}
	}

IL_08c3:
	{
		int32_t L_433 = V_0;
		if ((!(((uint32_t)L_433) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_08cd;
		}
	}
	{
		int32_t L_434 = V_1;
		if ((((int32_t)L_434) == ((int32_t)((int32_t)9))))
		{
			goto IL_08d7;
		}
	}

IL_08cd:
	{
		int32_t L_435 = V_0;
		if ((!(((uint32_t)L_435) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0902;
		}
	}
	{
		int32_t L_436 = V_1;
		if ((!(((uint32_t)L_436) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0902;
		}
	}

IL_08d7:
	{
		// ((i == 47) && (y == 7)) || ((i == 47) && (y == 8)) || ((i == 47) && (y == 9)) || ((i == 47) && (y == 10))) { Instantiate(wall[rnd = Random.Range(0, 2)], new Vector3(i, y), Quaternion.identity); i++; }
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_437 = __this->___wall_14;
		int32_t L_438;
		L_438 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, 2, NULL);
		int32_t L_439 = L_438;
		V_4 = L_439;
		NullCheck(L_437);
		int32_t L_440 = L_439;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_441 = (L_437)->GetAt(static_cast<il2cpp_array_size_t>(L_440));
		int32_t L_442 = V_0;
		int32_t L_443 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_444;
		memset((&L_444), 0, sizeof(L_444));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_444), ((float)L_442), ((float)L_443), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_445;
		L_445 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_446;
		L_446 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_441, L_444, L_445, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// ((i == 47) && (y == 7)) || ((i == 47) && (y == 8)) || ((i == 47) && (y == 9)) || ((i == 47) && (y == 10))) { Instantiate(wall[rnd = Random.Range(0, 2)], new Vector3(i, y), Quaternion.identity); i++; }
		int32_t L_447 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_447, 1));
		goto IL_0906;
	}

IL_0902:
	{
		// else { i++; }
		int32_t L_448 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_448, 1));
	}

IL_0906:
	{
		// while (i < columns)
		int32_t L_449 = V_0;
		int32_t L_450 = __this->___columns_5;
		if ((((int32_t)L_449) < ((int32_t)L_450)))
		{
			goto IL_083f;
		}
	}
	{
		// i = 10;
		V_0 = ((int32_t)10);
		// y++;
		int32_t L_451 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_451, 1));
	}

IL_0919:
	{
		// while (y < 11) //Building the sticky walls
		int32_t L_452 = V_1;
		if ((((int32_t)L_452) < ((int32_t)((int32_t)11))))
		{
			goto IL_0831;
		}
	}
	{
		// PlacingCoins(level);
		int32_t L_453 = ___level0;
		BoardManager_PlacingCoins_m6FDC5559A592DA9FA3FB39FBC8B9C8EB0BECE6FD(__this, L_453, NULL);
		// GenerateEnemies(level);
		int32_t L_454 = ___level0;
		BoardManager_GenerateEnemies_m5E125128B858CD3465C018045BF5D227942E0771(__this, L_454, NULL);
		// PlacingDecorations(level);
		int32_t L_455 = ___level0;
		BoardManager_PlacingDecorations_mD0078FADB7D000A0EAC673D219C353AC6CD8A3C1(__this, L_455, NULL);
		// BuildingInvisibleWallAndExit();
		BoardManager_BuildingInvisibleWallAndExit_m085AE4AB4D3589DDE701DD0AEF13EC3EDA06EE83(__this, NULL);
		// }
		return;
	}
}
// System.Void BoardManager::PlacingCoins(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_PlacingCoins_m6FDC5559A592DA9FA3FB39FBC8B9C8EB0BECE6FD (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___level0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (level == 0)
		int32_t L_0 = ___level0;
		if (L_0)
		{
			goto IL_0107;
		}
	}
	{
		// Instantiate(coin, new Vector3(19, 5), Quaternion.identity); Instantiate(coin, new Vector3(33, 8), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___coin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_2), (19.0f), (5.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_1, L_2, L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(coin, new Vector3(19, 5), Quaternion.identity); Instantiate(coin, new Vector3(33, 8), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___coin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_6), (33.0f), (8.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_5, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(coin, new Vector3(35, 1), Quaternion.identity); Instantiate(coin, new Vector3(37, 6), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___coin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_10), (35.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_9, L_10, L_11, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(coin, new Vector3(35, 1), Quaternion.identity); Instantiate(coin, new Vector3(37, 6), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___coin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_14), (37.0f), (6.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_13, L_14, L_15, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(coin, new Vector3(41, 3), Quaternion.identity); Instantiate(coin, new Vector3(49, 9), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___coin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_18), (41.0f), (3.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_17, L_18, L_19, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(coin, new Vector3(41, 3), Quaternion.identity); Instantiate(coin, new Vector3(49, 9), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___coin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_22), (49.0f), (9.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_21, L_22, L_23, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(coin, new Vector3(55, 1), Quaternion.identity); Instantiate(coin, new Vector3(63, 7), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___coin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_26), (55.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_25, L_26, L_27, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(coin, new Vector3(55, 1), Quaternion.identity); Instantiate(coin, new Vector3(63, 7), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___coin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_30), (63.0f), (7.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_29, L_30, L_31, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		return;
	}

IL_0107:
	{
		// Instantiate(coin, new Vector3(16, 8), Quaternion.identity); Instantiate(coin, new Vector3(16, 9), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___coin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_34), (16.0f), (8.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
		L_35 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_33, L_34, L_35, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(coin, new Vector3(16, 8), Quaternion.identity); Instantiate(coin, new Vector3(16, 9), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___coin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_38), (16.0f), (9.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
		L_39 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40;
		L_40 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_37, L_38, L_39, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(coin, new Vector3(17, 8), Quaternion.identity); Instantiate(coin, new Vector3(17, 9), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___coin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_42), (17.0f), (8.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44;
		L_44 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_41, L_42, L_43, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(coin, new Vector3(17, 8), Quaternion.identity); Instantiate(coin, new Vector3(17, 9), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = __this->___coin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_46), (17.0f), (9.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_47;
		L_47 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48;
		L_48 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_45, L_46, L_47, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(coin, new Vector3(19, 3), Quaternion.identity); Instantiate(coin, new Vector3(23, 8), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = __this->___coin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_50), (19.0f), (3.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_51;
		L_51 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52;
		L_52 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_49, L_50, L_51, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(coin, new Vector3(19, 3), Quaternion.identity); Instantiate(coin, new Vector3(23, 8), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53 = __this->___coin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_54), (23.0f), (8.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_55;
		L_55 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56;
		L_56 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_53, L_54, L_55, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(coin, new Vector3(22, 3), Quaternion.identity); Instantiate(coin, new Vector3(25, 10), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = __this->___coin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_58), (22.0f), (3.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_59;
		L_59 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60;
		L_60 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_57, L_58, L_59, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(coin, new Vector3(22, 3), Quaternion.identity); Instantiate(coin, new Vector3(25, 10), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61 = __this->___coin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_62), (25.0f), (10.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_63;
		L_63 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64;
		L_64 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_61, L_62, L_63, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(coin, new Vector3(32, 6), Quaternion.identity); Instantiate(coin, new Vector3(37, 8), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65 = __this->___coin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		memset((&L_66), 0, sizeof(L_66));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_66), (32.0f), (6.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_67;
		L_67 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68;
		L_68 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_65, L_66, L_67, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(coin, new Vector3(32, 6), Quaternion.identity); Instantiate(coin, new Vector3(37, 8), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = __this->___coin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_70), (37.0f), (8.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_71;
		L_71 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72;
		L_72 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_69, L_70, L_71, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(coin, new Vector3(48, 11), Quaternion.identity); Instantiate(coin, new Vector3(45, 1), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_73 = __this->___coin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		memset((&L_74), 0, sizeof(L_74));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_74), (48.0f), (11.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_75;
		L_75 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76;
		L_76 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_73, L_74, L_75, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(coin, new Vector3(48, 11), Quaternion.identity); Instantiate(coin, new Vector3(45, 1), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77 = __this->___coin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_78), (45.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_79;
		L_79 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80;
		L_80 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_77, L_78, L_79, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(coin, new Vector3(46, 1), Quaternion.identity); Instantiate(coin, new Vector3(47, 1), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81 = __this->___coin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		memset((&L_82), 0, sizeof(L_82));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_82), (46.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_83;
		L_83 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84;
		L_84 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_81, L_82, L_83, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(coin, new Vector3(46, 1), Quaternion.identity); Instantiate(coin, new Vector3(47, 1), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_85 = __this->___coin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		memset((&L_86), 0, sizeof(L_86));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_86), (47.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_87;
		L_87 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_88;
		L_88 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_85, L_86, L_87, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(coin, new Vector3(48, 1), Quaternion.identity); Instantiate(coin, new Vector3(49, 1), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_89 = __this->___coin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		memset((&L_90), 0, sizeof(L_90));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_90), (48.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_91;
		L_91 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_92;
		L_92 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_89, L_90, L_91, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(coin, new Vector3(48, 1), Quaternion.identity); Instantiate(coin, new Vector3(49, 1), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_93 = __this->___coin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		memset((&L_94), 0, sizeof(L_94));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_94), (49.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_95;
		L_95 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_96;
		L_96 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_93, L_94, L_95, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(coin, new Vector3(50, 1), Quaternion.identity); Instantiate(coin, new Vector3(63, 8), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_97 = __this->___coin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_98), (50.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_99;
		L_99 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_100;
		L_100 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_97, L_98, L_99, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(coin, new Vector3(50, 1), Quaternion.identity); Instantiate(coin, new Vector3(63, 8), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_101 = __this->___coin_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		memset((&L_102), 0, sizeof(L_102));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_102), (63.0f), (8.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_103;
		L_103 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_104;
		L_104 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_101, L_102, L_103, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BoardManager::GenerateEnemies(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_GenerateEnemies_m5E125128B858CD3465C018045BF5D227942E0771 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___level0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (level == 0)
		int32_t L_0 = ___level0;
		if (L_0)
		{
			goto IL_00a7;
		}
	}
	{
		// Instantiate(goomba, new Vector3(15, 1), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___goomba_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_2), (15.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_1, L_2, L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(goomba, new Vector3(17, 5), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___goomba_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_6), (17.0f), (5.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_5, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(goomba, new Vector3(28, 6), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___goomba_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_10), (28.0f), (6.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_9, L_10, L_11, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(goomba, new Vector3(35, 6), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___goomba_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_14), (35.0f), (6.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_13, L_14, L_15, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(goomba, new Vector3(46, 3), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___goomba_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_18), (46.0f), (3.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_17, L_18, L_19, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		return;
	}

IL_00a7:
	{
		// Instantiate(goomba, new Vector3(14, 3), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___goomba_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_22), (14.0f), (3.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_21, L_22, L_23, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(goomba, new Vector3(20, 8), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___goomba_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_26), (20.0f), (8.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_25, L_26, L_27, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(goomba, new Vector3(30, 5), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___goomba_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_30), (30.0f), (5.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_29, L_30, L_31, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(goomba, new Vector3(45, 5), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___goomba_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_34), (45.0f), (5.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
		L_35 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_33, L_34, L_35, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(goomba, new Vector3(28, 1), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___goomba_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_38), (28.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
		L_39 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40;
		L_40 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_37, L_38, L_39, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(goomba, new Vector3(50, 1), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___goomba_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_42), (50.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44;
		L_44 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_41, L_42, L_43, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BoardManager::PlacingDecorations(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_PlacingDecorations_mD0078FADB7D000A0EAC673D219C353AC6CD8A3C1 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___level0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlacingClouds();
		BoardManager_PlacingClouds_m27388B1D9846DD92421A10730322F57DCA508781(__this, NULL);
		// if (level == 0)
		int32_t L_0 = ___level0;
		if (L_0)
		{
			goto IL_033d;
		}
	}
	{
		// Instantiate(smallBush[0], new Vector3(4, 1), Quaternion.identity); Instantiate(smallBush[1], new Vector3(5, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___smallBush_15;
		NullCheck(L_1);
		int32_t L_2 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_4), (4.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_3, L_4, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallBush[0], new Vector3(4, 1), Quaternion.identity); Instantiate(smallBush[1], new Vector3(5, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___smallBush_15;
		NullCheck(L_7);
		int32_t L_8 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_10), (5.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_9, L_10, L_11, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallBush[0], new Vector3(-3, 1), Quaternion.identity); Instantiate(smallBush[1], new Vector3(-2, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = __this->___smallBush_15;
		NullCheck(L_13);
		int32_t L_14 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_16), (-3.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_15, L_16, L_17, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallBush[0], new Vector3(-3, 1), Quaternion.identity); Instantiate(smallBush[1], new Vector3(-2, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = __this->___smallBush_15;
		NullCheck(L_19);
		int32_t L_20 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_22), (-2.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_21, L_22, L_23, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallBush[0], new Vector3(17, 1), Quaternion.identity); Instantiate(smallBush[1], new Vector3(18, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = __this->___smallBush_15;
		NullCheck(L_25);
		int32_t L_26 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_28), (17.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_27, L_28, L_29, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallBush[0], new Vector3(17, 1), Quaternion.identity); Instantiate(smallBush[1], new Vector3(18, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_31 = __this->___smallBush_15;
		NullCheck(L_31);
		int32_t L_32 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_34), (18.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
		L_35 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_33, L_34, L_35, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallBush[0], new Vector3(21, 1), Quaternion.identity); Instantiate(smallBush[1], new Vector3(22, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_37 = __this->___smallBush_15;
		NullCheck(L_37);
		int32_t L_38 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_40), (21.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41;
		L_41 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42;
		L_42 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_39, L_40, L_41, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallBush[0], new Vector3(21, 1), Quaternion.identity); Instantiate(smallBush[1], new Vector3(22, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_43 = __this->___smallBush_15;
		NullCheck(L_43);
		int32_t L_44 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_46), (22.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_47;
		L_47 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48;
		L_48 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_45, L_46, L_47, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallBush[0], new Vector3(28, 1), Quaternion.identity); Instantiate(smallBush[1], new Vector3(29, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_49 = __this->___smallBush_15;
		NullCheck(L_49);
		int32_t L_50 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_52), (28.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_53;
		L_53 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54;
		L_54 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_51, L_52, L_53, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallBush[0], new Vector3(28, 1), Quaternion.identity); Instantiate(smallBush[1], new Vector3(29, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_55 = __this->___smallBush_15;
		NullCheck(L_55);
		int32_t L_56 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_58), (29.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_59;
		L_59 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60;
		L_60 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_57, L_58, L_59, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallBush[0], new Vector3(21, 1), Quaternion.identity); Instantiate(smallBush[1], new Vector3(22, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_61 = __this->___smallBush_15;
		NullCheck(L_61);
		int32_t L_62 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_64), (21.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65;
		L_65 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66;
		L_66 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_63, L_64, L_65, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallBush[0], new Vector3(21, 1), Quaternion.identity); Instantiate(smallBush[1], new Vector3(22, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_67 = __this->___smallBush_15;
		NullCheck(L_67);
		int32_t L_68 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_70), (22.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_71;
		L_71 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72;
		L_72 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_69, L_70, L_71, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallBush[0], new Vector3(42, 1), Quaternion.identity); Instantiate(smallBush[1], new Vector3(43, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_73 = __this->___smallBush_15;
		NullCheck(L_73);
		int32_t L_74 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		memset((&L_76), 0, sizeof(L_76));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_76), (42.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_77;
		L_77 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78;
		L_78 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_75, L_76, L_77, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallBush[0], new Vector3(42, 1), Quaternion.identity); Instantiate(smallBush[1], new Vector3(43, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_79 = __this->___smallBush_15;
		NullCheck(L_79);
		int32_t L_80 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		memset((&L_82), 0, sizeof(L_82));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_82), (43.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_83;
		L_83 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84;
		L_84 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_81, L_82, L_83, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallBush[0], new Vector3(66, 1), Quaternion.identity); Instantiate(smallBush[1], new Vector3(67, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_85 = __this->___smallBush_15;
		NullCheck(L_85);
		int32_t L_86 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_88), (66.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_89;
		L_89 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_90;
		L_90 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_87, L_88, L_89, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallBush[0], new Vector3(66, 1), Quaternion.identity); Instantiate(smallBush[1], new Vector3(67, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_91 = __this->___smallBush_15;
		NullCheck(L_91);
		int32_t L_92 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		memset((&L_94), 0, sizeof(L_94));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_94), (67.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_95;
		L_95 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_96;
		L_96 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_93, L_94, L_95, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(mountain[0], new Vector3(36, 1), Quaternion.identity); Instantiate(mountain[1], new Vector3(37, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_97 = __this->___mountain_19;
		NullCheck(L_97);
		int32_t L_98 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_99 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		memset((&L_100), 0, sizeof(L_100));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_100), (36.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_101;
		L_101 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_102;
		L_102 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_99, L_100, L_101, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(mountain[0], new Vector3(36, 1), Quaternion.identity); Instantiate(mountain[1], new Vector3(37, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_103 = __this->___mountain_19;
		NullCheck(L_103);
		int32_t L_104 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_105 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		memset((&L_106), 0, sizeof(L_106));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_106), (37.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_107;
		L_107 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_108;
		L_108 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_105, L_106, L_107, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(mountain[2], new Vector3(37, 2), Quaternion.identity); Instantiate(mountain[3], new Vector3(38, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_109 = __this->___mountain_19;
		NullCheck(L_109);
		int32_t L_110 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_111 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		memset((&L_112), 0, sizeof(L_112));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_112), (37.0f), (2.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_113;
		L_113 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_114;
		L_114 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_111, L_112, L_113, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(mountain[2], new Vector3(37, 2), Quaternion.identity); Instantiate(mountain[3], new Vector3(38, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_115 = __this->___mountain_19;
		NullCheck(L_115);
		int32_t L_116 = 3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_117 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118;
		memset((&L_118), 0, sizeof(L_118));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_118), (38.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_119;
		L_119 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_120;
		L_120 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_117, L_118, L_119, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(mountain[0], new Vector3(54, 1), Quaternion.identity); Instantiate(mountain[1], new Vector3(55, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_121 = __this->___mountain_19;
		NullCheck(L_121);
		int32_t L_122 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_123 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124;
		memset((&L_124), 0, sizeof(L_124));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_124), (54.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_125;
		L_125 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_126;
		L_126 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_123, L_124, L_125, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(mountain[0], new Vector3(54, 1), Quaternion.identity); Instantiate(mountain[1], new Vector3(55, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_127 = __this->___mountain_19;
		NullCheck(L_127);
		int32_t L_128 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_129 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130;
		memset((&L_130), 0, sizeof(L_130));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_130), (55.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_131;
		L_131 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_132;
		L_132 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_129, L_130, L_131, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(mountain[2], new Vector3(55, 2), Quaternion.identity); Instantiate(mountain[3], new Vector3(56, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_133 = __this->___mountain_19;
		NullCheck(L_133);
		int32_t L_134 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136;
		memset((&L_136), 0, sizeof(L_136));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_136), (55.0f), (2.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_137;
		L_137 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_138;
		L_138 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_135, L_136, L_137, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(mountain[2], new Vector3(55, 2), Quaternion.identity); Instantiate(mountain[3], new Vector3(56, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_139 = __this->___mountain_19;
		NullCheck(L_139);
		int32_t L_140 = 3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_141 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_142;
		memset((&L_142), 0, sizeof(L_142));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_142), (56.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_143;
		L_143 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_144;
		L_144 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_141, L_142, L_143, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		return;
	}

IL_033d:
	{
		// Instantiate(smallBush[0], new Vector3(4, 1), Quaternion.identity); Instantiate(smallBush[1], new Vector3(5, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_145 = __this->___smallBush_15;
		NullCheck(L_145);
		int32_t L_146 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_147 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148;
		memset((&L_148), 0, sizeof(L_148));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_148), (4.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_149;
		L_149 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_150;
		L_150 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_147, L_148, L_149, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallBush[0], new Vector3(4, 1), Quaternion.identity); Instantiate(smallBush[1], new Vector3(5, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_151 = __this->___smallBush_15;
		NullCheck(L_151);
		int32_t L_152 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_153 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_154;
		memset((&L_154), 0, sizeof(L_154));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_154), (5.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_155;
		L_155 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_156;
		L_156 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_153, L_154, L_155, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallBush[0], new Vector3(-3, 1), Quaternion.identity); Instantiate(smallBush[1], new Vector3(-2, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_157 = __this->___smallBush_15;
		NullCheck(L_157);
		int32_t L_158 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_159 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_160;
		memset((&L_160), 0, sizeof(L_160));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_160), (-3.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_161;
		L_161 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_162;
		L_162 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_159, L_160, L_161, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallBush[0], new Vector3(-3, 1), Quaternion.identity); Instantiate(smallBush[1], new Vector3(-2, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_163 = __this->___smallBush_15;
		NullCheck(L_163);
		int32_t L_164 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_165 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_166;
		memset((&L_166), 0, sizeof(L_166));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_166), (-2.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_167;
		L_167 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_168;
		L_168 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_165, L_166, L_167, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallBush[0], new Vector3(30, 1), Quaternion.identity); Instantiate(smallBush[1], new Vector3(31, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_169 = __this->___smallBush_15;
		NullCheck(L_169);
		int32_t L_170 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_171 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_172;
		memset((&L_172), 0, sizeof(L_172));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_172), (30.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_173;
		L_173 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_174;
		L_174 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_171, L_172, L_173, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallBush[0], new Vector3(30, 1), Quaternion.identity); Instantiate(smallBush[1], new Vector3(31, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_175 = __this->___smallBush_15;
		NullCheck(L_175);
		int32_t L_176 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_177 = (L_175)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_178;
		memset((&L_178), 0, sizeof(L_178));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_178), (31.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_179;
		L_179 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_180;
		L_180 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_177, L_178, L_179, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallBush[0], new Vector3(42, 1), Quaternion.identity); Instantiate(smallBush[1], new Vector3(43, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_181 = __this->___smallBush_15;
		NullCheck(L_181);
		int32_t L_182 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_183 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_184;
		memset((&L_184), 0, sizeof(L_184));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_184), (42.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_185;
		L_185 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_186;
		L_186 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_183, L_184, L_185, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallBush[0], new Vector3(42, 1), Quaternion.identity); Instantiate(smallBush[1], new Vector3(43, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_187 = __this->___smallBush_15;
		NullCheck(L_187);
		int32_t L_188 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_189 = (L_187)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_190;
		memset((&L_190), 0, sizeof(L_190));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_190), (43.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_191;
		L_191 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_192;
		L_192 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_189, L_190, L_191, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallBush[0], new Vector3(66, 1), Quaternion.identity); Instantiate(smallBush[1], new Vector3(67, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_193 = __this->___smallBush_15;
		NullCheck(L_193);
		int32_t L_194 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_195 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_194));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_196;
		memset((&L_196), 0, sizeof(L_196));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_196), (66.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_197;
		L_197 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_198;
		L_198 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_195, L_196, L_197, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallBush[0], new Vector3(66, 1), Quaternion.identity); Instantiate(smallBush[1], new Vector3(67, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_199 = __this->___smallBush_15;
		NullCheck(L_199);
		int32_t L_200 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_201 = (L_199)->GetAt(static_cast<il2cpp_array_size_t>(L_200));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_202;
		memset((&L_202), 0, sizeof(L_202));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_202), (67.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_203;
		L_203 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_204;
		L_204 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_201, L_202, L_203, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(mountain[0], new Vector3(33, 1), Quaternion.identity); Instantiate(mountain[1], new Vector3(34, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_205 = __this->___mountain_19;
		NullCheck(L_205);
		int32_t L_206 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_207 = (L_205)->GetAt(static_cast<il2cpp_array_size_t>(L_206));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_208;
		memset((&L_208), 0, sizeof(L_208));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_208), (33.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_209;
		L_209 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_210;
		L_210 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_207, L_208, L_209, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(mountain[0], new Vector3(33, 1), Quaternion.identity); Instantiate(mountain[1], new Vector3(34, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_211 = __this->___mountain_19;
		NullCheck(L_211);
		int32_t L_212 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_213 = (L_211)->GetAt(static_cast<il2cpp_array_size_t>(L_212));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_214;
		memset((&L_214), 0, sizeof(L_214));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_214), (34.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_215;
		L_215 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_216;
		L_216 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_213, L_214, L_215, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(mountain[2], new Vector3(34, 2), Quaternion.identity); Instantiate(mountain[3], new Vector3(35, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_217 = __this->___mountain_19;
		NullCheck(L_217);
		int32_t L_218 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_219 = (L_217)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_220;
		memset((&L_220), 0, sizeof(L_220));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_220), (34.0f), (2.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_221;
		L_221 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_222;
		L_222 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_219, L_220, L_221, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(mountain[2], new Vector3(34, 2), Quaternion.identity); Instantiate(mountain[3], new Vector3(35, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_223 = __this->___mountain_19;
		NullCheck(L_223);
		int32_t L_224 = 3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_225 = (L_223)->GetAt(static_cast<il2cpp_array_size_t>(L_224));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_226;
		memset((&L_226), 0, sizeof(L_226));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_226), (35.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_227;
		L_227 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_228;
		L_228 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_225, L_226, L_227, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(mountain[0], new Vector3(53, 1), Quaternion.identity); Instantiate(mountain[1], new Vector3(54, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_229 = __this->___mountain_19;
		NullCheck(L_229);
		int32_t L_230 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_231 = (L_229)->GetAt(static_cast<il2cpp_array_size_t>(L_230));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_232;
		memset((&L_232), 0, sizeof(L_232));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_232), (53.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_233;
		L_233 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_234;
		L_234 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_231, L_232, L_233, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(mountain[0], new Vector3(53, 1), Quaternion.identity); Instantiate(mountain[1], new Vector3(54, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_235 = __this->___mountain_19;
		NullCheck(L_235);
		int32_t L_236 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_237 = (L_235)->GetAt(static_cast<il2cpp_array_size_t>(L_236));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_238;
		memset((&L_238), 0, sizeof(L_238));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_238), (54.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_239;
		L_239 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_240;
		L_240 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_237, L_238, L_239, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(mountain[2], new Vector3(54, 2), Quaternion.identity); Instantiate(mountain[3], new Vector3(55, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_241 = __this->___mountain_19;
		NullCheck(L_241);
		int32_t L_242 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_243 = (L_241)->GetAt(static_cast<il2cpp_array_size_t>(L_242));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_244;
		memset((&L_244), 0, sizeof(L_244));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_244), (54.0f), (2.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_245;
		L_245 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_246;
		L_246 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_243, L_244, L_245, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(mountain[2], new Vector3(54, 2), Quaternion.identity); Instantiate(mountain[3], new Vector3(55, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_247 = __this->___mountain_19;
		NullCheck(L_247);
		int32_t L_248 = 3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_249 = (L_247)->GetAt(static_cast<il2cpp_array_size_t>(L_248));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_250;
		memset((&L_250), 0, sizeof(L_250));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_250), (55.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_251;
		L_251 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_252;
		L_252 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_249, L_250, L_251, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BoardManager::PlacingClouds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_PlacingClouds_m27388B1D9846DD92421A10730322F57DCA508781 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(smallCloud[0], new Vector3(7, 6), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(8, 6), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(7, 5), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(8, 5), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___smallCloud_17;
		NullCheck(L_0);
		int32_t L_1 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_3), (7.0f), (6.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_2, L_3, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(7, 6), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(8, 6), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(7, 5), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(8, 5), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___smallCloud_17;
		NullCheck(L_6);
		int32_t L_7 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_9), (8.0f), (6.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_8, L_9, L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(7, 6), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(8, 6), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(7, 5), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(8, 5), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = __this->___smallCloud_17;
		NullCheck(L_12);
		int32_t L_13 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_15), (7.0f), (5.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_14, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(7, 6), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(8, 6), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(7, 5), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(8, 5), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_18 = __this->___smallCloud_17;
		NullCheck(L_18);
		int32_t L_19 = 3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_21), (8.0f), (5.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_20, L_21, L_22, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(13, 8), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(14, 8), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(13, 7), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(14, 7), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_24 = __this->___smallCloud_17;
		NullCheck(L_24);
		int32_t L_25 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_27), (13.0f), (8.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_26, L_27, L_28, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(13, 8), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(14, 8), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(13, 7), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(14, 7), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_30 = __this->___smallCloud_17;
		NullCheck(L_30);
		int32_t L_31 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_33), (14.0f), (8.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34;
		L_34 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_32, L_33, L_34, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(13, 8), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(14, 8), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(13, 7), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(14, 7), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_36 = __this->___smallCloud_17;
		NullCheck(L_36);
		int32_t L_37 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_39), (13.0f), (7.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40;
		L_40 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_38, L_39, L_40, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(13, 8), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(14, 8), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(13, 7), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(14, 7), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_42 = __this->___smallCloud_17;
		NullCheck(L_42);
		int32_t L_43 = 3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_45), (14.0f), (7.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46;
		L_46 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47;
		L_47 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_44, L_45, L_46, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(25, 8), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(26, 8), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(25, 7), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(26, 7), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_48 = __this->___smallCloud_17;
		NullCheck(L_48);
		int32_t L_49 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_51), (25.0f), (8.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52;
		L_52 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53;
		L_53 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_50, L_51, L_52, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(25, 8), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(26, 8), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(25, 7), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(26, 7), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_54 = __this->___smallCloud_17;
		NullCheck(L_54);
		int32_t L_55 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_57), (26.0f), (8.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58;
		L_58 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59;
		L_59 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_56, L_57, L_58, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(25, 8), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(26, 8), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(25, 7), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(26, 7), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_60 = __this->___smallCloud_17;
		NullCheck(L_60);
		int32_t L_61 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_63), (25.0f), (7.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		L_64 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65;
		L_65 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_62, L_63, L_64, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(25, 8), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(26, 8), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(25, 7), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(26, 7), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_66 = __this->___smallCloud_17;
		NullCheck(L_66);
		int32_t L_67 = 3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		memset((&L_69), 0, sizeof(L_69));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_69), (26.0f), (7.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_70;
		L_70 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71;
		L_71 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_68, L_69, L_70, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(38, 10), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(39, 10), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(38, 9), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(39, 9), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_72 = __this->___smallCloud_17;
		NullCheck(L_72);
		int32_t L_73 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		memset((&L_75), 0, sizeof(L_75));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_75), (38.0f), (10.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_76;
		L_76 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77;
		L_77 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_74, L_75, L_76, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(38, 10), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(39, 10), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(38, 9), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(39, 9), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_78 = __this->___smallCloud_17;
		NullCheck(L_78);
		int32_t L_79 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		memset((&L_81), 0, sizeof(L_81));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_81), (39.0f), (10.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_82;
		L_82 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_83;
		L_83 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_80, L_81, L_82, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(38, 10), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(39, 10), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(38, 9), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(39, 9), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_84 = __this->___smallCloud_17;
		NullCheck(L_84);
		int32_t L_85 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_86 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		memset((&L_87), 0, sizeof(L_87));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_87), (38.0f), (9.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_88;
		L_88 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_89;
		L_89 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_86, L_87, L_88, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(38, 10), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(39, 10), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(38, 9), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(39, 9), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_90 = __this->___smallCloud_17;
		NullCheck(L_90);
		int32_t L_91 = 3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_92 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		memset((&L_93), 0, sizeof(L_93));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_93), (39.0f), (9.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_94;
		L_94 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_95;
		L_95 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_92, L_93, L_94, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(43, 6), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(44, 6), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(43, 5), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(44, 5), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_96 = __this->___smallCloud_17;
		NullCheck(L_96);
		int32_t L_97 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_98 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		memset((&L_99), 0, sizeof(L_99));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_99), (43.0f), (6.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_100;
		L_100 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_101;
		L_101 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_98, L_99, L_100, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(43, 6), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(44, 6), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(43, 5), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(44, 5), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_102 = __this->___smallCloud_17;
		NullCheck(L_102);
		int32_t L_103 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_104 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
		memset((&L_105), 0, sizeof(L_105));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_105), (44.0f), (6.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_106;
		L_106 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_107;
		L_107 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_104, L_105, L_106, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(43, 6), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(44, 6), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(43, 5), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(44, 5), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_108 = __this->___smallCloud_17;
		NullCheck(L_108);
		int32_t L_109 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_110 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
		memset((&L_111), 0, sizeof(L_111));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_111), (43.0f), (5.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_112;
		L_112 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_113;
		L_113 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_110, L_111, L_112, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(43, 6), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(44, 6), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(43, 5), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(44, 5), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_114 = __this->___smallCloud_17;
		NullCheck(L_114);
		int32_t L_115 = 3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_116 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		memset((&L_117), 0, sizeof(L_117));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_117), (44.0f), (5.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_118;
		L_118 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_119;
		L_119 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_116, L_117, L_118, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(46, 13), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(47, 13), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(46, 12), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(47, 12), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_120 = __this->___smallCloud_17;
		NullCheck(L_120);
		int32_t L_121 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_122 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_123;
		memset((&L_123), 0, sizeof(L_123));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_123), (46.0f), (13.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_124;
		L_124 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_125;
		L_125 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_122, L_123, L_124, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(46, 13), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(47, 13), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(46, 12), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(47, 12), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_126 = __this->___smallCloud_17;
		NullCheck(L_126);
		int32_t L_127 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_128 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129;
		memset((&L_129), 0, sizeof(L_129));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_129), (47.0f), (13.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_130;
		L_130 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_131;
		L_131 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_128, L_129, L_130, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(46, 13), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(47, 13), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(46, 12), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(47, 12), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_132 = __this->___smallCloud_17;
		NullCheck(L_132);
		int32_t L_133 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135;
		memset((&L_135), 0, sizeof(L_135));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_135), (46.0f), (12.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_136;
		L_136 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_137;
		L_137 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_134, L_135, L_136, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(46, 13), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(47, 13), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(46, 12), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(47, 12), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_138 = __this->___smallCloud_17;
		NullCheck(L_138);
		int32_t L_139 = 3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_140 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141;
		memset((&L_141), 0, sizeof(L_141));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_141), (47.0f), (12.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_142;
		L_142 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_143;
		L_143 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_140, L_141, L_142, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(53, 9), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(54, 9), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(53, 8), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(54, 8), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_144 = __this->___smallCloud_17;
		NullCheck(L_144);
		int32_t L_145 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_146 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_147;
		memset((&L_147), 0, sizeof(L_147));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_147), (53.0f), (9.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_148;
		L_148 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_149;
		L_149 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_146, L_147, L_148, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(53, 9), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(54, 9), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(53, 8), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(54, 8), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_150 = __this->___smallCloud_17;
		NullCheck(L_150);
		int32_t L_151 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_152 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_153;
		memset((&L_153), 0, sizeof(L_153));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_153), (54.0f), (9.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_154;
		L_154 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_155;
		L_155 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_152, L_153, L_154, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(53, 9), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(54, 9), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(53, 8), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(54, 8), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_156 = __this->___smallCloud_17;
		NullCheck(L_156);
		int32_t L_157 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_158 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_159;
		memset((&L_159), 0, sizeof(L_159));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_159), (53.0f), (8.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_160;
		L_160 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_161;
		L_161 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_158, L_159, L_160, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(53, 9), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(54, 9), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(53, 8), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(54, 8), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_162 = __this->___smallCloud_17;
		NullCheck(L_162);
		int32_t L_163 = 3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_164 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_165;
		memset((&L_165), 0, sizeof(L_165));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_165), (54.0f), (8.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_166;
		L_166 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_167;
		L_167 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_164, L_165, L_166, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(58, 7), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(59, 7), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(58, 6), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(59, 6), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_168 = __this->___smallCloud_17;
		NullCheck(L_168);
		int32_t L_169 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_170 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_171;
		memset((&L_171), 0, sizeof(L_171));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_171), (58.0f), (7.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_172;
		L_172 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_173;
		L_173 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_170, L_171, L_172, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(58, 7), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(59, 7), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(58, 6), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(59, 6), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_174 = __this->___smallCloud_17;
		NullCheck(L_174);
		int32_t L_175 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_176 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_177;
		memset((&L_177), 0, sizeof(L_177));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_177), (59.0f), (7.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_178;
		L_178 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_179;
		L_179 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_176, L_177, L_178, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(58, 7), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(59, 7), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(58, 6), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(59, 6), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_180 = __this->___smallCloud_17;
		NullCheck(L_180);
		int32_t L_181 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_182 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_183;
		memset((&L_183), 0, sizeof(L_183));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_183), (58.0f), (6.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_184;
		L_184 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_185;
		L_185 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_182, L_183, L_184, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(58, 7), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(59, 7), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(58, 6), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(59, 6), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_186 = __this->___smallCloud_17;
		NullCheck(L_186);
		int32_t L_187 = 3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_188 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_187));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_189;
		memset((&L_189), 0, sizeof(L_189));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_189), (59.0f), (6.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_190;
		L_190 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_191;
		L_191 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_188, L_189, L_190, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(66, 5), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(67, 5), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(66, 4), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(67, 4), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_192 = __this->___smallCloud_17;
		NullCheck(L_192);
		int32_t L_193 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_194 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_195;
		memset((&L_195), 0, sizeof(L_195));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_195), (66.0f), (5.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_196;
		L_196 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_197;
		L_197 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_194, L_195, L_196, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(66, 5), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(67, 5), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(66, 4), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(67, 4), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_198 = __this->___smallCloud_17;
		NullCheck(L_198);
		int32_t L_199 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_200 = (L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_201;
		memset((&L_201), 0, sizeof(L_201));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_201), (67.0f), (5.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_202;
		L_202 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_203;
		L_203 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_200, L_201, L_202, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(66, 5), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(67, 5), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(66, 4), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(67, 4), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_204 = __this->___smallCloud_17;
		NullCheck(L_204);
		int32_t L_205 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_206 = (L_204)->GetAt(static_cast<il2cpp_array_size_t>(L_205));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_207;
		memset((&L_207), 0, sizeof(L_207));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_207), (66.0f), (4.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_208;
		L_208 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_209;
		L_209 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_206, L_207, L_208, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(smallCloud[0], new Vector3(66, 5), Quaternion.identity); Instantiate(smallCloud[1], new Vector3(67, 5), Quaternion.identity); Instantiate(smallCloud[2], new Vector3(66, 4), Quaternion.identity); Instantiate(smallCloud[3], new Vector3(67, 4), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_210 = __this->___smallCloud_17;
		NullCheck(L_210);
		int32_t L_211 = 3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_212 = (L_210)->GetAt(static_cast<il2cpp_array_size_t>(L_211));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_213;
		memset((&L_213), 0, sizeof(L_213));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_213), (67.0f), (4.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_214;
		L_214 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_215;
		L_215 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_212, L_213, L_214, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BoardManager::BuildingInvisibleWallAndExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_BuildingInvisibleWallAndExit_m085AE4AB4D3589DDE701DD0AEF13EC3EDA06EE83 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(invisibleBlock, new Vector3(2, 1), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___invisibleBlock_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_1), (2.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_0, L_1, L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(invisibleBlock, new Vector3(2, 2), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___invisibleBlock_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_5), (2.0f), (2.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_4, L_5, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(invisibleBlock, new Vector3(2, 3), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___invisibleBlock_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_9), (2.0f), (3.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_8, L_9, L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(invisibleBlock, new Vector3(2, 4), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___invisibleBlock_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_13), (2.0f), (4.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_12, L_13, L_14, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(invisibleBlock, new Vector3(2, 5), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___invisibleBlock_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_17), (2.0f), (5.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_16, L_17, L_18, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(castle[0], new Vector3(70, 5), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20 = __this->___castle_18;
		NullCheck(L_20);
		int32_t L_21 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_23), (70.0f), (5.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_22, L_23, L_24, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(castle[0], new Vector3(71, 5), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_26 = __this->___castle_18;
		NullCheck(L_26);
		int32_t L_27 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_29), (71.0f), (5.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30;
		L_30 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_28, L_29, L_30, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(castle[0], new Vector3(72, 5), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_32 = __this->___castle_18;
		NullCheck(L_32);
		int32_t L_33 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_35), (72.0f), (5.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
		L_36 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_34, L_35, L_36, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(castle[1], new Vector3(70, 4), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_38 = __this->___castle_18;
		NullCheck(L_38);
		int32_t L_39 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_41), (70.0f), (4.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42;
		L_42 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
		L_43 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_40, L_41, L_42, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(castle[2], new Vector3(71, 4), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_44 = __this->___castle_18;
		NullCheck(L_44);
		int32_t L_45 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_47), (71.0f), (4.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48;
		L_48 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49;
		L_49 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_46, L_47, L_48, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(castle[3], new Vector3(72, 4), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_50 = __this->___castle_18;
		NullCheck(L_50);
		int32_t L_51 = 3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_53), (72.0f), (4.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54;
		L_54 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55;
		L_55 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_52, L_53, L_54, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(castle[0], new Vector3(69, 3), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_56 = __this->___castle_18;
		NullCheck(L_56);
		int32_t L_57 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_59), (69.0f), (3.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60;
		L_60 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61;
		L_61 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_58, L_59, L_60, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(castle[4], new Vector3(70, 3), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_62 = __this->___castle_18;
		NullCheck(L_62);
		int32_t L_63 = 4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_65), (70.0f), (3.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_66;
		L_66 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67;
		L_67 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_64, L_65, L_66, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(castle[4], new Vector3(71, 3), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_68 = __this->___castle_18;
		NullCheck(L_68);
		int32_t L_69 = 4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		memset((&L_71), 0, sizeof(L_71));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_71), (71.0f), (3.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_72;
		L_72 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_73;
		L_73 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_70, L_71, L_72, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(castle[4], new Vector3(72, 3), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_74 = __this->___castle_18;
		NullCheck(L_74);
		int32_t L_75 = 4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		memset((&L_77), 0, sizeof(L_77));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_77), (72.0f), (3.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_78;
		L_78 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_79;
		L_79 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_76, L_77, L_78, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(castle[0], new Vector3(73, 3), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_80 = __this->___castle_18;
		NullCheck(L_80);
		int32_t L_81 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		memset((&L_83), 0, sizeof(L_83));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_83), (73.0f), (3.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_84;
		L_84 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_85;
		L_85 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_82, L_83, L_84, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(castle[2], new Vector3(69, 2), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_86 = __this->___castle_18;
		NullCheck(L_86);
		int32_t L_87 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_88 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		memset((&L_89), 0, sizeof(L_89));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_89), (69.0f), (2.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_90;
		L_90 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91;
		L_91 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_88, L_89, L_90, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(castle[2], new Vector3(70, 2), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_92 = __this->___castle_18;
		NullCheck(L_92);
		int32_t L_93 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		memset((&L_95), 0, sizeof(L_95));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_95), (70.0f), (2.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_96;
		L_96 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_97;
		L_97 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_94, L_95, L_96, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(castle[5], new Vector3(71, 2), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_98 = __this->___castle_18;
		NullCheck(L_98);
		int32_t L_99 = 5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_100 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		memset((&L_101), 0, sizeof(L_101));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_101), (71.0f), (2.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_102;
		L_102 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_103;
		L_103 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_100, L_101, L_102, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(castle[2], new Vector3(72, 2), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_104 = __this->___castle_18;
		NullCheck(L_104);
		int32_t L_105 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_106 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		memset((&L_107), 0, sizeof(L_107));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_107), (72.0f), (2.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_108;
		L_108 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_109;
		L_109 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_106, L_107, L_108, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(castle[2], new Vector3(73, 2), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_110 = __this->___castle_18;
		NullCheck(L_110);
		int32_t L_111 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_112 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113;
		memset((&L_113), 0, sizeof(L_113));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_113), (73.0f), (2.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_114;
		L_114 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_115;
		L_115 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_112, L_113, L_114, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(castle[2], new Vector3(69, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_116 = __this->___castle_18;
		NullCheck(L_116);
		int32_t L_117 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_118 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		memset((&L_119), 0, sizeof(L_119));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_119), (69.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_120;
		L_120 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_121;
		L_121 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_118, L_119, L_120, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(castle[2], new Vector3(70, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_122 = __this->___castle_18;
		NullCheck(L_122);
		int32_t L_123 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_124 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125;
		memset((&L_125), 0, sizeof(L_125));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_125), (70.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_126;
		L_126 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_127;
		L_127 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_124, L_125, L_126, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(castle[6], new Vector3(71, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_128 = __this->___castle_18;
		NullCheck(L_128);
		int32_t L_129 = 6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_130 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_131;
		memset((&L_131), 0, sizeof(L_131));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_131), (71.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_132;
		L_132 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_133;
		L_133 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_130, L_131, L_132, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(castle[2], new Vector3(72, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_134 = __this->___castle_18;
		NullCheck(L_134);
		int32_t L_135 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_136 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137;
		memset((&L_137), 0, sizeof(L_137));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_137), (72.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_138;
		L_138 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_139;
		L_139 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_136, L_137, L_138, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(castle[2], new Vector3(73, 1), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_140 = __this->___castle_18;
		NullCheck(L_140);
		int32_t L_141 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_143;
		memset((&L_143), 0, sizeof(L_143));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_143), (73.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_144;
		L_144 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_145;
		L_145 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_142, L_143, L_144, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(exit, new Vector3(72, 1), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_146 = __this->___exit_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_147;
		memset((&L_147), 0, sizeof(L_147));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_147), (72.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_148;
		L_148 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_149;
		L_149 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_146, L_147, L_148, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BoardManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager__ctor_m611C494A213953B5600647FBC3585123518899E0 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	{
		// public int rows = 30;
		__this->___rows_4 = ((int32_t)30);
		// public int columns = 75;
		__this->___columns_5 = ((int32_t)75);
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
// System.Void BoardManager/Count::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Count__ctor_m4C2B0541D04BA53780301C59B6541A58A716FF4B (Count_t35028C167B30D47ACF748289ED8A25C7A9CD0CB3* __this, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method) 
{
	{
		// public Count(int min, int max)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// minimum = min;
		int32_t L_0 = ___min0;
		__this->___minimum_0 = L_0;
		// maximum = max;
		int32_t L_1 = ___max1;
		__this->___maximum_1 = L_1;
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
// System.Void CameraMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement_Awake_mE903647E3CB4D388DF353F137A6383DB539F9154 (CameraMovement_tF96219C0A51576E5F631C99326572CE14C492022* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(Target);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_0, NULL);
		// }
		return;
	}
}
// System.Void CameraMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement_Update_m42273F0005E91309F6A375EB990391D92F6727FE (CameraMovement_tF96219C0A51576E5F631C99326572CE14C492022* __this, const RuntimeMethod* method) 
{
	{
		// TargetPos = new Vector3(Target.transform.position.x, Target.transform.position.y, transform.position.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Target_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___Target_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_3, L_7, L_10, /*hidden argument*/NULL);
		__this->___TargetPos_5 = L_11;
		// if(Target.transform.localScale.x == 1)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___Target_4;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_13, NULL);
		float L_15 = L_14.___x_2;
		if ((!(((float)L_15) == ((float)(1.0f)))))
		{
			goto IL_009f;
		}
	}
	{
		// TargetPos = new Vector3(TargetPos.x + CameraForward, TargetPos.y + 2 , transform.position.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&__this->___TargetPos_5);
		float L_17 = L_16->___x_2;
		float L_18 = __this->___CameraForward_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = (&__this->___TargetPos_5);
		float L_20 = L_19->___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		float L_23 = L_22.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_add(L_17, L_18)), ((float)il2cpp_codegen_add(L_20, (2.0f))), L_23, /*hidden argument*/NULL);
		__this->___TargetPos_5 = L_24;
	}

IL_009f:
	{
		// if(Target.transform.localScale.x == -1)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___Target_4;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_26, NULL);
		float L_28 = L_27.___x_2;
		if ((!(((float)L_28) == ((float)(-1.0f)))))
		{
			goto IL_00f9;
		}
	}
	{
		// TargetPos = new Vector3(TargetPos.x - CameraForward, TargetPos.y + 2, transform.position.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_29 = (&__this->___TargetPos_5);
		float L_30 = L_29->___x_2;
		float L_31 = __this->___CameraForward_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_32 = (&__this->___TargetPos_5);
		float L_33 = L_32->___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		float L_36 = L_35.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_37), ((float)il2cpp_codegen_subtract(L_30, L_31)), ((float)il2cpp_codegen_add(L_33, (2.0f))), L_36, /*hidden argument*/NULL);
		__this->___TargetPos_5 = L_37;
	}

IL_00f9:
	{
		// transform.position = Vector3.Lerp(transform.position, TargetPos, Smoothing*Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = __this->___TargetPos_5;
		float L_42 = __this->___Smoothing_6;
		float L_43;
		L_43 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_40, L_41, ((float)il2cpp_codegen_multiply(L_42, L_43)), NULL);
		NullCheck(L_38);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_38, L_44, NULL);
		// }
		return;
	}
}
// System.Void CameraMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement__ctor_m89EBDC0905F17D37C7604387BED054FDCCADAFD3 (CameraMovement_tF96219C0A51576E5F631C99326572CE14C492022* __this, const RuntimeMethod* method) 
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
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m87A71D65F3171A58DBDDBFB03832ADA65643D0E2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoinSystem_t395C61906FB3167B363B7553CF25CC3E07F805B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5004BB2B79B894E5CC70CDBEA1DD320044EF8F3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral515679AB29628ECDDDD7FACA99AE118567A911D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECAADA6F600B6AE5D9AB428314DAE17FE474130);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6BB6E51318A73F893E5ECC5FA841B3043DC4C87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF202BD9C29F9FE8967D2598978C59BC250D49ECC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_0 = NULL;
	{
		// UnityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		__this->___UnityPlayer_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UnityPlayer_8), (void*)L_0);
		// currentActivity = UnityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = __this->___UnityPlayer_8;
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_1, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		__this->___currentActivity_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentActivity_9), (void*)L_2);
		// AndroidJavaObject intent = currentActivity.Call<AndroidJavaObject>("getIntent");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = __this->___currentActivity_9;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_3, _stringLiteralC6BB6E51318A73F893E5ECC5FA841B3043DC4C87, L_4, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_0 = L_5;
		// bool hasExtra = intent.Call<bool>("hasExtra", "arguments");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral515679AB29628ECDDDD7FACA99AE118567A911D5);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral515679AB29628ECDDDD7FACA99AE118567A911D5);
		NullCheck(L_6);
		bool L_9;
		L_9 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_6, _stringLiteralBECAADA6F600B6AE5D9AB428314DAE17FE474130, L_8, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		// if (hasExtra)
		if (!L_9)
		{
			goto IL_00fe;
		}
	}
	{
		// AndroidJavaObject extras = intent.Call<AndroidJavaObject>("getExtras");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11;
		L_11 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_10);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12;
		L_12 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_10, _stringLiteralF202BD9C29F9FE8967D2598978C59BC250D49ECC, L_11, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_1 = L_12;
		// informationFromAndroid = extras.Call<string>("getString", "arguments");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral515679AB29628ECDDDD7FACA99AE118567A911D5);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral515679AB29628ECDDDD7FACA99AE118567A911D5);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_13, _stringLiteral5004BB2B79B894E5CC70CDBEA1DD320044EF8F3A, L_15, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		__this->___informationFromAndroid_4 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___informationFromAndroid_4), (void*)L_16);
		// string[] info = informationFromAndroid.Split("/");
		String_t* L_17 = __this->___informationFromAndroid_4;
		NullCheck(L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18;
		L_18 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_17, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, 0, NULL);
		// CoinSystem.coin = Convert.ToInt32(info[0]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		NullCheck(L_19);
		int32_t L_20 = 0;
		String_t* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_22;
		L_22 = Convert_ToInt32_mF408441B7F1DCAE57A286EC80B594E54C872EC05(L_21, NULL);
		((CoinSystem_t395C61906FB3167B363B7553CF25CC3E07F805B7_StaticFields*)il2cpp_codegen_static_fields_for(CoinSystem_t395C61906FB3167B363B7553CF25CC3E07F805B7_il2cpp_TypeInfo_var))->___coin_4 = ((float)L_22);
		// if (info[1] == "true") { PlayerShoot.weapon1 = true; } else { PlayerShoot.weapon1 = false; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_19;
		NullCheck(L_23);
		int32_t L_24 = 1;
		String_t* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		G_B2_0 = L_23;
		if (!L_26)
		{
			G_B3_0 = L_23;
			goto IL_00c0;
		}
	}
	{
		// if (info[1] == "true") { PlayerShoot.weapon1 = true; } else { PlayerShoot.weapon1 = false; }
		((PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43_StaticFields*)il2cpp_codegen_static_fields_for(PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43_il2cpp_TypeInfo_var))->___weapon1_10 = (bool)1;
		G_B4_0 = G_B2_0;
		goto IL_00c6;
	}

IL_00c0:
	{
		// if (info[1] == "true") { PlayerShoot.weapon1 = true; } else { PlayerShoot.weapon1 = false; }
		((PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43_StaticFields*)il2cpp_codegen_static_fields_for(PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43_il2cpp_TypeInfo_var))->___weapon1_10 = (bool)0;
		G_B4_0 = G_B3_0;
	}

IL_00c6:
	{
		// if (info[2] == "true") { PlayerShoot.weapon2 = true; } else { PlayerShoot.weapon2 = false; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = G_B4_0;
		NullCheck(L_27);
		int32_t L_28 = 2;
		String_t* L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		bool L_30;
		L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_29, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		G_B5_0 = L_27;
		if (!L_30)
		{
			G_B6_0 = L_27;
			goto IL_00dd;
		}
	}
	{
		// if (info[2] == "true") { PlayerShoot.weapon2 = true; } else { PlayerShoot.weapon2 = false; }
		((PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43_StaticFields*)il2cpp_codegen_static_fields_for(PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43_il2cpp_TypeInfo_var))->___weapon2_11 = (bool)1;
		G_B7_0 = G_B5_0;
		goto IL_00e3;
	}

IL_00dd:
	{
		// if (info[2] == "true") { PlayerShoot.weapon2 = true; } else { PlayerShoot.weapon2 = false; }
		((PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43_StaticFields*)il2cpp_codegen_static_fields_for(PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43_il2cpp_TypeInfo_var))->___weapon2_11 = (bool)0;
		G_B7_0 = G_B6_0;
	}

IL_00e3:
	{
		// if (info[3] == "true") { PlayerCollision.activeShield = true; } else { PlayerCollision.activeShield = false; }
		NullCheck(G_B7_0);
		int32_t L_31 = 3;
		String_t* L_32 = (G_B7_0)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		if (!L_33)
		{
			goto IL_00f8;
		}
	}
	{
		// if (info[3] == "true") { PlayerCollision.activeShield = true; } else { PlayerCollision.activeShield = false; }
		((PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1_il2cpp_TypeInfo_var))->___activeShield_14 = (bool)1;
		return;
	}

IL_00f8:
	{
		// if (info[3] == "true") { PlayerCollision.activeShield = true; } else { PlayerCollision.activeShield = false; }
		((PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1_il2cpp_TypeInfo_var))->___activeShield_14 = (bool)0;
	}

IL_00fe:
	{
		// }
		return;
	}
}
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7_m73A6E2D09CAA87DA44F0872922430ABC1A14FFFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null) { instance = this; }
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (instance == null) { instance = this; }
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_5), (void*)__this);
		goto IL_002d;
	}

IL_0015:
	{
		// else if (instance != this) { Destroy(gameObject); }
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, __this, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// else if (instance != this) { Destroy(gameObject); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_4, NULL);
	}

IL_002d:
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_5, NULL);
		// boardScript = GetComponent<BoardManager>();
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_6;
		L_6 = Component_GetComponent_TisBoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7_m73A6E2D09CAA87DA44F0872922430ABC1A14FFFD(__this, Component_GetComponent_TisBoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7_m73A6E2D09CAA87DA44F0872922430ABC1A14FFFD_RuntimeMethod_var);
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___boardScript_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___boardScript_6), (void*)L_6);
		// InitGame();
		GameManager_InitGame_mDF7FADBA0B49B6C48C3F0D2333F55208ED9023E9(NULL);
		// }
		return;
	}
}
// System.Void GameManager::InitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_InitGame_mDF7FADBA0B49B6C48C3F0D2333F55208ED9023E9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// boardScript.SetupScene(level);
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___boardScript_6;
		int32_t L_1 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___level_7;
		NullCheck(L_0);
		BoardManager_SetupScene_m605D571EEB0DA94B6ABE05E8ACDD0A1DD9DE4CE8(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
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
// System.Void Sound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sound__ctor_m5DD7C9F71B98D5670BBDD05F6D6FCDF43DC9EA8F (Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* __this, const RuntimeMethod* method) 
{
	{
		// public float volume = 1;
		__this->___volume_3 = (1.0f);
		// public float pitch = 1;
		__this->___pitch_4 = (1.0f);
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
// System.Void CoinSystem::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinSystem_OnTriggerEnter2D_m403BF0EEE4FD45BAF8F66B70D02DB74D8C35B6A5 (CoinSystem_t395C61906FB3167B363B7553CF25CC3E07F805B7* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoinSystem_t395C61906FB3167B363B7553CF25CC3E07F805B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.transform.tag == "Coins")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, NULL);
		if (!L_3)
		{
			goto IL_006b;
		}
	}
	{
		// AudioManager.instance.Play("Coin");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_4 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_4);
		AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F(L_4, _stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764, NULL);
		// coin++;
		float L_5 = ((CoinSystem_t395C61906FB3167B363B7553CF25CC3E07F805B7_StaticFields*)il2cpp_codegen_static_fields_for(CoinSystem_t395C61906FB3167B363B7553CF25CC3E07F805B7_il2cpp_TypeInfo_var))->___coin_4;
		((CoinSystem_t395C61906FB3167B363B7553CF25CC3E07F805B7_StaticFields*)il2cpp_codegen_static_fields_for(CoinSystem_t395C61906FB3167B363B7553CF25CC3E07F805B7_il2cpp_TypeInfo_var))->___coin_4 = ((float)il2cpp_codegen_add(L_5, (1.0f)));
		// infoCoins.text = coin.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->___infoCoins_5;
		String_t* L_7;
		L_7 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&((CoinSystem_t395C61906FB3167B363B7553CF25CC3E07F805B7_StaticFields*)il2cpp_codegen_static_fields_for(CoinSystem_t395C61906FB3167B363B7553CF25CC3E07F805B7_il2cpp_TypeInfo_var))->___coin_4), NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_7);
		// endCoins.text = coin.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___endCoins_6;
		String_t* L_9;
		L_9 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&((CoinSystem_t395C61906FB3167B363B7553CF25CC3E07F805B7_StaticFields*)il2cpp_codegen_static_fields_for(CoinSystem_t395C61906FB3167B363B7553CF25CC3E07F805B7_il2cpp_TypeInfo_var))->___coin_4), NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_9);
		// Destroy(other.gameObject);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_10 = ___other0;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_11, NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void CoinSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinSystem__ctor_m91E7A20F6037BCC110349B4621A04F70C91DD24D (CoinSystem_t395C61906FB3167B363B7553CF25CC3E07F805B7* __this, const RuntimeMethod* method) 
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
// System.Void HealthSystem::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthSystem_Awake_mB20B541960F3AC5355D416903DF32BC5B6322064 (HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void HealthSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthSystem_Update_m710657B59AA7EB20A2420DCB80AE6460D8F04616 (HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (health == 4) { hearts[0].enabled = true; hearts[1].enabled = true; hearts[2].enabled = true; hearts[3].enabled = true; }
		il2cpp_codegen_runtime_class_init_inline(HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var);
		int32_t L_0 = ((HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var))->___health_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0041;
		}
	}
	{
		// if (health == 4) { hearts[0].enabled = true; hearts[1].enabled = true; hearts[2].enabled = true; hearts[3].enabled = true; }
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_1 = __this->___hearts_5;
		NullCheck(L_1);
		int32_t L_2 = 0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)1, NULL);
		// if (health == 4) { hearts[0].enabled = true; hearts[1].enabled = true; hearts[2].enabled = true; hearts[3].enabled = true; }
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_4 = __this->___hearts_5;
		NullCheck(L_4);
		int32_t L_5 = 1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)1, NULL);
		// if (health == 4) { hearts[0].enabled = true; hearts[1].enabled = true; hearts[2].enabled = true; hearts[3].enabled = true; }
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_7 = __this->___hearts_5;
		NullCheck(L_7);
		int32_t L_8 = 2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_9, (bool)1, NULL);
		// if (health == 4) { hearts[0].enabled = true; hearts[1].enabled = true; hearts[2].enabled = true; hearts[3].enabled = true; }
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_10 = __this->___hearts_5;
		NullCheck(L_10);
		int32_t L_11 = 3;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_12, (bool)1, NULL);
		return;
	}

IL_0041:
	{
		// else if (health == 3) { hearts[0].enabled = false; hearts[1].enabled = true; hearts[2].enabled = true; hearts[3].enabled = true; }
		il2cpp_codegen_runtime_class_init_inline(HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var);
		int32_t L_13 = ((HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var))->___health_4;
		if ((!(((uint32_t)L_13) == ((uint32_t)3))))
		{
			goto IL_0082;
		}
	}
	{
		// else if (health == 3) { hearts[0].enabled = false; hearts[1].enabled = true; hearts[2].enabled = true; hearts[3].enabled = true; }
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_14 = __this->___hearts_5;
		NullCheck(L_14);
		int32_t L_15 = 0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_16, (bool)0, NULL);
		// else if (health == 3) { hearts[0].enabled = false; hearts[1].enabled = true; hearts[2].enabled = true; hearts[3].enabled = true; }
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_17 = __this->___hearts_5;
		NullCheck(L_17);
		int32_t L_18 = 1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_19, (bool)1, NULL);
		// else if (health == 3) { hearts[0].enabled = false; hearts[1].enabled = true; hearts[2].enabled = true; hearts[3].enabled = true; }
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_20 = __this->___hearts_5;
		NullCheck(L_20);
		int32_t L_21 = 2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_22, (bool)1, NULL);
		// else if (health == 3) { hearts[0].enabled = false; hearts[1].enabled = true; hearts[2].enabled = true; hearts[3].enabled = true; }
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_23 = __this->___hearts_5;
		NullCheck(L_23);
		int32_t L_24 = 3;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_25, (bool)1, NULL);
		return;
	}

IL_0082:
	{
		// else if (health == 2) { hearts[0].enabled = false; hearts[1].enabled = false; hearts[2].enabled = true; hearts[3].enabled = true; }
		il2cpp_codegen_runtime_class_init_inline(HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var);
		int32_t L_26 = ((HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var))->___health_4;
		if ((!(((uint32_t)L_26) == ((uint32_t)2))))
		{
			goto IL_00c3;
		}
	}
	{
		// else if (health == 2) { hearts[0].enabled = false; hearts[1].enabled = false; hearts[2].enabled = true; hearts[3].enabled = true; }
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_27 = __this->___hearts_5;
		NullCheck(L_27);
		int32_t L_28 = 0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_29, (bool)0, NULL);
		// else if (health == 2) { hearts[0].enabled = false; hearts[1].enabled = false; hearts[2].enabled = true; hearts[3].enabled = true; }
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_30 = __this->___hearts_5;
		NullCheck(L_30);
		int32_t L_31 = 1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_32, (bool)0, NULL);
		// else if (health == 2) { hearts[0].enabled = false; hearts[1].enabled = false; hearts[2].enabled = true; hearts[3].enabled = true; }
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_33 = __this->___hearts_5;
		NullCheck(L_33);
		int32_t L_34 = 2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_35, (bool)1, NULL);
		// else if (health == 2) { hearts[0].enabled = false; hearts[1].enabled = false; hearts[2].enabled = true; hearts[3].enabled = true; }
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_36 = __this->___hearts_5;
		NullCheck(L_36);
		int32_t L_37 = 3;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_38, (bool)1, NULL);
		return;
	}

IL_00c3:
	{
		// else if (health == 1) { hearts[0].enabled = false; hearts[1].enabled = false; hearts[2].enabled = false; hearts[3].enabled = true; }
		il2cpp_codegen_runtime_class_init_inline(HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var);
		int32_t L_39 = ((HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var))->___health_4;
		if ((!(((uint32_t)L_39) == ((uint32_t)1))))
		{
			goto IL_0104;
		}
	}
	{
		// else if (health == 1) { hearts[0].enabled = false; hearts[1].enabled = false; hearts[2].enabled = false; hearts[3].enabled = true; }
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_40 = __this->___hearts_5;
		NullCheck(L_40);
		int32_t L_41 = 0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_42);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_42, (bool)0, NULL);
		// else if (health == 1) { hearts[0].enabled = false; hearts[1].enabled = false; hearts[2].enabled = false; hearts[3].enabled = true; }
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_43 = __this->___hearts_5;
		NullCheck(L_43);
		int32_t L_44 = 1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_45);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_45, (bool)0, NULL);
		// else if (health == 1) { hearts[0].enabled = false; hearts[1].enabled = false; hearts[2].enabled = false; hearts[3].enabled = true; }
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_46 = __this->___hearts_5;
		NullCheck(L_46);
		int32_t L_47 = 2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_48);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_48, (bool)0, NULL);
		// else if (health == 1) { hearts[0].enabled = false; hearts[1].enabled = false; hearts[2].enabled = false; hearts[3].enabled = true; }
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_49 = __this->___hearts_5;
		NullCheck(L_49);
		int32_t L_50 = 3;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_51, (bool)1, NULL);
		return;
	}

IL_0104:
	{
		// else { hearts[0].enabled = false; hearts[1].enabled = false; hearts[2].enabled = false; hearts[3].enabled = false; }
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_52 = __this->___hearts_5;
		NullCheck(L_52);
		int32_t L_53 = 0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_54);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_54, (bool)0, NULL);
		// else { hearts[0].enabled = false; hearts[1].enabled = false; hearts[2].enabled = false; hearts[3].enabled = false; }
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_55 = __this->___hearts_5;
		NullCheck(L_55);
		int32_t L_56 = 1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_57);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_57, (bool)0, NULL);
		// else { hearts[0].enabled = false; hearts[1].enabled = false; hearts[2].enabled = false; hearts[3].enabled = false; }
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_58 = __this->___hearts_5;
		NullCheck(L_58);
		int32_t L_59 = 2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_60);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_60, (bool)0, NULL);
		// else { hearts[0].enabled = false; hearts[1].enabled = false; hearts[2].enabled = false; hearts[3].enabled = false; }
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_61 = __this->___hearts_5;
		NullCheck(L_61);
		int32_t L_62 = 3;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_63);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_63, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void HealthSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthSystem__ctor_m1E471AB9A4C7EC6D86D4B3660BD4145109958995 (HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void HealthSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthSystem__cctor_m9B843DEBEA9AD8D5C8FAAC4E93AD5CC26398FD53 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int health = 4;
		((HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var))->___health_4 = 4;
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
// System.Void InventorySystem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySystem_Start_mEF024BBA06D3C3C9762B4E8415BF35CCA6E3B907 (InventorySystem_t4E8479CCC27DAD6E7E985F52035780E1C95F81EB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void InventorySystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySystem_Update_m62B5F2641E3DF8D61AF348C70FC1D19157A93DE7 (InventorySystem_t4E8479CCC27DAD6E7E985F52035780E1C95F81EB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void InventorySystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySystem__ctor_m6941EDD5EB50BD476EB6D26671D3CD7E9C09D976 (InventorySystem_t4E8479CCC27DAD6E7E985F52035780E1C95F81EB* __this, const RuntimeMethod* method) 
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
// System.Void PlayerCollision::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollision_Start_mD60A6F51E85F7DEBA15E466AAF3E316AC7DFF251 (PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		__this->___UnityPlayer_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UnityPlayer_20), (void*)L_0);
		// currentActivity = UnityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = __this->___UnityPlayer_20;
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_1, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		__this->___currentActivity_21 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentActivity_21), (void*)L_2);
		// respawnPoint = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		__this->___respawnPoint_4 = L_4;
		// endMenuScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___endMenuScreen_8;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// StartCoroutine(ShowMessage());
		RuntimeObject* L_6;
		L_6 = PlayerCollision_ShowMessage_m9144D402C026D322606D9E1CD3C8012E160B159E(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void PlayerCollision::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollision_Update_m700F534BA1EF57A4488806C40860972FC646CD25 (PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* __this, const RuntimeMethod* method) 
{
	{
		// fallDetector.transform.position = new Vector2(transform.position.x, fallDetector.transform.position.y);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___fallDetector_5;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___fallDetector_5;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), L_4, L_8, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_9, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_10, NULL);
		// }
		return;
	}
}
// System.Void PlayerCollision::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollision_OnTriggerEnter2D_m8D96CF1871095BF88ED58A9DC473FB83A55301CF (PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral332F3BBC69B280E1E9E6E8F0E59EE51FB8E6EA2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.transform.tag == "FallDetector")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral332F3BBC69B280E1E9E6E8F0E59EE51FB8E6EA2C, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// transform.position = respawnPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___respawnPoint_4;
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_5, NULL);
		// HealthSystem.health = 4;
		il2cpp_codegen_runtime_class_init_inline(HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var);
		((HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var))->___health_4 = 4;
		return;
	}

IL_002f:
	{
		// else if (collision.transform.tag == "Finish")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_6 = ___collision0;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_7, NULL);
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5, NULL);
		if (!L_9)
		{
			goto IL_00a3;
		}
	}
	{
		// if (GameManager.level == 0)
		int32_t L_10 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___level_7;
		if (L_10)
		{
			goto IL_0071;
		}
	}
	{
		// GameManager.level = 1;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___level_7 = 1;
		// transform.position = respawnPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___respawnPoint_4;
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_12, NULL);
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(1, NULL);
		// GameManager.InitGame();
		GameManager_InitGame_mDF7FADBA0B49B6C48C3F0D2333F55208ED9023E9(NULL);
		goto IL_0096;
	}

IL_0071:
	{
		// else if (GameManager.level == 1)
		int32_t L_13 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___level_7;
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_0096;
		}
	}
	{
		// GameManager.level = 0;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___level_7 = 0;
		// transform.position = respawnPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___respawnPoint_4;
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_15, NULL);
		// End();
		PlayerCollision_End_mA022F018EF65B38C26CE34023B62801123DB4F87(__this, NULL);
	}

IL_0096:
	{
		// StartCoroutine(ShowMessage());
		RuntimeObject* L_16;
		L_16 = PlayerCollision_ShowMessage_m9144D402C026D322606D9E1CD3C8012E160B159E(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_17;
		L_17 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_16, NULL);
	}

IL_00a3:
	{
		// }
		return;
	}
}
// System.Void PlayerCollision::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollision_OnCollisionEnter2D_m8C7ECC85A995A495DC7CBF9A1F7454A88AB89AE1 (PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8964425D5AFA567D9602F7E19CD9E3B473DEBE0C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.transform.tag == "Enemy")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Collision2D_get_transform_mC59737F246B2DAFF2AB4F6322664C87B28605CC7(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_3)
		{
			goto IL_0074;
		}
	}
	{
		// AudioManager.instance.Play("Hit");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_4 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_4);
		AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F(L_4, _stringLiteral8964425D5AFA567D9602F7E19CD9E3B473DEBE0C, NULL);
		// if (activeShield)
		bool L_5 = ((PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1_il2cpp_TypeInfo_var))->___activeShield_14;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// HealthSystem.health = HealthSystem.health - 1;
		il2cpp_codegen_runtime_class_init_inline(HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var);
		int32_t L_6 = ((HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var))->___health_4;
		((HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var))->___health_4 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		goto IL_0047;
	}

IL_003b:
	{
		// HealthSystem.health = HealthSystem.health - 2;
		il2cpp_codegen_runtime_class_init_inline(HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var);
		int32_t L_7 = ((HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var))->___health_4;
		((HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var))->___health_4 = ((int32_t)il2cpp_codegen_subtract(L_7, 2));
	}

IL_0047:
	{
		// if(HealthSystem.health <= 0)
		il2cpp_codegen_runtime_class_init_inline(HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var);
		int32_t L_8 = ((HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var))->___health_4;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0067;
		}
	}
	{
		// HealthSystem.health = 4;
		il2cpp_codegen_runtime_class_init_inline(HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var);
		((HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var))->___health_4 = 4;
		// transform.position = respawnPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___respawnPoint_4;
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_10, NULL);
		return;
	}

IL_0067:
	{
		// StartCoroutine(GetHurt());
		RuntimeObject* L_11;
		L_11 = PlayerCollision_GetHurt_m6C3C1C67F65D0E18B397ACCF3A04F118C324A2C6(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_12;
		L_12 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_11, NULL);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void PlayerCollision::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollision_End_mA022F018EF65B38C26CE34023B62801123DB4F87 (PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral535A3526D250E62F3A4254300FD4DA71EB36F36E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81B6E477026EF768F836E8D052EF8CD0A02E8D81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B2_0 = NULL;
	PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* G_B2_1 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B1_0 = NULL;
	PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* G_B3_1 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B5_2 = NULL;
	PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* G_B5_3 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	String_t* G_B6_2 = NULL;
	PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* G_B6_3 = NULL;
	{
		// endGame = true;
		((PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1_il2cpp_TypeInfo_var))->___endGame_15 = (bool)1;
		// informationToAndroid = coinEnd + "/" + pointsEnd + "/" + "true";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___coinEnd_17;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0014;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0019;
	}

IL_0014:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_1;
	}

IL_0019:
	{
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___pointsEnd_18;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = L_3;
		G_B4_0 = L_4;
		G_B4_1 = _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
		G_B4_2 = G_B3_0;
		G_B4_3 = G_B3_1;
		if (L_4)
		{
			G_B5_0 = L_4;
			G_B5_1 = _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
			G_B5_2 = G_B3_0;
			G_B5_3 = G_B3_1;
			goto IL_002b;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		G_B6_3 = G_B4_3;
		goto IL_0030;
	}

IL_002b:
	{
		NullCheck(G_B5_0);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_5;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}

IL_0030:
	{
		String_t* L_6;
		L_6 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(G_B6_2, G_B6_1, G_B6_0, _stringLiteral535A3526D250E62F3A4254300FD4DA71EB36F36E, NULL);
		NullCheck(G_B6_3);
		G_B6_3->___informationToAndroid_19 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_3->___informationToAndroid_19), (void*)L_6);
		// currentActivity.Call("onGameFinish", informationToAndroid);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = __this->___currentActivity_21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		String_t* L_10 = __this->___informationToAndroid_19;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
		NullCheck(L_7);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_7, _stringLiteral81B6E477026EF768F836E8D052EF8CD0A02E8D81, L_9, NULL);
		// Time.timeScale = 0;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.0f), NULL);
		// infoMenuScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___infoMenuScreen_6;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// endMenuScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___endMenuScreen_8;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void PlayerCollision::Replay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollision_Replay_m5DB1A556ED2F74C28986015D068D1F5F2DE35232 (PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// endGame = false;
		((PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1_il2cpp_TypeInfo_var))->___endGame_15 = (bool)0;
		// Time.timeScale = 1;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// endMenuScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___endMenuScreen_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// HealthSystem.health = 4;
		il2cpp_codegen_runtime_class_init_inline(HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var);
		((HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var))->___health_4 = 4;
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(0, NULL);
		// GameManager.InitGame();
		GameManager_InitGame_mDF7FADBA0B49B6C48C3F0D2333F55208ED9023E9(NULL);
		// infoMenuScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___infoMenuScreen_6;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void PlayerCollision::OnLevelWasLoaded(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollision_OnLevelWasLoaded_mA86D27DEDC3CE1893715E2310FD847E06C7E048C (PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* __this, int32_t ___level0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E484327649BB8EC03EF677BE2A857A59C67E729);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral332F3BBC69B280E1E9E6E8F0E59EE51FB8E6EA2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral620B186569AF131C0B90443659189F9FE0DD8AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A96A1C91C60BC1DFDDD3434AAC6041AA566E9A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// transform.position = respawnPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___respawnPoint_4;
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// players = GameObject.FindGameObjectsWithTag("Player");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2;
		L_2 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___players_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___players_9), (void*)L_2);
		// fallDetectors = GameObject.FindGameObjectsWithTag("FallDetector");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3;
		L_3 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(_stringLiteral332F3BBC69B280E1E9E6E8F0E59EE51FB8E6EA2C, NULL);
		__this->___fallDetectors_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fallDetectors_10), (void*)L_3);
		// infoMenuScreens = GameObject.FindGameObjectsWithTag("GameInformationPanel");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4;
		L_4 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(_stringLiteral620B186569AF131C0B90443659189F9FE0DD8AB1, NULL);
		__this->___infoMenuScreens_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___infoMenuScreens_11), (void*)L_4);
		// pauseMenuScreens = GameObject.FindGameObjectsWithTag("PauseMenuPanel");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5;
		L_5 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(_stringLiteral0E484327649BB8EC03EF677BE2A857A59C67E729, NULL);
		__this->___pauseMenuScreens_12 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pauseMenuScreens_12), (void*)L_5);
		// endMenuScreens = GameObject.FindGameObjectsWithTag("FinishMenuPanel");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6;
		L_6 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(_stringLiteral8A96A1C91C60BC1DFDDD3434AAC6041AA566E9A4, NULL);
		__this->___endMenuScreens_13 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___endMenuScreens_13), (void*)L_6);
		// for (int i = 1; players.Length > i; i++)
		V_0 = 1;
		goto IL_0076;
	}

IL_0065:
	{
		// Destroy(players[i]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___players_9;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_10, NULL);
		// for (int i = 1; players.Length > i; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0076:
	{
		// for (int i = 1; players.Length > i; i++)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = __this->___players_9;
		NullCheck(L_12);
		int32_t L_13 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) > ((int32_t)L_13)))
		{
			goto IL_0065;
		}
	}
	{
		// for (int i = 1; fallDetectors.Length > i; i++)
		V_1 = 1;
		goto IL_0096;
	}

IL_0085:
	{
		// Destroy(fallDetectors[i]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = __this->___fallDetectors_10;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_17, NULL);
		// for (int i = 1; fallDetectors.Length > i; i++)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0096:
	{
		// for (int i = 1; fallDetectors.Length > i; i++)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = __this->___fallDetectors_10;
		NullCheck(L_19);
		int32_t L_20 = V_1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))) > ((int32_t)L_20)))
		{
			goto IL_0085;
		}
	}
	{
		// for (int i = 1; infoMenuScreens.Length > i; i++)
		V_2 = 1;
		goto IL_00b6;
	}

IL_00a5:
	{
		// Destroy(infoMenuScreens[i]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = __this->___infoMenuScreens_11;
		int32_t L_22 = V_2;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_24, NULL);
		// for (int i = 1; infoMenuScreens.Length > i; i++)
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_00b6:
	{
		// for (int i = 1; infoMenuScreens.Length > i; i++)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_26 = __this->___infoMenuScreens_11;
		NullCheck(L_26);
		int32_t L_27 = V_2;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))) > ((int32_t)L_27)))
		{
			goto IL_00a5;
		}
	}
	{
		// for (int i = 1; pauseMenuScreens.Length > i; i++)
		V_3 = 1;
		goto IL_00d6;
	}

IL_00c5:
	{
		// Destroy(pauseMenuScreens[i]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_28 = __this->___pauseMenuScreens_12;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_31, NULL);
		// for (int i = 1; pauseMenuScreens.Length > i; i++)
		int32_t L_32 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00d6:
	{
		// for (int i = 1; pauseMenuScreens.Length > i; i++)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_33 = __this->___pauseMenuScreens_12;
		NullCheck(L_33);
		int32_t L_34 = V_3;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))) > ((int32_t)L_34)))
		{
			goto IL_00c5;
		}
	}
	{
		// for (int i = 1; endMenuScreens.Length > i; i++)
		V_4 = 1;
		goto IL_00fa;
	}

IL_00e6:
	{
		// Destroy(endMenuScreens[i]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_35 = __this->___endMenuScreens_13;
		int32_t L_36 = V_4;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_38, NULL);
		// for (int i = 1; endMenuScreens.Length > i; i++)
		int32_t L_39 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00fa:
	{
		// for (int i = 1; endMenuScreens.Length > i; i++)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_40 = __this->___endMenuScreens_13;
		NullCheck(L_40);
		int32_t L_41 = V_4;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))) > ((int32_t)L_41)))
		{
			goto IL_00e6;
		}
	}
	{
		// pauseMenuScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___pauseMenuScreen_7;
		NullCheck(L_42);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_42, (bool)0, NULL);
		// endMenuScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = __this->___endMenuScreen_8;
		NullCheck(L_43);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_43, (bool)0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerCollision::GetHurt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerCollision_GetHurt_m6C3C1C67F65D0E18B397ACCF3A04F118C324A2C6 (PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetHurtU3Ed__25_tCE23B855AA771A236EAB6E9936C71921B3D53587_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetHurtU3Ed__25_tCE23B855AA771A236EAB6E9936C71921B3D53587* L_0 = (U3CGetHurtU3Ed__25_tCE23B855AA771A236EAB6E9936C71921B3D53587*)il2cpp_codegen_object_new(U3CGetHurtU3Ed__25_tCE23B855AA771A236EAB6E9936C71921B3D53587_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetHurtU3Ed__25__ctor_mC6936B4D72262112FDD558691125173399866A64(L_0, 0, NULL);
		U3CGetHurtU3Ed__25_tCE23B855AA771A236EAB6E9936C71921B3D53587* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator PlayerCollision::ShowMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerCollision_ShowMessage_m9144D402C026D322606D9E1CD3C8012E160B159E (PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShowMessageU3Ed__26_t56D968B3ED74217A6E30985E809E48A6C8BE3FF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShowMessageU3Ed__26_t56D968B3ED74217A6E30985E809E48A6C8BE3FF1* L_0 = (U3CShowMessageU3Ed__26_t56D968B3ED74217A6E30985E809E48A6C8BE3FF1*)il2cpp_codegen_object_new(U3CShowMessageU3Ed__26_t56D968B3ED74217A6E30985E809E48A6C8BE3FF1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CShowMessageU3Ed__26__ctor_mCCC483FDFE5FB3AD3B53E4AF31C66E9D6DA9A007(L_0, 0, NULL);
		U3CShowMessageU3Ed__26_t56D968B3ED74217A6E30985E809E48A6C8BE3FF1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void PlayerCollision::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollision__ctor_m2B517E2A67CB6CD0106F5C8D78F229F2CBEAE1B9 (PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* __this, const RuntimeMethod* method) 
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
// System.Void PlayerCollision/<GetHurt>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetHurtU3Ed__25__ctor_mC6936B4D72262112FDD558691125173399866A64 (U3CGetHurtU3Ed__25_tCE23B855AA771A236EAB6E9936C71921B3D53587* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerCollision/<GetHurt>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetHurtU3Ed__25_System_IDisposable_Dispose_m1C9EA717BA10581E9E9F2A14568454B5030DE35F (U3CGetHurtU3Ed__25_tCE23B855AA771A236EAB6E9936C71921B3D53587* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerCollision/<GetHurt>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetHurtU3Ed__25_MoveNext_m7AA9102C3CEA2BDD94F5F996532F52068ADF9F4F (U3CGetHurtU3Ed__25_tCE23B855AA771A236EAB6E9936C71921B3D53587* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0050;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Physics2D.IgnoreLayerCollision(7, 10);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Physics2D_IgnoreLayerCollision_mCA5F43703A7D1F84AF29F5B69E5161E8735FD1E1(7, ((int32_t)10), NULL);
		// GetComponent<Animator>().SetLayerWeight(1, 1);
		PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5;
		L_5 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(L_4, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		NullCheck(L_5);
		Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F(L_5, 1, (1.0f), NULL);
		// yield return new WaitForSeconds(2);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0050:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GetComponent<Animator>().SetLayerWeight(1, 0);
		PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* L_7 = V_1;
		NullCheck(L_7);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8;
		L_8 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(L_7, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		NullCheck(L_8);
		Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F(L_8, 1, (0.0f), NULL);
		// Physics2D.IgnoreLayerCollision(7, 10, false);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Physics2D_IgnoreLayerCollision_m347DECEEE192BDFF01A56AB6C7E79985D091A448(7, ((int32_t)10), (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object PlayerCollision/<GetHurt>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetHurtU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2450DFD2D312ADA9F6148CF4EC7367025DC312D1 (U3CGetHurtU3Ed__25_tCE23B855AA771A236EAB6E9936C71921B3D53587* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerCollision/<GetHurt>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetHurtU3Ed__25_System_Collections_IEnumerator_Reset_m597BE714057E81FE170FA5E1040775479F090061 (U3CGetHurtU3Ed__25_tCE23B855AA771A236EAB6E9936C71921B3D53587* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetHurtU3Ed__25_System_Collections_IEnumerator_Reset_m597BE714057E81FE170FA5E1040775479F090061_RuntimeMethod_var)));
	}
}
// System.Object PlayerCollision/<GetHurt>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetHurtU3Ed__25_System_Collections_IEnumerator_get_Current_m330DF2A709A2BCF9EBAA191B174D7F07B712C24E (U3CGetHurtU3Ed__25_tCE23B855AA771A236EAB6E9936C71921B3D53587* __this, const RuntimeMethod* method) 
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
// System.Void PlayerCollision/<ShowMessage>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowMessageU3Ed__26__ctor_mCCC483FDFE5FB3AD3B53E4AF31C66E9D6DA9A007 (U3CShowMessageU3Ed__26_t56D968B3ED74217A6E30985E809E48A6C8BE3FF1* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerCollision/<ShowMessage>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowMessageU3Ed__26_System_IDisposable_Dispose_m015DBF50F9D02E6EF402ACBE37CB17C3B62774E6 (U3CShowMessageU3Ed__26_t56D968B3ED74217A6E30985E809E48A6C8BE3FF1* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerCollision/<ShowMessage>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShowMessageU3Ed__26_MoveNext_mBAC24A335F8B866BD9F3878C48172906CCE09E13 (U3CShowMessageU3Ed__26_t56D968B3ED74217A6E30985E809E48A6C8BE3FF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C459A33B11E3AB83E34CD4E146B521BA8ED64F5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// levelText.text = "LEVEL " + (GameManager.level + 1);
		PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* L_4 = V_1;
		NullCheck(L_4);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = L_4->___levelText_16;
		int32_t L_6 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___level_7;
		V_2 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral4C459A33B11E3AB83E34CD4E146B521BA8ED64F5, L_7, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_8);
		// levelText.enabled = true;
		PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* L_9 = V_1;
		NullCheck(L_9);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_10 = L_9->___levelText_16;
		NullCheck(L_10);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_10, (bool)1, NULL);
		// yield return new WaitForSeconds(2);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_11 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_11, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0067:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// levelText.enabled = false;
		PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1* L_12 = V_1;
		NullCheck(L_12);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_13 = L_12->___levelText_16;
		NullCheck(L_13);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object PlayerCollision/<ShowMessage>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShowMessageU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m78F277677706A8DE47F58E11ACAAFBA2C4B02540 (U3CShowMessageU3Ed__26_t56D968B3ED74217A6E30985E809E48A6C8BE3FF1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerCollision/<ShowMessage>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowMessageU3Ed__26_System_Collections_IEnumerator_Reset_m3CDABDED7560F1D776B76A09523FAF8CF5FFB824 (U3CShowMessageU3Ed__26_t56D968B3ED74217A6E30985E809E48A6C8BE3FF1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShowMessageU3Ed__26_System_Collections_IEnumerator_Reset_m3CDABDED7560F1D776B76A09523FAF8CF5FFB824_RuntimeMethod_var)));
	}
}
// System.Object PlayerCollision/<ShowMessage>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShowMessageU3Ed__26_System_Collections_IEnumerator_get_Current_mE0956D50CAA677A8ECD9FA29F9D3737A88876EC0 (U3CShowMessageU3Ed__26_t56D968B3ED74217A6E30985E809E48A6C8BE3FF1* __this, const RuntimeMethod* method) 
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
// System.Void PlayerMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Awake_m7E8376225AEB5B44C88D56C73B36BD3E3F09CC1F (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// body = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___body_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___body_8), (void*)L_0);
		// anim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_9), (void*)L_1);
		// boxCollider = GetComponent<BoxCollider2D>();
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_2;
		L_2 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		__this->___boxCollider_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boxCollider_10), (void*)L_2);
		// }
		return;
	}
}
// System.Void PlayerMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Start_m83FD44DCA324CE3D05A71FD2E2991FCD743F003A (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		__this->___UnityPlayer_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UnityPlayer_17), (void*)L_0);
		// currentActivity = UnityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = __this->___UnityPlayer_17;
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_1, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		__this->___currentActivity_18 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentActivity_18), (void*)L_2);
		// pauseMenuScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___pauseMenuScreen_16;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Update_m5BB6CE35AF68EE00CFEB4BA5EBA17E10667551D3 (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleInput_tEE9EB918A5CFBD4DD0FB0ABA51A7D5C9866A21D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E82A1DE8DD4EE10E1C3A213A1A62CF3EA79F602);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(numberCoins);
		int32_t L_0 = ((PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_il2cpp_TypeInfo_var))->___numberCoins_13;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// horizontalInput = SimpleInput.GetAxis("Horizontal");
		il2cpp_codegen_runtime_class_init_inline(SimpleInput_tEE9EB918A5CFBD4DD0FB0ABA51A7D5C9866A21D3_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = SimpleInput_GetAxis_m441D6292BE9EAFBE6D7393FC2B5EA1D2385B1380(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		__this->___horizontalInput_12 = L_3;
		// if (horizontalInput > 0.01f) { transform.localScale = Vector3.one; }
		float L_4 = __this->___horizontalInput_12;
		if ((!(((float)L_4) > ((float)(0.00999999978f)))))
		{
			goto IL_003e;
		}
	}
	{
		// if (horizontalInput > 0.01f) { transform.localScale = Vector3.one; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_5);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_6, NULL);
		goto IL_006a;
	}

IL_003e:
	{
		// else if(horizontalInput < -0.01f) { transform. localScale = new Vector3(-1, 1, 1); }
		float L_7 = __this->___horizontalInput_12;
		if ((!(((float)L_7) < ((float)(-0.00999999978f)))))
		{
			goto IL_006a;
		}
	}
	{
		// else if(horizontalInput < -0.01f) { transform. localScale = new Vector3(-1, 1, 1); }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_8, L_9, NULL);
	}

IL_006a:
	{
		// anim.SetBool("walk", horizontalInput != 0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___anim_9;
		float L_11 = __this->___horizontalInput_12;
		NullCheck(L_10);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_10, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)((((int32_t)((((float)L_11) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		// anim.SetBool("grounded", isGrounded());
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = __this->___anim_9;
		bool L_13;
		L_13 = PlayerMovement_isGrounded_mE2B56FF688E68521E9E26F0740FE913021175F13(__this, NULL);
		NullCheck(L_12);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_12, _stringLiteral6E82A1DE8DD4EE10E1C3A213A1A62CF3EA79F602, L_13, NULL);
		// if (wallJumpCoolDown > 0.2f)
		float L_14 = __this->___wallJumpCoolDown_11;
		if ((!(((float)L_14) > ((float)(0.200000003f)))))
		{
			goto IL_012c;
		}
	}
	{
		// body.velocity = new Vector2(horizontalInput * speed, body.velocity.y);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_15 = __this->___body_8;
		float L_16 = __this->___horizontalInput_12;
		float L_17 = __this->___speed_4;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_18 = __this->___body_8;
		NullCheck(L_18);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_18, NULL);
		float L_20 = L_19.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_21), ((float)il2cpp_codegen_multiply(L_16, L_17)), L_20, /*hidden argument*/NULL);
		NullCheck(L_15);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_15, L_21, NULL);
		// if (onWall() && !isGrounded())
		bool L_22;
		L_22 = PlayerMovement_onWall_mCB668AFE77B51A812DFF6EF082A65CB733CE33BA(__this, NULL);
		if (!L_22)
		{
			goto IL_010c;
		}
	}
	{
		bool L_23;
		L_23 = PlayerMovement_isGrounded_mE2B56FF688E68521E9E26F0740FE913021175F13(__this, NULL);
		if (L_23)
		{
			goto IL_010c;
		}
	}
	{
		// body.gravityScale = 0;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_24 = __this->___body_8;
		NullCheck(L_24);
		Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD(L_24, (0.0f), NULL);
		// body.velocity = Vector2.zero;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_25 = __this->___body_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		NullCheck(L_25);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_25, L_26, NULL);
		goto IL_011c;
	}

IL_010c:
	{
		// body.gravityScale = 7;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_27 = __this->___body_8;
		NullCheck(L_27);
		Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD(L_27, (7.0f), NULL);
	}

IL_011c:
	{
		// if (Input.GetKey(KeyCode.Space))
		bool L_28;
		L_28 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)32), NULL);
		if (!L_28)
		{
			goto IL_013e;
		}
	}
	{
		// Jump();
		PlayerMovement_Jump_mCA26EA1D2892C47F04966998153F3FD4FFBCEB43(__this, NULL);
		return;
	}

IL_012c:
	{
		// wallJumpCoolDown += Time.deltaTime;
		float L_29 = __this->___wallJumpCoolDown_11;
		float L_30;
		L_30 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___wallJumpCoolDown_11 = ((float)il2cpp_codegen_add(L_29, L_30));
	}

IL_013e:
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Jump_mCA26EA1D2892C47F04966998153F3FD4FFBCEB43 (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.SetTrigger("jump");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___anim_9;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7, NULL);
		// if (isGrounded())
		bool L_1;
		L_1 = PlayerMovement_isGrounded_mE2B56FF688E68521E9E26F0740FE913021175F13(__this, NULL);
		if (!L_1)
		{
			goto IL_004e;
		}
	}
	{
		// body.velocity = new Vector2(body.velocity.x, jumpPower);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2 = __this->___body_8;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->___body_8;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_3, NULL);
		float L_5 = L_4.___x_0;
		float L_6 = __this->___jumpPower_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_2, L_7, NULL);
		// AudioManager.instance.Play("Jump");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_8 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_8);
		AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F(L_8, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		return;
	}

IL_004e:
	{
		// else if (onWall() && !isGrounded())
		bool L_9;
		L_9 = PlayerMovement_onWall_mCB668AFE77B51A812DFF6EF082A65CB733CE33BA(__this, NULL);
		if (!L_9)
		{
			goto IL_0135;
		}
	}
	{
		bool L_10;
		L_10 = PlayerMovement_isGrounded_mE2B56FF688E68521E9E26F0740FE913021175F13(__this, NULL);
		if (L_10)
		{
			goto IL_0135;
		}
	}
	{
		// AudioManager.instance.Play("Jump");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_11 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_11);
		AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F(L_11, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		// if (horizontalInput == 0)
		float L_12 = __this->___horizontalInput_12;
		if ((!(((float)L_12) == ((float)(0.0f)))))
		{
			goto IL_00f9;
		}
	}
	{
		// body.velocity = new Vector2(-Mathf.Sign(transform.localScale.x) * 10, 0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_13 = __this->___body_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_14, NULL);
		float L_16 = L_15.___x_2;
		float L_17;
		L_17 = Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline(L_16, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_18), ((float)il2cpp_codegen_multiply(((-L_17)), (10.0f))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_13, L_18, NULL);
		// transform.localScale = new Vector3(-Mathf.Sign(transform.localScale.x), transform.localScale.y, transform.localScale.z);//?? min 16:47
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_20, NULL);
		float L_22 = L_21.___x_2;
		float L_23;
		L_23 = Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline(L_22, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_24, NULL);
		float L_26 = L_25.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_27, NULL);
		float L_29 = L_28.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_30), ((-L_23)), L_26, L_29, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_19, L_30, NULL);
		goto IL_012a;
	}

IL_00f9:
	{
		// body.velocity = new Vector2(-Mathf.Sign(transform.localScale.x) * 3, 6);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_31 = __this->___body_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_32, NULL);
		float L_34 = L_33.___x_2;
		float L_35;
		L_35 = Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline(L_34, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_36), ((float)il2cpp_codegen_multiply(((-L_35)), (3.0f))), (6.0f), /*hidden argument*/NULL);
		NullCheck(L_31);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_31, L_36, NULL);
	}

IL_012a:
	{
		// wallJumpCoolDown = 0;
		__this->___wallJumpCoolDown_11 = (0.0f);
	}

IL_0135:
	{
		// }
		return;
	}
}
// System.Boolean PlayerMovement::isGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMovement_isGrounded_mE2B56FF688E68521E9E26F0740FE913021175F13 (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// RaycastHit2D raycastHit = Physics2D.BoxCast(boxCollider.bounds.center, boxCollider.bounds.size, 0, Vector2.down, 0.1f, groundLayer);
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0 = __this->___boxCollider_10;
		NullCheck(L_0);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1;
		L_1 = Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E(L_0, NULL);
		V_1 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_2, NULL);
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_4 = __this->___boxCollider_10;
		NullCheck(L_4);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_5;
		L_5 = Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E(L_4, NULL);
		V_1 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_get_down_m744DCF40A3F17B76B9C084145D6E66AC0DE3D5CD_inline(NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_9 = __this->___groundLayer_6;
		int32_t L_10;
		L_10 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_11;
		L_11 = Physics2D_BoxCast_m40F89A8F56F51A2369B918CD84F7548C1A47BBC9(L_3, L_7, (0.0f), L_8, (0.100000001f), L_10, NULL);
		V_0 = L_11;
		// return raycastHit.collider != null; //si esta en el cielo
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_12;
		L_12 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_13;
	}
}
// System.Boolean PlayerMovement::onWall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMovement_onWall_mCB668AFE77B51A812DFF6EF082A65CB733CE33BA (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// RaycastHit2D raycastHit = Physics2D.BoxCast(boxCollider.bounds.center, boxCollider.bounds.size, 0, new Vector2(transform.localScale.x, 0), 0.1f, wallLayer);
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0 = __this->___boxCollider_10;
		NullCheck(L_0);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1;
		L_1 = Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E(L_0, NULL);
		V_1 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_2, NULL);
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_4 = __this->___boxCollider_10;
		NullCheck(L_4);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_5;
		L_5 = Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E(L_4, NULL);
		V_1 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_8, NULL);
		float L_10 = L_9.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), L_10, (0.0f), /*hidden argument*/NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_12 = __this->___wallLayer_7;
		int32_t L_13;
		L_13 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_14;
		L_14 = Physics2D_BoxCast_m40F89A8F56F51A2369B918CD84F7548C1A47BBC9(L_3, L_7, (0.0f), L_11, (0.100000001f), L_13, NULL);
		V_0 = L_14;
		// return raycastHit.collider != null; //si esta en el cielo
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_15;
		L_15 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_16;
	}
}
// System.Void PlayerMovement::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Pause_m8BC86953586C4646877018CB8C99E523A065AD0C (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 0;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.0f), NULL);
		// pauseMenuScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pauseMenuScreen_16;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Resume_m7A1B5497FDEA271DE70A5CC81DAF6DB5CAD84715 (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// pauseMenuScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pauseMenuScreen_16;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Quit_m111652246AA14A80B78F30BE8C8B013AAFF72431 (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoinSystem_t395C61906FB3167B363B7553CF25CC3E07F805B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointSystem_t651E7CE6F5F1EAD04F09E2626F0F08116E1ED624_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81B6E477026EF768F836E8D052EF8CD0A02E8D81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DC2839A1BEB829FDD23526BC9D732882819B4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerCollision.endGame == false)
		bool L_0 = ((PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCollision_t7BF0F4C2A506987589B3E5E8938A76977B0051B1_il2cpp_TypeInfo_var))->___endGame_15;
		if (L_0)
		{
			goto IL_0042;
		}
	}
	{
		// informationToAndroid = CoinSystem.coin.ToString() + "/0/" + "false";
		String_t* L_1;
		L_1 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&((CoinSystem_t395C61906FB3167B363B7553CF25CC3E07F805B7_StaticFields*)il2cpp_codegen_static_fields_for(CoinSystem_t395C61906FB3167B363B7553CF25CC3E07F805B7_il2cpp_TypeInfo_var))->___coin_4), NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_1, _stringLiteralA2DC2839A1BEB829FDD23526BC9D732882819B4A, NULL);
		__this->___informationToAndroid_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___informationToAndroid_14), (void*)L_2);
		// currentActivity.Call("onGameFinish", informationToAndroid);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = __this->___currentActivity_18;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		String_t* L_6 = __this->___informationToAndroid_14;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_3);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_3, _stringLiteral81B6E477026EF768F836E8D052EF8CD0A02E8D81, L_5, NULL);
		goto IL_0085;
	}

IL_0042:
	{
		// informationToAndroid = CoinSystem.coin.ToString() + PointSystem.currentTime + "true";
		String_t* L_7;
		L_7 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&((CoinSystem_t395C61906FB3167B363B7553CF25CC3E07F805B7_StaticFields*)il2cpp_codegen_static_fields_for(CoinSystem_t395C61906FB3167B363B7553CF25CC3E07F805B7_il2cpp_TypeInfo_var))->___coin_4), NULL);
		String_t* L_8;
		L_8 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&((PointSystem_t651E7CE6F5F1EAD04F09E2626F0F08116E1ED624_StaticFields*)il2cpp_codegen_static_fields_for(PointSystem_t651E7CE6F5F1EAD04F09E2626F0F08116E1ED624_il2cpp_TypeInfo_var))->___currentTime_6), NULL);
		String_t* L_9;
		L_9 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_7, L_8, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		__this->___informationToAndroid_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___informationToAndroid_14), (void*)L_9);
		// currentActivity.Call("onGameFinish", informationToAndroid);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = __this->___currentActivity_18;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		String_t* L_13 = __this->___informationToAndroid_14;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
		NullCheck(L_10);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_10, _stringLiteral81B6E477026EF768F836E8D052EF8CD0A02E8D81, L_12, NULL);
	}

IL_0085:
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mB37559C5B0638161878D20E00B7C672FC38BBBAA (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
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
// System.Void PlayerShoot::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerShoot_Start_mAC73D505E787C770FCBA6B3923033824104D68FB (PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* __this, const RuntimeMethod* method) 
{
	{
		// isShooting = false;
		__this->___isShooting_4 = (bool)0;
		// }
		return;
	}
}
// System.Void PlayerShoot::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerShoot_Awake_m25C82C40BAB0DD64D97221A78287EE56353A7A5F (PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_12), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlayerShoot::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerShoot_Update_m5E47F67C7891946590E95F84AAB474461A9565A0 (PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* __this, const RuntimeMethod* method) 
{
	{
		// if(Input.GetKey(KeyCode.J) && !isShooting)
		bool L_0;
		L_0 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)106), NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = __this->___isShooting_4;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Attack1();
		PlayerShoot_Attack1_m9B76967E6C7C62A05B00A97AFF1E5B325ADB2B23(__this, NULL);
		return;
	}

IL_0018:
	{
		// else if(Input.GetKey(KeyCode.K) && !isShooting)
		bool L_2;
		L_2 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)107), NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		bool L_3 = __this->___isShooting_4;
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		// Attack2();
		PlayerShoot_Attack2_m84F520E70F07C393F9ADD26FE21F8224BB70C6AD(__this, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void PlayerShoot::Attack1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerShoot_Attack1_m9B76967E6C7C62A05B00A97AFF1E5B325ADB2B23 (PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((!isShooting) && (weapon1))
		bool L_0 = __this->___isShooting_4;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		bool L_1 = ((PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43_StaticFields*)il2cpp_codegen_static_fields_for(PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43_il2cpp_TypeInfo_var))->___weapon1_10;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// StartCoroutine(Shoot1());
		RuntimeObject* L_2;
		L_2 = PlayerShoot_Shoot1_mF87DA3F0CC0B5C8799BF54F4067F5A2CC66EF07A(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		return;
	}

IL_001d:
	{
		// else if (!weapon1) { onShowToastClicked(); }
		bool L_4 = ((PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43_StaticFields*)il2cpp_codegen_static_fields_for(PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43_il2cpp_TypeInfo_var))->___weapon1_10;
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		// else if (!weapon1) { onShowToastClicked(); }
		PlayerShoot_onShowToastClicked_mC2C7A3A5BDA8DF0C762F0801C7C3A48FE1B4473D(__this, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void PlayerShoot::Attack2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerShoot_Attack2_m84F520E70F07C393F9ADD26FE21F8224BB70C6AD (PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((!isShooting) && (weapon2))
		bool L_0 = __this->___isShooting_4;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		bool L_1 = ((PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43_StaticFields*)il2cpp_codegen_static_fields_for(PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43_il2cpp_TypeInfo_var))->___weapon2_11;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// StartCoroutine(Shoot2());
		RuntimeObject* L_2;
		L_2 = PlayerShoot_Shoot2_m95EBCED3145AFF9076B57E2CB7FD07EB3EB7D3FF(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		return;
	}

IL_001d:
	{
		// else if (!weapon2) { onShowToastClicked(); }
		bool L_4 = ((PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43_StaticFields*)il2cpp_codegen_static_fields_for(PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43_il2cpp_TypeInfo_var))->___weapon2_11;
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		// else if (!weapon2) { onShowToastClicked(); }
		PlayerShoot_onShowToastClicked_mC2C7A3A5BDA8DF0C762F0801C7C3A48FE1B4473D(__this, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerShoot::Shoot1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerShoot_Shoot1_mF87DA3F0CC0B5C8799BF54F4067F5A2CC66EF07A (PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShoot1U3Ed__14_tF8E830FE47DD2966449C802E910F6A7B994290A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShoot1U3Ed__14_tF8E830FE47DD2966449C802E910F6A7B994290A0* L_0 = (U3CShoot1U3Ed__14_tF8E830FE47DD2966449C802E910F6A7B994290A0*)il2cpp_codegen_object_new(U3CShoot1U3Ed__14_tF8E830FE47DD2966449C802E910F6A7B994290A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CShoot1U3Ed__14__ctor_m1E0BA435EA58A4B78B5B520A9022AC934767BB6B(L_0, 0, NULL);
		U3CShoot1U3Ed__14_tF8E830FE47DD2966449C802E910F6A7B994290A0* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator PlayerShoot::Shoot2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerShoot_Shoot2_m95EBCED3145AFF9076B57E2CB7FD07EB3EB7D3FF (PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShoot2U3Ed__15_tE8F23CF62304B3FB0CEC831BE889CB281D03BA35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShoot2U3Ed__15_tE8F23CF62304B3FB0CEC831BE889CB281D03BA35* L_0 = (U3CShoot2U3Ed__15_tE8F23CF62304B3FB0CEC831BE889CB281D03BA35*)il2cpp_codegen_object_new(U3CShoot2U3Ed__15_tE8F23CF62304B3FB0CEC831BE889CB281D03BA35_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CShoot2U3Ed__15__ctor_m1E6B601DD3F504F0AC2A6DE9C5701C288CEDD0B6(L_0, 0, NULL);
		U3CShoot2U3Ed__15_tE8F23CF62304B3FB0CEC831BE889CB281D03BA35* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void PlayerShoot::onShowToastClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerShoot_onShowToastClicked_mC2C7A3A5BDA8DF0C762F0801C7C3A48FE1B4473D (PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* __this, const RuntimeMethod* method) 
{
	{
		// showAndroidToast();
		PlayerShoot_showAndroidToast_mFB8BED13EF2064A0112D80ACB917AEF6CCBDF0F2(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayerShoot::showAndroidToast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerShoot_showAndroidToast_mFB8BED13EF2064A0112D80ACB917AEF6CCBDF0F2 (PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55C55F06F540638BB0C811FD4FFC86C7127043FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78FF4FA942C1B42A8039C2BA8E962E337610543C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84EE66A73B24F0E9CEE249A5A8879E93FCC66EB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_2 = NULL;
	{
		// AndroidJavaClass toastClass =
		//             new AndroidJavaClass("android.widget.Toast");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral78FF4FA942C1B42A8039C2BA8E962E337610543C, NULL);
		V_0 = L_0;
		// object[] toastParams = new object[3];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		V_1 = L_1;
		// AndroidJavaClass unityActivity =
		//   new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_2 = L_2;
		// toastParams[0] =
		//              unityActivity.GetStatic<AndroidJavaObject>
		//                        ("currentActivity");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_1;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = V_2;
		NullCheck(L_4);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_4, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		// toastParams[1] = toastText;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_1;
		String_t* L_7 = __this->___toastText_9;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		// toastParams[2] = toastClass.GetStatic<int>
		//                        ("LENGTH_SHORT");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_1;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC(L_9, _stringLiteral55C55F06F540638BB0C811FD4FFC86C7127043FE, AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC_RuntimeMethod_var);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		// AndroidJavaObject toastObject =
		//                 toastClass.CallStatic<AndroidJavaObject>
		//                               ("makeText", toastParams);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_13 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_13);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15;
		L_15 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_13, _stringLiteral84EE66A73B24F0E9CEE249A5A8879E93FCC66EB0, L_14, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		// toastObject.Call("show");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16;
		L_16 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_15);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_15, _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192, L_16, NULL);
		// }
		return;
	}
}
// System.Void PlayerShoot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerShoot__ctor_m1F3B8F727ACAF560C904CDF3F7B311CD388673A4 (PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD79006BDB559C95F5F33E2DFF6B4FC10CE663E30);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string toastText = "Buy this weapon to use it";
		__this->___toastText_9 = _stringLiteralD79006BDB559C95F5F33E2DFF6B4FC10CE663E30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toastText_9), (void*)_stringLiteralD79006BDB559C95F5F33E2DFF6B4FC10CE663E30);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Int32 PlayerShoot::<Shoot1>g__direction|14_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerShoot_U3CShoot1U3Eg__directionU7C14_0_m8B2F5F18791F9BD7BB1D59D8D40D016CEED90ABE (PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* __this, const RuntimeMethod* method) 
{
	{
		// if(transform.localScale.x < 0f) { return -1; } else { return +1; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		float L_2 = L_1.___x_2;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0019;
		}
	}
	{
		// if(transform.localScale.x < 0f) { return -1; } else { return +1; }
		return (-1);
	}

IL_0019:
	{
		// if(transform.localScale.x < 0f) { return -1; } else { return +1; }
		return 1;
	}
}
// System.Int32 PlayerShoot::<Shoot2>g__direction|15_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerShoot_U3CShoot2U3Eg__directionU7C15_0_mA05FCB7E38A595CE04C7F6F0A3AA187228D6A769 (PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* __this, const RuntimeMethod* method) 
{
	{
		// if (transform.localScale.x < 0f) { return -1; } else { return +1; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		float L_2 = L_1.___x_2;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0019;
		}
	}
	{
		// if (transform.localScale.x < 0f) { return -1; } else { return +1; }
		return (-1);
	}

IL_0019:
	{
		// if (transform.localScale.x < 0f) { return -1; } else { return +1; }
		return 1;
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
// System.Void PlayerShoot/<Shoot1>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShoot1U3Ed__14__ctor_m1E0BA435EA58A4B78B5B520A9022AC934767BB6B (U3CShoot1U3Ed__14_tF8E830FE47DD2966449C802E910F6A7B994290A0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerShoot/<Shoot1>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShoot1U3Ed__14_System_IDisposable_Dispose_m4D420CE50A83747747E5FBC2A14B799A5A7CDD90 (U3CShoot1U3Ed__14_tF8E830FE47DD2966449C802E910F6A7B994290A0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerShoot/<Shoot1>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShoot1U3Ed__14_MoveNext_m7369F4FEDEA6FF5A7A2FE44D0C670DB46B6FD905 (U3CShoot1U3Ed__14_tF8E830FE47DD2966449C802E910F6A7B994290A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BulletDie_t7B02E64F972A94C85F84FBB39676CC019BA34FB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00e9;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isShooting = true;
		PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* L_4 = V_1;
		NullCheck(L_4);
		L_4->___isShooting_4 = (bool)1;
		// BulletDie.weaponType = 1;
		((BulletDie_t7B02E64F972A94C85F84FBB39676CC019BA34FB7_StaticFields*)il2cpp_codegen_static_fields_for(BulletDie_t7B02E64F972A94C85F84FBB39676CC019BA34FB7_il2cpp_TypeInfo_var))->___weaponType_4 = 1;
		// GameObject newBullet = Instantiate(bullet, shootPos.position, Quaternion.identity);
		PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___bullet_8;
		PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* L_7 = V_1;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = L_7->___shootPos_7;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_6, L_9, L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_2 = L_11;
		// newBullet.GetComponent<Rigidbody2D>().velocity = new Vector2(shootSpeed * direction() * Time.fixedDeltaTime, 0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_2;
		NullCheck(L_12);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_13;
		L_13 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_12, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* L_14 = V_1;
		NullCheck(L_14);
		float L_15 = L_14->___shootSpeed_5;
		PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = PlayerShoot_U3CShoot1U3Eg__directionU7C14_0_m8B2F5F18791F9BD7BB1D59D8D40D016CEED90ABE(L_16, NULL);
		float L_18;
		L_18 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_19), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_15, ((float)L_17))), L_18)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_13, L_19, NULL);
		// newBullet.transform.localScale = new Vector2(newBullet.transform.localScale.x * direction(), newBullet.transform.localScale.y);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_2;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_2;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_23, NULL);
		float L_25 = L_24.___x_2;
		PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = PlayerShoot_U3CShoot1U3Eg__directionU7C14_0_m8B2F5F18791F9BD7BB1D59D8D40D016CEED90ABE(L_26, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_2;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_29, NULL);
		float L_31 = L_30.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_32), ((float)il2cpp_codegen_multiply(L_25, ((float)L_27))), L_31, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_32, NULL);
		NullCheck(L_21);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_21, L_33, NULL);
		// anim.SetTrigger("attack1");
		PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* L_34 = V_1;
		NullCheck(L_34);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_35 = L_34->___anim_12;
		NullCheck(L_35);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_35, _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E, NULL);
		// AudioManager.instance.Play("Shoot");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_36 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_36);
		AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F(L_36, _stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8, NULL);
		// yield return new WaitForSeconds(shootTimer);
		PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* L_37 = V_1;
		NullCheck(L_37);
		float L_38 = L_37->___shootTimer_6;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_39 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_39, L_38, NULL);
		__this->___U3CU3E2__current_1 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_39);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00e9:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isShooting = false;
		PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* L_40 = V_1;
		NullCheck(L_40);
		L_40->___isShooting_4 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object PlayerShoot/<Shoot1>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShoot1U3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m47E552EEFA5958A0CA0915E8E06D82F2D1EEEFBA (U3CShoot1U3Ed__14_tF8E830FE47DD2966449C802E910F6A7B994290A0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerShoot/<Shoot1>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShoot1U3Ed__14_System_Collections_IEnumerator_Reset_m2E178AC2E5ACD3EB571B8FB4230D69F514BA81F9 (U3CShoot1U3Ed__14_tF8E830FE47DD2966449C802E910F6A7B994290A0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShoot1U3Ed__14_System_Collections_IEnumerator_Reset_m2E178AC2E5ACD3EB571B8FB4230D69F514BA81F9_RuntimeMethod_var)));
	}
}
// System.Object PlayerShoot/<Shoot1>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShoot1U3Ed__14_System_Collections_IEnumerator_get_Current_m981117C0FB4E3506C3E8A862447BBDC63CD2D714 (U3CShoot1U3Ed__14_tF8E830FE47DD2966449C802E910F6A7B994290A0* __this, const RuntimeMethod* method) 
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
// System.Void PlayerShoot/<Shoot2>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShoot2U3Ed__15__ctor_m1E6B601DD3F504F0AC2A6DE9C5701C288CEDD0B6 (U3CShoot2U3Ed__15_tE8F23CF62304B3FB0CEC831BE889CB281D03BA35* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerShoot/<Shoot2>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShoot2U3Ed__15_System_IDisposable_Dispose_m0D4E817329EE8C97B61A0B2854A6C748E679AFAC (U3CShoot2U3Ed__15_tE8F23CF62304B3FB0CEC831BE889CB281D03BA35* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerShoot/<Shoot2>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShoot2U3Ed__15_MoveNext_m94FF3F8808FE09F108D1DC1D5DDFAB7B3BABF4A3 (U3CShoot2U3Ed__15_tE8F23CF62304B3FB0CEC831BE889CB281D03BA35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BulletDie_t7B02E64F972A94C85F84FBB39676CC019BA34FB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00e9;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isShooting = true;
		PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* L_4 = V_1;
		NullCheck(L_4);
		L_4->___isShooting_4 = (bool)1;
		// BulletDie.weaponType = 2;
		((BulletDie_t7B02E64F972A94C85F84FBB39676CC019BA34FB7_StaticFields*)il2cpp_codegen_static_fields_for(BulletDie_t7B02E64F972A94C85F84FBB39676CC019BA34FB7_il2cpp_TypeInfo_var))->___weaponType_4 = 2;
		// GameObject newBullet = Instantiate(bullet, shootPos.position, Quaternion.identity);
		PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___bullet_8;
		PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* L_7 = V_1;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = L_7->___shootPos_7;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_6, L_9, L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_2 = L_11;
		// newBullet.GetComponent<Rigidbody2D>().velocity = new Vector2(shootSpeed * direction() * Time.fixedDeltaTime, 0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_2;
		NullCheck(L_12);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_13;
		L_13 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_12, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* L_14 = V_1;
		NullCheck(L_14);
		float L_15 = L_14->___shootSpeed_5;
		PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = PlayerShoot_U3CShoot2U3Eg__directionU7C15_0_mA05FCB7E38A595CE04C7F6F0A3AA187228D6A769(L_16, NULL);
		float L_18;
		L_18 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_19), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_15, ((float)L_17))), L_18)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_13, L_19, NULL);
		// newBullet.transform.localScale = new Vector2(newBullet.transform.localScale.x * direction(), newBullet.transform.localScale.y);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_2;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_2;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_23, NULL);
		float L_25 = L_24.___x_2;
		PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = PlayerShoot_U3CShoot2U3Eg__directionU7C15_0_mA05FCB7E38A595CE04C7F6F0A3AA187228D6A769(L_26, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_2;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_29, NULL);
		float L_31 = L_30.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_32), ((float)il2cpp_codegen_multiply(L_25, ((float)L_27))), L_31, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_32, NULL);
		NullCheck(L_21);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_21, L_33, NULL);
		// anim.SetTrigger("attack2");
		PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* L_34 = V_1;
		NullCheck(L_34);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_35 = L_34->___anim_12;
		NullCheck(L_35);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_35, _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0, NULL);
		// AudioManager.instance.Play("Shoot");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_36 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_36);
		AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F(L_36, _stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8, NULL);
		// yield return new WaitForSeconds(shootTimer);
		PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* L_37 = V_1;
		NullCheck(L_37);
		float L_38 = L_37->___shootTimer_6;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_39 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_39, L_38, NULL);
		__this->___U3CU3E2__current_1 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_39);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00e9:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isShooting = false;
		PlayerShoot_t0FB7F3DAE72AE3551148C0E87A8E85FEACC96E43* L_40 = V_1;
		NullCheck(L_40);
		L_40->___isShooting_4 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object PlayerShoot/<Shoot2>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShoot2U3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4C021AA58E4C7524C620823C3A5F9F2A60DB31B7 (U3CShoot2U3Ed__15_tE8F23CF62304B3FB0CEC831BE889CB281D03BA35* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerShoot/<Shoot2>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShoot2U3Ed__15_System_Collections_IEnumerator_Reset_m8534392F6D9F4AEFAD91BE555907A983A4E25DA2 (U3CShoot2U3Ed__15_tE8F23CF62304B3FB0CEC831BE889CB281D03BA35* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShoot2U3Ed__15_System_Collections_IEnumerator_Reset_m8534392F6D9F4AEFAD91BE555907A983A4E25DA2_RuntimeMethod_var)));
	}
}
// System.Object PlayerShoot/<Shoot2>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShoot2U3Ed__15_System_Collections_IEnumerator_get_Current_m3EC36AF6D7350162EE9B8D22D44D8CACBC6B356D (U3CShoot2U3Ed__15_tE8F23CF62304B3FB0CEC831BE889CB281D03BA35* __this, const RuntimeMethod* method) 
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
// System.Void PointSystem::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointSystem_Awake_m8573842C2F74B998C0F34843AFD31E3ACA82CD2B (PointSystem_t651E7CE6F5F1EAD04F09E2626F0F08116E1ED624* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointSystem_t651E7CE6F5F1EAD04F09E2626F0F08116E1ED624_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentTime = 300f;
		((PointSystem_t651E7CE6F5F1EAD04F09E2626F0F08116E1ED624_StaticFields*)il2cpp_codegen_static_fields_for(PointSystem_t651E7CE6F5F1EAD04F09E2626F0F08116E1ED624_il2cpp_TypeInfo_var))->___currentTime_6 = (300.0f);
		// }
		return;
	}
}
// System.Void PointSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointSystem_Update_mE328E58B215927DE721660ACD1E013A428D3980A (PointSystem_t651E7CE6F5F1EAD04F09E2626F0F08116E1ED624* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointSystem_t651E7CE6F5F1EAD04F09E2626F0F08116E1ED624_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AE45639C5F7DB8D717ED0292F5AAAFA3666E7D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentTime -= 1 * Time.deltaTime;
		float L_0 = ((PointSystem_t651E7CE6F5F1EAD04F09E2626F0F08116E1ED624_StaticFields*)il2cpp_codegen_static_fields_for(PointSystem_t651E7CE6F5F1EAD04F09E2626F0F08116E1ED624_il2cpp_TypeInfo_var))->___currentTime_6;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		((PointSystem_t651E7CE6F5F1EAD04F09E2626F0F08116E1ED624_StaticFields*)il2cpp_codegen_static_fields_for(PointSystem_t651E7CE6F5F1EAD04F09E2626F0F08116E1ED624_il2cpp_TypeInfo_var))->___currentTime_6 = ((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply((1.0f), L_1))));
		// countdownText.text = "Points: " + currentTime.ToString("0");
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___countdownText_4;
		String_t* L_3;
		L_3 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&((PointSystem_t651E7CE6F5F1EAD04F09E2626F0F08116E1ED624_StaticFields*)il2cpp_codegen_static_fields_for(PointSystem_t651E7CE6F5F1EAD04F09E2626F0F08116E1ED624_il2cpp_TypeInfo_var))->___currentTime_6), _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral5AE45639C5F7DB8D717ED0292F5AAAFA3666E7D4, L_3, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_4);
		// endCountDownText.text = currentTime.ToString("0");
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___endCountDownText_5;
		String_t* L_6;
		L_6 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&((PointSystem_t651E7CE6F5F1EAD04F09E2626F0F08116E1ED624_StaticFields*)il2cpp_codegen_static_fields_for(PointSystem_t651E7CE6F5F1EAD04F09E2626F0F08116E1ED624_il2cpp_TypeInfo_var))->___currentTime_6), _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_6);
		// if (currentTime <= 0)
		float L_7 = ((PointSystem_t651E7CE6F5F1EAD04F09E2626F0F08116E1ED624_StaticFields*)il2cpp_codegen_static_fields_for(PointSystem_t651E7CE6F5F1EAD04F09E2626F0F08116E1ED624_il2cpp_TypeInfo_var))->___currentTime_6;
		if ((!(((float)L_7) <= ((float)(0.0f)))))
		{
			goto IL_006a;
		}
	}
	{
		// currentTime = 0;
		((PointSystem_t651E7CE6F5F1EAD04F09E2626F0F08116E1ED624_StaticFields*)il2cpp_codegen_static_fields_for(PointSystem_t651E7CE6F5F1EAD04F09E2626F0F08116E1ED624_il2cpp_TypeInfo_var))->___currentTime_6 = (0.0f);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void PointSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointSystem__ctor_m42B91DF221D13FE603FFE4E08A1F32B299335CD5 (PointSystem_t651E7CE6F5F1EAD04F09E2626F0F08116E1ED624* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline (const RuntimeMethod* method) 
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
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___rightVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
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
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_down_m744DCF40A3F17B76B9C084145D6E66AC0DE3D5CD_inline (const RuntimeMethod* method) 
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
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___downVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline (float ___f0, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
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
