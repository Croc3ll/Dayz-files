////////////////////////////////////////////////////////////////////
//DeRap: animals\animconfig\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sun Jul 28 07:46:00 2019 : 'file' last modified on Mon Dec 19 09:52:40 2016
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Animals_AnimConfig
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Animals"};
	};
};
class CfgMovesAnimalsBase
{
	class Default
	{
		minPlayTime = -1;
		class AnimHooks{};
		canBlendStep = 0;
		actions = "";
		access = 3;
		file = "";
		looped = 1;
		speed = 0.5;
		disableWeapons = 1;
		enableOptics = 0;
		disableWeaponsLong = 1;
		showWeaponAim = 0;
		enableMissile = 0;
		enableBinocular = 0;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showHandGun = 0;
		onLandBeg = 0;
		onLandEnd = 0;
		onLadder = 0;
		canPullTrigger = 1;
		duty = -0.51;
		predictSpeedCoef = 1;
		visibleSize = 1;
		aimPrecision = 1;
		relSpeedMin = 1;
		relSpeedMax = 1;
		soundEnabled = 0;
		controlHead = 0;
		headBobMode = 0;
		headBobStrength = 0;
		soundOverride = "";
		soundEdge[] = {0.5,1};
		terminal = 0;
		limitGunMovement = 1;
		variantsPlayer[] = {};
		variantsAI[] = {""};
		equivalentTo = "";
		connectAs = "";
		variantAfter[] = {5,10,20};
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		aiming = "aimingNo";
		leaning = "aimingNo";
		untiltWeapon = "aimingNo";
		aimingBody = "aimingUpDefault";
		legs = "legsNo";
		head = "headDefault";
		leaningFactorBeg = 0;
		leaningFactorEnd = 0;
		leaningFactorZeroPoint = -1;
		leaningCorrectionAngleBeg = 0;
		leaningCorrectionAngleEnd = 0;
		interpolationSpeed = 6;
		interpolationRestart = 0;
		collisionShape = "dz\animals\data\geom\basicColide.p3d";
		hasCollShapeSafe = 0;
		collisionShapeSafe = "";
		boundingSphere = 1;
		enableDirectControl = 1;
		enableAutoActions = 0;
		leftHandIKBeg = 0;
		leftHandIKEnd = 0;
		rightHandIKBeg = 0;
		rightHandIKEnd = 0;
		weaponIK = 0;
		preload = 0;
		walkcycles = 1;
		forceAim = 0;
		rightHandIKCurve[] = {};
		leftHandIKCurve[] = {};
	};
	class StandBase: Default
	{
		aiming = "aimingDefault";
		disableWeapons = 1;
		leaningFactorBeg = 1;
		leaningFactorEnd = 1;
	};
	class StandBaseLatin: StandBase
	{
		file = "NoAnim.rtm";
	};
	class DefaultDie: Default
	{
		aiming = "aimingNo";
		legs = "legsNo";
		head = "headNo";
		disableWeapons = 1;
		interpolationRestart = 1;
		soundOverride = "fallbody";
		soundEdge[] = {0.45};
		soundEnabled = 0;
	};
	class DefaultDieLatin: DefaultDie
	{
		InterpolateTo[] = {};
		ConnectTo[] = {};
		terminal = 1;
		variantAfter[] = {0,0,0};
		looped = 0;
		speed = 1;
		file = "NoAnim.rtm";
		actions = "NoActions";
		soundEnabled = 0;
	};
	class ManActions
	{
		Stop = "";
		StopRelaxed = "";
		TurnL = "";
		TurnR = "";
		TurnLRelaxed = "";
		TurnRRelaxed = "";
		Default = "";
		JumpOff = "";
		ReloadMagazine = "";
		ReloadMGun = "";
		ReloadAT = "";
		ReloadMortar = "";
		ThrowGrenade = "";
		WalkF = "";
		WalkLF = "";
		WalkRF = "";
		WalkL = "";
		WalkR = "";
		WalkLB = "";
		WalkRB = "";
		WalkB = "";
		SlowF = "";
		SlowLF = "";
		SlowRF = "";
		SlowL = "";
		SlowR = "";
		SlowLB = "";
		SlowRB = "";
		SlowB = "";
		FastF = "";
		FastLF = "";
		FastRF = "";
		FastL = "";
		FastR = "";
		FastLB = "";
		FastRB = "";
		FastB = "";
		EvasiveForward = "";
		EvasiveLeft = "";
		EvasiveRight = "";
		EvasiveBack = "";
		StartSwim = "";
		StopSwim = "";
		Down = "";
		Up = "";
		PlayerStand = "";
		PlayerCrouch = "";
		PlayerProne = "";
		Lying = "";
		Stand = "";
		Combat = "";
		Crouch = "";
		CanNotMove = "";
		Civil = "";
		CivilLying = "";
		FireNotPossible = "";
		Die = "";
		WeaponOn = "";
		WeaponOff = "";
		StrokeFist = "";
		StrokeGun = "";
		SitDown = "";
		Salute = "";
		BinocOn = "";
		BinocOff = "";
		PutDown = "";
		PutDownEnd = "";
		Medic = "";
		Treated = "";
		LadderOnDown = "";
		LadderOnUp = "";
		LadderOff = "";
		LadderOffTop = "";
		LadderOffBottom = "";
		GetInLow = "";
		GetInMedium = "";
		GetInHigh = "";
		GetOutLow = "";
		GetOutMedium = "";
		GetOutHigh = "";
		TakeFlag = "";
		HandGunOn = "";
		LookAround = "";
		Eat = "";
		StopEat = "";
		Rest = "";
		StopRest = "";
	};
	class NoActionsLatin: ManActions
	{
		upDegree = 0;
		useFastMove = 0;
		limitFast = 5.5;
		turnSpeed = 8;
	};
	class BlendAnims
	{
		aimingDefault[] = {};
		untiltWeaponDefault[] = {};
		legsDefault[] = {};
		headDefault[] = {};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
		aimingUpDefault[] = {};
	};
	collisionVertexPattern[] = {"1a","2a","3a","4a","5a","6a","7a","8a","9a","10a","11a","12a","13a","14a","15a","16a","17a","18a","19a","20a","21a","22a","23a","24a","25a","26a","27a","28a","29a","30a","31a","32a","33a","34a"};
	collisionGeomCompPattern[] = {1};
};
class CfgMovesAnimalsLatin: CfgMovesAnimalsBase
{
	transitionsDisabled[] = {};
	transitionsSimple[] = {};
	transitionsInterpolated[] = {};
	skeletonName = "";
	primaryActionMaps[] = {"NoActions"};
};
class CfgMovesButterfly
{
	access = 0;
	collisionVertexPattern[] = {};
	collisionGeomCompPattern[] = {};
	class ManActions
	{
		default = "";
		open = "";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			upDegree = -1;
			turnSpeed = 1;
			limitFast = 5;
			useFastMove = "false";
		};
		class DefaultActions: NoActions
		{
			default = "Fly";
			open = "Open";
			upDegree = 0;
		};
	};
	class Default
	{
		actions = "DefaultActions";
		class AnimHooks{};
		file = "";
		looped = "true";
		speed = 0.5;
		onLandBeg = "false";
		onLandEnd = "false";
		predictSpeedCoef = 1;
		relSpeedMin = 1;
		relSpeedMax = 1;
		soundEnabled = "false";
		soundOverride = "";
		soundEdge[] = {};
		terminal = "false";
		equivalentTo = "";
		connectAs = "";
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		interpolationSpeed = 6;
		interpolationRestart = "false";
		preload = "false";
		controlHead = "false";
		headBobMode = "false";
		headBobStrength = "false";
		walkcycles = 1;
		forceAim = 0;
	};
	class States
	{
		class Fly: Default
		{
			file = "\dz\animals\data\rtm\Butterfly_Fly.rtm";
			looped = "true";
			speed = -0.25;
		};
		class Open: Default
		{
			file = "\dz\animals\data\rtm\Butterfly_Open.rtm";
			looped = "false";
			speed = -1;
			connectFrom[] = {"Fly",1};
			connectTo[] = {"Fly",1};
		};
	};
	class Interpolations{};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
};
class CfgMovesBird
{
	access = 0;
	collisionVertexPattern[] = {};
	collisionGeomCompPattern[] = {};
	class ManActions
	{
		default = "";
		open = "";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			upDegree = -1;
			turnSpeed = 1;
			limitFast = 5;
			useFastMove = "false";
		};
		class DefaultActions: NoActions
		{
			default = "Fly";
			open = "Open";
			upDegree = 0;
		};
	};
	class default
	{
		actions = "DefaultActions";
		class AnimHooks{};
		file = "";
		looped = "true";
		reversed = "false";
		autocenter = "false";
		speed = 0.5;
		onLandBeg = "false";
		onLandEnd = "false";
		predictSpeedCoef = 1;
		relSpeedMin = 1;
		relSpeedMax = 1;
		soundEnabled = "true";
		soundOverride = "";
		soundEdge[] = {0.5,1};
		terminal = "false";
		equivalentTo = "";
		connectAs = "";
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		interpolationSpeed = 6;
		interpolationRestart = "false";
		preload = "false";
		controlHead = "false";
		headBobMode = "false";
		headBobStrength = "false";
		walkcycles = 1;
	};
	class States
	{
		class Fly: default
		{
			file = "\dz\animals\birds\data\anim\flying.rtm";
			looped = "true";
			speed = -0.25;
		};
		class Open: default
		{
			file = "\dz\animals\birds\data\anim\land.rtm";
			looped = "false";
			speed = -1;
			connectFrom[] = {"Fly",1};
			connectTo[] = {"Fly",1};
		};
	};
	class Interpolations{};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
};
class CfgMovesCervusElaphus: CfgMovesAnimalsLatin
{
	primaryActionMaps[] = {"NoActions","CervusElaphusActions"};
	class States
	{
		class CervusElaphus_Stand: StandBaseLatin
		{
			collisionShape = "dz\animals\cervus_elaphus\cervus_elaphus.p3d";
			actions = "CervusElaphusActions";
			InterpolateTo[] = {"CervusElaphus_Die",0.0};
		};
		class CervusElaphus_Die: DefaultDieLatin
		{
			collisionShape = "dz\animals\cervus_elaphus\cervus_elaphus.p3d";
		};
	};
	class Actions
	{
		class NoActions: NoActionsLatin{};
		class CervusElaphusActions: NoActions
		{
			upDegree = "ManPosNoWeapon";
			Default = "CervusElaphus_Stand";
			Stand = "CervusElaphus_Stand";
			Die = "CervusElaphus_Die";
		};
	};
	class Interpolations{};
	class BlendAnims: BlendAnims{};
	skeletonName = "CervusElaphusAISkeleton";
};
class CfgMovesSusScrofa: CfgMovesAnimalsLatin
{
	primaryActionMaps[] = {"NoActions","SusScrofaActions"};
	class States
	{
		class SusScrofa_Stand: StandBaseLatin
		{
			collisionShape = "DZ\animals\sus_scrofa\sus_scrofa.p3d";
			actions = "SusScrofaActions";
			InterpolateTo[] = {"SusScrofa_Die",0.0};
		};
		class SusScrofa_Die: DefaultDieLatin
		{
			collisionShape = "DZ\animals\sus_scrofa\sus_scrofa.p3d";
		};
	};
	class Actions
	{
		class NoActions: NoActionsLatin{};
		class SusScrofaActions: NoActions
		{
			upDegree = "ManPosNoWeapon";
			Default = "SusScrofa_Stand";
			Stand = "SusScrofa_Stand";
			Die = "SusScrofa_Die";
		};
	};
	class Interpolations{};
	class BlendAnims: BlendAnims{};
	skeletonName = "SusScrofaAISkeleton";
};
class CfgMovesSusDomesticus: CfgMovesAnimalsLatin
{
	primaryActionMaps[] = {"NoActions","SusDomesticusActions"};
	class States
	{
		class SusDomesticus_Stand: StandBaseLatin
		{
			collisionShape = "DZ\animals\sus_domesticus\sus_domesticus.p3d";
			actions = "SusDomesticusActions";
			InterpolateTo[] = {"SusDomesticus_Die",0.0};
		};
		class SusDomesticus_Die: DefaultDieLatin
		{
			collisionShape = "DZ\animals\sus_domesticus\sus_domesticus.p3d";
		};
	};
	class Actions
	{
		class NoActions: NoActionsLatin{};
		class SusDomesticusActions: NoActions
		{
			upDegree = "ManPosNoWeapon";
			Default = "SusDomesticus_Stand";
			Stand = "SusDomesticus_Stand";
			Die = "SusDomesticus_Die";
		};
	};
	class Interpolations{};
	class BlendAnims: BlendAnims{};
	skeletonName = "SusDomesticusAISkeleton";
};
class CfgMovesBosTaurus: CfgMovesAnimalsLatin
{
	primaryActionMaps[] = {"NoActions","BosTaurusActions"};
	class States
	{
		class BosTaurus_Stand: StandBaseLatin
		{
			collisionShape = "DZ\animals\bos_taurus_fem\bos_taurus_fem.p3d";
			actions = "BosTaurusActions";
			InterpolateTo[] = {"BosTaurus_Die",0.0};
		};
		class BosTaurus_Die: DefaultDieLatin
		{
			collisionShape = "DZ\animals\bos_taurus_fem\bos_taurus_fem.p3d";
		};
	};
	class Actions
	{
		class NoActions: NoActionsLatin{};
		class BosTaurusActions: NoActions
		{
			upDegree = "ManPosNoWeapon";
			Default = "BosTaurus_Stand";
			Stand = "BosTaurus_Stand";
			Die = "BosTaurus_Die";
			Stop = "BosTaurus_Stand";
			StopRelaxed = "BosTaurus_Stand";
			TurnL = "BosTaurus_Stand";
			TurnR = "BosTaurus_Stand";
			TurnLRelaxed = "BosTaurus_Stand";
			TurnRRelaxed = "BosTaurus_Stand";
			JumpOff = "BosTaurus_Stand";
			ReloadMagazine = "BosTaurus_Stand";
			ReloadMGun = "BosTaurus_Stand";
			ReloadAT = "BosTaurus_Stand";
			ReloadMortar = "BosTaurus_Stand";
			ThrowGrenade = "BosTaurus_Stand";
			WalkF = "BosTaurus_Stand";
			WalkLF = "BosTaurus_Stand";
			WalkRF = "BosTaurus_Stand";
			WalkL = "BosTaurus_Stand";
			WalkR = "BosTaurus_Stand";
			WalkLB = "BosTaurus_Stand";
			WalkRB = "BosTaurus_Stand";
			WalkB = "BosTaurus_Stand";
			SlowLF = "BosTaurus_Stand";
			SlowF = "BosTaurus_Stand";
			SlowRF = "BosTaurus_Stand";
			SlowL = "BosTaurus_Stand";
			SlowR = "BosTaurus_Stand";
			SlowLB = "BosTaurus_Stand";
			SlowRB = "BosTaurus_Stand";
			SlowB = "BosTaurus_Stand";
			FastF = "BosTaurus_Stand";
			FastLF = "BosTaurus_Stand";
			FastRF = "BosTaurus_Stand";
			FastL = "BosTaurus_Stand";
			FastR = "BosTaurus_Stand";
			FastLB = "BosTaurus_Stand";
			FastRB = "BosTaurus_Stand";
			FastB = "BosTaurus_Stand";
			EvasiveForward = "BosTaurus_Stand";
			EvasiveLeft = "BosTaurus_Stand";
			EvasiveRight = "BosTaurus_Stand";
			EvasiveBack = "BosTaurus_Stand";
			StartSwim = "BosTaurus_Stand";
			StopSwim = "BosTaurus_Stand";
			Down = "BosTaurus_Stand";
			Up = "BosTaurus_Stand";
			PlayerStand = "BosTaurus_Stand";
			PlayerCrouch = "BosTaurus_Stand";
			PlayerProne = "BosTaurus_Stand";
			Lying = "BosTaurus_Stand";
			Crouch = "BosTaurus_Stand";
			Combat = "BosTaurus_Stand";
			CanNotMove = "BosTaurus_Stand";
			Civil = "BosTaurus_Stand";
			CivilLying = "BosTaurus_Stand";
			FireNotPossible = "BosTaurus_Stand";
			WeaponOn = "BosTaurus_Stand";
			WeaponOff = "BosTaurus_Stand";
			StrokeFist = "BosTaurus_Stand";
			StrokeGun = "BosTaurus_Stand";
			SitDown = "BosTaurus_Stand";
			Salute = "BosTaurus_Stand";
			BinocOn = "BosTaurus_Stand";
			BinocOff = "BosTaurus_Stand";
			PutDown = "BosTaurus_Stand";
			PutDownEnd = "BosTaurus_Stand";
			Medic = "BosTaurus_Stand";
			Treated = "BosTaurus_Stand";
			LadderOnDown = "BosTaurus_Stand";
			LadderOnUp = "BosTaurus_Stand";
			LadderOff = "BosTaurus_Stand";
			LadderOffTop = "BosTaurus_Stand";
			GetInLow = "BosTaurus_Stand";
			LadderOffBottom = "BosTaurus_Stand";
			GetInMedium = "BosTaurus_Stand";
			GetOutLow = "BosTaurus_Stand";
			GetInHigh = "BosTaurus_Stand";
			GetOutMedium = "BosTaurus_Stand";
			TakeFlag = "BosTaurus_Stand";
			GetOutHigh = "BosTaurus_Stand";
			HandGunOn = "BosTaurus_Stand";
			LookAround = "BosTaurus_Stand";
			Eat = "BosTaurus_Stand";
			StopEat = "BosTaurus_Stand";
			Rest = "BosTaurus_Stand";
			StopRest = "BosTaurus_Stand";
		};
	};
	class Interpolations{};
	class BlendAnims: BlendAnims{};
	skeletonName = "BosTaurusAISkeleton";
};
class CfgMovesOvisAries: CfgMovesAnimalsLatin
{
	primaryActionMaps[] = {"NoActions","OvisAriesActions"};
	class States
	{
		class OvisAries_Stand: StandBaseLatin
		{
			collisionShape = "DZ\animals\ovis_aries_fem\ovis_aries_fem.p3d";
			actions = "OvisAriesActions";
			InterpolateTo[] = {"OvisAries_Die",0.0};
		};
		class OvisAries_Die: DefaultDieLatin
		{
			collisionShape = "DZ\animals\ovis_aries_fem\ovis_aries_fem.p3d";
		};
	};
	class Actions
	{
		class NoActions: NoActionsLatin{};
		class OvisAriesActions: NoActions
		{
			upDegree = "ManPosNoWeapon";
			Default = "OvisAries_Stand";
			Stand = "OvisAries_Stand";
			Die = "OvisAries_Die";
			Stop = "OvisAries_Stand";
			StopRelaxed = "OvisAries_Stand";
			TurnL = "OvisAries_Stand";
			TurnR = "OvisAries_Stand";
			TurnLRelaxed = "OvisAries_Stand";
			TurnRRelaxed = "OvisAries_Stand";
			JumpOff = "OvisAries_Stand";
			ReloadMagazine = "OvisAries_Stand";
			ReloadMGun = "OvisAries_Stand";
			ReloadAT = "OvisAries_Stand";
			ReloadMortar = "OvisAries_Stand";
			ThrowGrenade = "OvisAries_Stand";
			WalkF = "OvisAries_Stand";
			WalkLF = "OvisAries_Stand";
			WalkRF = "OvisAries_Stand";
			WalkL = "OvisAries_Stand";
			WalkR = "OvisAries_Stand";
			WalkLB = "OvisAries_Stand";
			WalkRB = "OvisAries_Stand";
			WalkB = "OvisAries_Stand";
			SlowLF = "OvisAries_Stand";
			SlowF = "OvisAries_Stand";
			SlowRF = "OvisAries_Stand";
			SlowL = "OvisAries_Stand";
			SlowR = "OvisAries_Stand";
			SlowLB = "OvisAries_Stand";
			SlowRB = "OvisAries_Stand";
			SlowB = "OvisAries_Stand";
			FastF = "OvisAries_Stand";
			FastLF = "OvisAries_Stand";
			FastRF = "OvisAries_Stand";
			FastL = "OvisAries_Stand";
			FastR = "OvisAries_Stand";
			FastLB = "OvisAries_Stand";
			FastRB = "OvisAries_Stand";
			FastB = "OvisAries_Stand";
			EvasiveForward = "OvisAries_Stand";
			EvasiveLeft = "OvisAries_Stand";
			EvasiveRight = "OvisAries_Stand";
			EvasiveBack = "OvisAries_Stand";
			StartSwim = "OvisAries_Stand";
			StopSwim = "OvisAries_Stand";
			Down = "OvisAries_Stand";
			Up = "OvisAries_Stand";
			PlayerStand = "OvisAries_Stand";
			PlayerCrouch = "OvisAries_Stand";
			PlayerProne = "OvisAries_Stand";
			Lying = "OvisAries_Stand";
			Crouch = "OvisAries_Stand";
			Combat = "OvisAries_Stand";
			CanNotMove = "OvisAries_Stand";
			Civil = "OvisAries_Stand";
			CivilLying = "OvisAries_Stand";
			FireNotPossible = "OvisAries_Stand";
			WeaponOn = "OvisAries_Stand";
			WeaponOff = "OvisAries_Stand";
			StrokeFist = "OvisAries_Stand";
			StrokeGun = "OvisAries_Stand";
			SitDown = "OvisAries_Stand";
			Salute = "OvisAries_Stand";
			BinocOn = "OvisAries_Stand";
			BinocOff = "OvisAries_Stand";
			PutDown = "OvisAries_Stand";
			PutDownEnd = "OvisAries_Stand";
			Medic = "OvisAries_Stand";
			Treated = "OvisAries_Stand";
			LadderOnDown = "OvisAries_Stand";
			LadderOnUp = "OvisAries_Stand";
			LadderOff = "OvisAries_Stand";
			LadderOffTop = "OvisAries_Stand";
			GetInLow = "OvisAries_Stand";
			LadderOffBottom = "OvisAries_Stand";
			GetInMedium = "OvisAries_Stand";
			GetOutLow = "OvisAries_Stand";
			GetInHigh = "OvisAries_Stand";
			GetOutMedium = "OvisAries_Stand";
			TakeFlag = "OvisAries_Stand";
			GetOutHigh = "OvisAries_Stand";
			HandGunOn = "OvisAries_Stand";
			LookAround = "OvisAries_Stand";
			Eat = "OvisAries_Stand";
			StopEat = "OvisAries_Stand";
			Rest = "OvisAries_Stand";
			StopRest = "OvisAries_Stand";
		};
	};
	class Interpolations{};
	class BlendAnims: BlendAnims{};
	skeletonName = "OvisAriesAISkeleton";
};
class CfgMovesLepusEuropaeus: CfgMovesAnimalsLatin
{
	primaryActionMaps[] = {"NoActions","LepusEuropaeusActions"};
	class States
	{
		class LepusEuropaeus_Stand: StandBaseLatin
		{
			collisionShape = "DZ\animals\lepus_europaeus\lepus_europaeus.p3d";
			actions = "LepusEuropaeusActions";
			InterpolateTo[] = {"LepusEuropaeus_Die",0.0};
		};
		class LepusEuropaeus_Die: DefaultDieLatin
		{
			collisionShape = "DZ\animals\lepus_europaeus\lepus_europaeus.p3d";
		};
	};
	class Actions
	{
		class NoActions: NoActionsLatin{};
		class LepusEuropaeusActions: NoActions
		{
			upDegree = "ManPosNoWeapon";
			Default = "LepusEuropaeus_Stand";
			Stand = "LepusEuropaeus_Stand";
			Die = "LepusEuropaeus_Die";
		};
	};
	class Interpolations{};
	class BlendAnims: BlendAnims{};
	skeletonName = "LepusEuropaeusAISkeleton";
};
class CfgMovesUrsusArctos: CfgMovesAnimalsLatin
{
	primaryActionMaps[] = {"NoActions","UrsusArctosActions"};
	class States
	{
		class UrsusArctos_Stand: StandBaseLatin
		{
			collisionShape = "DZ\animals\ursus_arctos\ursus_arctos.p3d";
			actions = "UrsusArctosActions";
			InterpolateTo[] = {"UrsusArctos_Die",0.0};
		};
		class UrsusArctos_Die: DefaultDieLatin
		{
			collisionShape = "DZ\animals\ursus_arctos\ursus_arctos.p3d";
		};
	};
	class Actions
	{
		class NoActions: NoActionsLatin{};
		class UrsusArctosActions: NoActions
		{
			upDegree = "ManPosNoWeapon";
			Default = "UrsusArctos_Stand";
			Stand = "UrsusArctos_Stand";
			Die = "UrsusArctos_Die";
		};
	};
	class Interpolations{};
	class BlendAnims: BlendAnims{};
	skeletonName = "UrsusArctosAISkeleton";
};
class CfgMovesVulpesVulpes: CfgMovesAnimalsLatin
{
	primaryActionMaps[] = {"NoActions","VulpesVulpesActions"};
	class States
	{
		class VulpesVulpes_Stand: StandBaseLatin
		{
			collisionShape = "DZ\animals\vulpes_vulpes\vulpes_vulpes.p3d";
			actions = "VulpesVulpesActions";
			InterpolateTo[] = {"VulpesVulpes_Die",0.0};
		};
		class VulpesVulpes_Die: DefaultDieLatin
		{
			collisionShape = "DZ\animals\vulpes_vulpes\vulpes_vulpes.p3d";
		};
	};
	class Actions
	{
		class NoActions: NoActionsLatin{};
		class VulpesVulpesActions: NoActions
		{
			upDegree = "ManPosNoWeapon";
			Default = "VulpesVulpes_Stand";
			Stand = "VulpesVulpes_Stand";
			Die = "VulpesVulpes_Die";
		};
	};
	class Interpolations{};
	class BlendAnims: BlendAnims{};
	skeletonName = "VulpesVulpesAISkeleton";
};
class CfgMovesGallusGallus: CfgMovesAnimalsLatin
{
	primaryActionMaps[] = {"NoActions","GallusGallusActions"};
	class States
	{
		class GallusGallus_Stand: StandBaseLatin
		{
			collisionShape = "DZ\animals\lepus_europaeus\lepus_europaeus.p3d";
			actions = "GallusGallusActions";
			InterpolateTo[] = {"GallusGallus_Die",0.0};
		};
		class GallusGallus_Die: DefaultDieLatin
		{
			collisionShape = "DZ\animals\lepus_europaeus\lepus_europaeus.p3d";
		};
	};
	class Actions
	{
		class NoActions: NoActionsLatin{};
		class GallusGallusActions: NoActions
		{
			upDegree = "ManPosNoWeapon";
			Default = "GallusGallus_Stand";
			Stand = "GallusGallus_Stand";
			Die = "GallusGallus_Die";
		};
	};
	class Interpolations{};
	class BlendAnims: BlendAnims{};
	skeletonName = "GallusGallusAISkeleton";
};
class CfgMovesGallusGallusFeminam: CfgMovesAnimalsLatin
{
	primaryActionMaps[] = {"NoActions","GallusGallusFeminamActions"};
	class States
	{
		class GallusGallusFeminam_Stand: StandBaseLatin
		{
			collisionShape = "DZ\animals\lepus_europaeus\lepus_europaeus.p3d";
			actions = "GallusGallusFeminamActions";
			InterpolateTo[] = {"GallusGallus_Die",0.0};
		};
		class GallusGallusFeminam_Die: DefaultDieLatin
		{
			collisionShape = "DZ\animals\lepus_europaeus\lepus_europaeus.p3d";
		};
	};
	class Actions
	{
		class NoActions: NoActionsLatin{};
		class GallusGallusFeminamActions: NoActions
		{
			upDegree = "ManPosNoWeapon";
			Default = "GallusGallusFeminam_Stand";
			Stand = "GallusGallusFeminam_Stand";
			Die = "GallusGallusFeminam_Die";
		};
	};
	class Interpolations{};
	class BlendAnims: BlendAnims{};
	skeletonName = "GallusGallusFeminamAISkeleton";
};
class CfgMovesCapraHircus: CfgMovesAnimalsLatin
{
	primaryActionMaps[] = {"NoActions","CapraHircusActions"};
	class States
	{
		class CapraHircus_Stand: StandBaseLatin
		{
			collisionShape = "DZ\animals\capra_hircus\capra_hircus.p3d";
			actions = "CapraHircusActions";
			InterpolateTo[] = {"CapraHircus_Die",0.0};
		};
		class CapraHircus_Die: DefaultDieLatin
		{
			collisionShape = "DZ\animals\capra_hircus\capra_hircus.p3d";
		};
	};
	class Actions
	{
		class NoActions: NoActionsLatin{};
		class CapraHircusActions: NoActions
		{
			upDegree = "ManPosNoWeapon";
			Default = "CapraHircus_Stand";
			Stand = "CapraHircus_Stand";
			Die = "CapraHircus_Die";
		};
	};
	class Interpolations{};
	class BlendAnims: BlendAnims{};
	skeletonName = "CapraHircusAISkeleton";
};
class CfgMovesCanisLupus: CfgMovesAnimalsLatin
{
	primaryActionMaps[] = {"NoActions","CanisLupusActions"};
	class States
	{
		class CanisLupus_Stand: StandBaseLatin
		{
			collisionShape = "DZ\animals\canis_lupus\canis_lupus.p3d";
			actions = "CanisLupusActions";
			InterpolateTo[] = {"CanisLupus_Die",0.0};
		};
		class CanisLupus_Die: DefaultDieLatin
		{
			collisionShape = "DZ\animals\canis_lupus\canis_lupus.p3d";
		};
	};
	class Actions
	{
		class NoActions: NoActionsLatin{};
		class CanisLupusActions: NoActions
		{
			upDegree = "ManPosNoWeapon";
			Default = "CanisLupus_Stand";
			Stand = "CanisLupus_Stand";
			Die = "CanisLupus_Die";
		};
	};
	class Interpolations{};
	class BlendAnims: BlendAnims{};
	skeletonName = "CanisLupusAISkeleton";
};
class CfgMovesCapreolusCapreolus: CfgMovesAnimalsLatin
{
	primaryActionMaps[] = {"NoActions","CapreolusCapreolusActions"};
	class States
	{
		class CapreolusCapreolus_Stand: StandBaseLatin
		{
			collisionShape = "DZ\animals\canis_lupus\canis_lupus.p3d";
			actions = "CapreolusCapreolusActions";
			InterpolateTo[] = {"CapreolusCapreolus_Die",0.0};
		};
		class CapreolusCapreolus_Die: DefaultDieLatin
		{
			collisionShape = "DZ\animals\canis_lupus\canis_lupus.p3d";
		};
	};
	class Actions
	{
		class NoActions: NoActionsLatin{};
		class CapreolusCapreolusActions: NoActions
		{
			upDegree = "ManPosNoWeapon";
			Default = "CapreolusCapreolus_Stand";
			Stand = "CapreolusCapreolus_Stand";
			Die = "CapreolusCapreolus_Die";
		};
	};
	class Interpolations{};
	class BlendAnims: BlendAnims{};
	skeletonName = "CapreolusCapreolusAISkeleton";
};
