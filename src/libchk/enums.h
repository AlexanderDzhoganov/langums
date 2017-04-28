#ifndef __LIBCHK_ENUMS_H
#define __LIBCHK_ENUMS_H

namespace CHK
{

    enum class TriggerConditionType : uint8_t
    {
        NoCondition = 0,
        CountdownTimer,
        Command,
        Bring,
        Accumulate,
        Kill,
        CommandTheMost,
        CommandsTheMostAt,
        MostKills,
        HighestScore,
        MostResources,
        Switch,
        ElapsedTime,
        DataIsAMissionBriefing,
        Opponents,
        Deaths,
        CommandTheLeast,
        CommandTheLeastAt,
        LeastKills,
        LowestScore,
        LeastResources,
        Score,
        Always,
        Never
    };

    enum class TriggerActionType : uint8_t
    {
        NoAction = 0,
        Victory,
        Defeat,
        PreserveTrigger,
        Wait,
        PauseGame,
        UnpauseGame,
        Transmission,
        PlayWAV,
        DisplayTextMessage,
        CenterView,
        CreateUnitWithProperties,
        SetMissionObjectives,
        SetSwitch,
        SetCountdownTimer,
        RunAIScript,
        RunAIScriptAtLocation,
        LeaderBoardControl,
        LeaderBoardControlAtLocation,
        LeaderBoardResources,
        LeaderBoardKills,
        LeaderBoardPoints,
        KillUnit,
        KillUnitAtLocation,
        RemoveUnit,
        RemoveUnitAtLocation,
        SetResources,
        SetScore,
        MinimapPing,
        TalkingPortrait,
        MuteUnitSpeech,
        UnmuteUnitSpeech,
        LeaderboardComputerPlayers,
        LeaderboardGoalControl,
        LeaderboardGoalControlAtLocation,
        LeaderboardGoalResources,
        LeaderboardGoalKills,
        LeaderboardGoalPoints,
        MoveLocation,
        MoveUnit,
        LeaderboardGreed,
        SetNextScenario,
        SetDoodadState,
        SetInvincibility,
        CreateUnit,
        SetDeaths,
        Order,
        Comment,
        GiveUnitsToPlayer,
        ModifyUnitHitPoints,
        ModifyUnitEnergy,
        ModifyUnitShieldPoints,
        ModifyUnitResourceAmount,
        ModifyUnitHangerCount,
        PauseTimer,
        UnpauseTimer,
        Draw,
        SetAllianceStatus,
        DisableDebugMode,
        EnableDebugMode
    };

    enum class TriggerComparisonType : uint8_t
    {
        AtLeast = 0,
        AtMost = 1,
        SwitchSet = 2,
        SwitchCleared = 3,
        Exactly = 10
    };

    enum class ScoreType : uint8_t
    {
        Total = 0,
        Units,
        Buildings,
        UnitsAndBuildings,
        Kills,
        Razings,
        KillsAndRazings,
        Custom
    };

    enum class ResourceType : uint8_t
    {
        Ore = 0,
        Gas = 1,
        OreAndGas = 2
    };

    enum class AllianceStatus : uint8_t
    {
        Enemy = 0,
        Ally = 1,
        AlliedVictory = 2
    };

    enum class TriggerActionState : uint8_t
    {
        Move = 0,
        Patrol = 1,
        Attack = 2,
        SetSwitch = 4,
        ClearSwitch = 5,
        ToggleSwitch = 6,
        SetTo = 7,
        Add = 8,
        Subtract = 9,
        RandomizeSwitch = 11
    };

    enum class TriggerModifier : uint8_t
    {
        GreaterThanOrEqual = 0,
        LessThanOrEqual,
        IsTrue,
        IsFalse,
        SetToTrue,
        SetToFalse,
        Not,
        SetTo,
        Add,
        Subtract,
        Exactly,
        Randomize
    };

    enum class PlayerId : uint8_t
    {
        Player1 = 0,
        Player2,
        Player3,
        Player4,
        Player5,
        Player6,
        Player7,
        Player8,
        Player9,
        Player10,
        Player11,
        Player12,
        None,
        CurrentPlayer,
        Foes,
        Allies,
        NeutralPlayers,
        AllPlayers,
        Force1,
        Force2,
        Force3,
        Force4,
        Unused1,
        Unused2,
        Unused3,
        Unused4,
        NonAlliedVictoryPlayers
    };

    enum class TechnologyId : uint8_t
    {
        StimPacks = 0,
        Lockdown,
        EMPShockwave,
        SpiderMines,
        ScannerSweep,
        SiegeMode,
        DefensiveMatrix,
        Irradiate,
        YamatoGun,
        CloakingField,
        PersonnelCloaking,
        Burrowing,
        Infestation,
        SpawnBroodling,
        DarkSwarm,
        Plague,
        Consume,
        Ensnare,
        Parasite,
        PsionicStorm,
        Hallucination,
        Recall,
        StasisField,
        ArchonWarp,
        Restoration,
        DisruptionWeb,
        Unused26,
        MindControl,
        DarkArchonMeld,
        Feedback,
        OpticalFlare,
        Maelstrom,
        LurkerAspect,
        Unused33,
        Healing
    };

    enum class UnitType : uint8_t
    {
        TerranMarine = 0,
        TerranGhost,
        TerranVulture,
        TerranGoliath,
        TerranGoliathTurret,
        TerranSiegeTankTankMode,
        TerranSiegeTankTankModeTurret,
        TerranSCV,
        TerranWraith,
        TerranScienceVessel,
        HeroGuiMontag,
        TerranDropship,
        TerranBattlecruiser,
        TerranVultureSpiderMine,
        TerranNuclearMissile,
        TerranCivilian,
        HeroSarahKerrigan,
        HeroAlanSchezar,
        HeroAlanSchezarTurret,
        HeroJimRaynorVulture,
        HeroJimRaynorMarine,
        HeroTomKazansky,
        HeroMagellan,
        HeroEdmundDukeTankMode,
        HeroEdmundDukeTankModeTurret,
        HeroEdmundDukeSiegeMode,
        HeroEdmundDukeSiegeModeTurret,
        HeroArcturusMengsk,
        HeroHyperion,
        HeroNoradII,
        TerranSiegeTankSiegeMode,
        TerranSiegeTankSiegeModeTurret,
        TerranFirebat,
        SpellScannerSweep,
        TerranMedic,
        ZergLarva,
        ZergEgg,
        ZergZergling,
        ZergHydralisk,
        ZergUltralisk,
        ZergBroodling,
        ZergDrone,
        ZergOverlord,
        ZergMutalisk,
        ZergGuardian,
        ZergQueen,
        ZergDefiler,
        ZergScourge,
        HeroTorrasque,
        HeroMatriarch,
        ZergInfestedTerran,
        HeroInfestedKerrigan,
        HeroUncleanOne,
        HeroHunterKiller,
        HeroDevouringOne,
        HeroKukulzaMutalisk,
        HeroKukulzaGuardian,
        HeroYggdrasill,
        TerranValkyrie,
        ZergCocoon,
        ProtossCorsair,
        ProtossDarkTemplar,
        ZergDevourer,
        ProtossDarkArchon,
        ProtossProbe,
        ProtossZealot,
        ProtossDragoon,
        ProtossHighTemplar,
        ProtossArchon,
        ProtossShuttle,
        ProtossScout,
        ProtossArbiter,
        ProtossCarrier,
        ProtossInterceptor,
        HeroDarkTemplar,
        HeroZeratul,
        HeroTassadarZeratulArchon,
        HeroFenixZealot,
        HeroFenixDragoon,
        HeroTassadar,
        HeroMojo,
        HeroWarbringer,
        HeroGantrithor,
        ProtossReaver,
        ProtossObserver,
        ProtossScarab,
        HeroDanimoth,
        HeroAldaris,
        HeroArtanis,
        CritterRhynadon,
        CritterBengalaas,
        SpecialCargoShip,
        SpecialMercenaryGunship,
        CritterScantid,
        CritterKakaru,
        CritterRagnasaur,
        CritterUrsadon,
        ZergLurkerEgg,
        HeroRaszagal,
        HeroSamirDuran,
        HeroAlexeiStukov,
        SpecialMapRevealer,
        HeroGerardDuGalle,
        ZergLurker,
        HeroInfestedDuran,
        SpellDisruptionWeb,
        TerranCommandCenter,
        TerranComsatStation,
        TerranNuclearSilo,
        TerranSupplyDepot,
        TerranRefinery,
        TerranBarracks,
        TerranAcademy,
        TerranFactory,
        TerranStarport,
        TerranControlTower,
        TerranScienceFacility,
        TerranCovertOps,
        TerranPhysicsLab,
        UnusedTerran1,
        TerranMachineShop,
        UnusedTerran2,
        TerranEngineeringBay,
        TerranArmory,
        TerranMissileTurret,
        TerranBunker,
        SpecialCrashedNoradII,
        SpecialIonCannon,
        PowerupUrajCrystal,
        PowerupKhalisCrystal,
        ZergInfestedCommandCenter,
        ZergHatchery,
        ZergLair,
        ZergHive,
        ZergNydusCanal,
        ZergHydraliskDen,
        ZergDefilerMound,
        ZergGreaterSpire,
        ZergQueensNest,
        ZergEvolutionChamber,
        ZergUltraliskCavern,
        ZergSpire,
        ZergSpawningPool,
        ZergCreepColony,
        ZergSporeColony,
        UnusedZerg1,
        ZergSunkenColony,
        SpecialOvermindWithShell,
        SpecialOvermind,
        ZergExtractor,
        SpecialMatureChrysalis,
        SpecialCerebrate,
        SpecialCerebrateDaggoth,
        UnusedZerg2,
        ProtossNexus,
        ProtossRoboticsFacility,
        ProtossPylon,
        ProtossAssimilator,
        UnusedProtoss1,
        ProtossObservatory,
        ProtossGateway,
        UnusedProtoss2,
        ProtossPhotonCannon,
        ProtossCitadelofAdun,
        ProtossCyberneticsCore,
        ProtossTemplarArchives,
        ProtossForge,
        ProtossStargate,
        SpecialStasisCellPrison,
        ProtossFleetBeacon,
        ProtossArbiterTribunal,
        ProtossRoboticsSupportBay,
        ProtossShieldBattery,
        SpecialKhaydarinCrystalForm,
        SpecialProtossTemple,
        SpecialXelNagaTemple,
        ResourceMineralField,
        ResourceMineralFieldType2,
        ResourceMineralFieldType3,
        UnusedCave,
        UnusedCaveIn,
        UnusedCantina,
        UnusedMiningPlatform,
        UnusedIndependantCommandCenter,
        SpecialIndependantStarport,
        UnusedIndependantJumpGate,
        UnusedRuins,
        UnusedKhaydarinCrystalFormation,
        ResourceVespeneGeyser,
        SpecialWarpGate,
        SpecialPsiDisrupter,
        UnusedZergMarker,
        UnusedTerranMarker,
        UnusedProtossMarker,
        SpecialZergBeacon,
        SpecialTerranBeacon,
        SpecialProtossBeacon,
        SpecialZergFlagBeacon,
        SpecialTerranFlagBeacon,
        SpecialProtossFlagBeacon,
        SpecialPowerGenerator,
        SpecialOvermindCocoon,
        SpellDarkSwarm,
        SpecialFloorMissileTrap,
        SpecialFloorHatch,
        SpecialUpperLevelDoor,
        SpecialRightUpperLevelDoor,
        SpecialPitDoor,
        SpecialRightPitDoor,
        SpecialFloorGunTrap,
        SpecialWallMissileTrap,
        SpecialWallFlameTrap,
        SpecialRightWallMissileTrap,
        SpecialRightWallFlameTrap,
        SpecialStartLocation,
        PowerupFlag,
        PowerupYoungChrysalis,
        PowerupPsiEmitter,
        PowerupDataDisk,
        PowerupKhaydarinCrystal,
        PowerupMineralClusterType1,
        PowerupMineralClusterType2,
        PowerupProtossGasOrbType1,
        PowerupProtossGasOrbType2,
        PowerupZergGasSacType1,
        PowerupZergGasSacType2,
        PowerupTerranGasTankType1,
        PowerupTerranGasTankType2,
        None,
        AllUnits,
        Men,
        Buildings,
        Factories,
        Unknown,
        MAX
    };

    const UnitType UnusedUnitTypes[] = {
        UnitType::TerranGoliathTurret,
        UnitType::TerranSiegeTankTankModeTurret,
        UnitType::TerranSiegeTankSiegeModeTurret,
        UnitType::TerranNuclearMissile,
        UnitType::HeroAlanSchezarTurret,
        UnitType::HeroEdmundDukeSiegeModeTurret,
        UnitType::HeroEdmundDukeTankModeTurret,
        UnitType::SpecialCargoShip,
        UnitType::SpecialMercenaryGunship,
        UnitType::SpecialMapRevealer,
        UnitType::SpellDisruptionWeb,
        UnitType::UnusedCantina,
        UnitType::UnusedCave,
        UnitType::UnusedCaveIn,
        UnitType::UnusedIndependantCommandCenter,
        UnitType::UnusedIndependantJumpGate,
        UnitType::UnusedKhaydarinCrystalFormation,
        UnitType::UnusedMiningPlatform,
        UnitType::UnusedProtoss1,
        UnitType::UnusedProtoss2,
        UnitType::UnusedProtossMarker,
        UnitType::UnusedRuins,
        UnitType::UnusedTerran1,
        UnitType::UnusedTerran2,
        UnitType::UnusedTerranMarker,
        UnitType::UnusedZerg1,
        UnitType::UnusedZerg2,
        UnitType::UnusedZergMarker,
        UnitType::PowerupUrajCrystal,
        UnitType::PowerupKhalisCrystal,
        UnitType::UnusedKhaydarinCrystalFormation,
        UnitType::ResourceMineralField,
        UnitType::ResourceMineralFieldType2,
        UnitType::ResourceMineralFieldType3,
        UnitType::ResourceVespeneGeyser,
        UnitType::SpecialTerranBeacon,
        UnitType::SpecialZergBeacon,
        UnitType::SpecialProtossBeacon,
        UnitType::SpecialTerranFlagBeacon,
        UnitType::SpecialZergFlagBeacon,
        UnitType::SpecialProtossFlagBeacon,
        UnitType::SpellDarkSwarm,
        UnitType::SpecialFloorHatch,
        UnitType::SpecialUpperLevelDoor,
        UnitType::SpecialRightPitDoor,
        UnitType::SpecialPitDoor,
        UnitType::SpecialRightUpperLevelDoor,
        UnitType::SpecialStartLocation,
        UnitType::PowerupFlag,
        UnitType::PowerupPsiEmitter,
        UnitType::PowerupDataDisk,
        UnitType::PowerupKhaydarinCrystal
    };

    const std::string UnitsByName[235] = {
        "TerranMarine",
        "TerranGhost",
        "TerranVulture",
        "TerranGoliath",
        "TerranGoliathTurret",
        "TerranSiegeTankTankMode",
        "TerranSiegeTankTankModeTurret",
        "TerranSCV",
        "TerranWraith",
        "TerranScienceVessel",
        "HeroGuiMontag",
        "TerranDropship",
        "TerranBattlecruiser",
        "TerranVultureSpiderMine",
        "TerranNuclearMissile",
        "TerranCivilian",
        "HeroSarahKerrigan",
        "HeroAlanSchezar",
        "HeroAlanSchezarTurret",
        "HeroJimRaynorVulture",
        "HeroJimRaynorMarine",
        "HeroTomKazansky",
        "HeroMagellan",
        "HeroEdmundDukeTankMode",
        "HeroEdmundDukeTankModeTurret",
        "HeroEdmundDukeSiegeMode",
        "HeroEdmundDukeSiegeModeTurret",
        "HeroArcturusMengsk",
        "HeroHyperion",
        "HeroNoradII",
        "TerranSiegeTankSiegeMode",
        "TerranSiegeTankSiegeModeTurret",
        "TerranFirebat",
        "SpellScannerSweep",
        "TerranMedic",
        "ZergLarva",
        "ZergEgg",
        "ZergZergling",
        "ZergHydralisk",
        "ZergUltralisk",
        "ZergBroodling",
        "ZergDrone",
        "ZergOverlord",
        "ZergMutalisk",
        "ZergGuardian",
        "ZergQueen",
        "ZergDefiler",
        "ZergScourge",
        "HeroTorrasque",
        "HeroMatriarch",
        "ZergInfestedTerran",
        "HeroInfestedKerrigan",
        "HeroUncleanOne",
        "HeroHunterKiller",
        "HeroDevouringOne",
        "HeroKukulzaMutalisk",
        "HeroKukulzaGuardian",
        "HeroYggdrasill",
        "TerranValkyrie",
        "ZergCocoon",
        "ProtossCorsair",
        "ProtossDarkTemplar",
        "ZergDevourer",
        "ProtossDarkArchon",
        "ProtossProbe",
        "ProtossZealot",
        "ProtossDragoon",
        "ProtossHighTemplar",
        "ProtossArchon",
        "ProtossShuttle",
        "ProtossScout",
        "ProtossArbiter",
        "ProtossCarrier",
        "ProtossInterceptor",
        "HeroDarkTemplar",
        "HeroZeratul",
        "HeroTassadarZeratulArchon",
        "HeroFenixZealot",
        "HeroFenixDragoon",
        "HeroTassadar",
        "HeroMojo",
        "HeroWarbringer",
        "HeroGantrithor",
        "ProtossReaver",
        "ProtossObserver",
        "ProtossScarab",
        "HeroDanimoth",
        "HeroAldaris",
        "HeroArtanis",
        "CritterRhynadon",
        "CritterBengalaas",
        "SpecialCargoShip",
        "SpecialMercenaryGunship",
        "CritterScantid",
        "CritterKakaru",
        "CritterRagnasaur",
        "CritterUrsadon",
        "ZergLurkerEgg",
        "HeroRaszagal",
        "HeroSamirDuran",
        "HeroAlexeiStukov",
        "SpecialMapRevealer",
        "HeroGerardDuGalle",
        "ZergLurker",
        "HeroInfestedDuran",
        "SpellDisruptionWeb",
        "TerranCommandCenter",
        "TerranComsatStation",
        "TerranNuclearSilo",
        "TerranSupplyDepot",
        "TerranRefinery",
        "TerranBarracks",
        "TerranAcademy",
        "TerranFactory",
        "TerranStarport",
        "TerranControlTower",
        "TerranScienceFacility",
        "TerranCovertOps",
        "TerranPhysicsLab",
        "UnusedTerran1",
        "TerranMachineShop",
        "UnusedTerran2",
        "TerranEngineeringBay",
        "TerranArmory",
        "TerranMissileTurret",
        "TerranBunker",
        "SpecialCrashedNoradII",
        "SpecialIonCannon",
        "PowerupUrajCrystal",
        "PowerupKhalisCrystal",
        "ZergInfestedCommandCenter",
        "ZergHatchery",
        "ZergLair",
        "ZergHive",
        "ZergNydusCanal",
        "ZergHydraliskDen",
        "ZergDefilerMound",
        "ZergGreaterSpire",
        "ZergQueensNest",
        "ZergEvolutionChamber",
        "ZergUltraliskCavern",
        "ZergSpire",
        "ZergSpawningPool",
        "ZergCreepColony",
        "ZergSporeColony",
        "UnusedZerg1",
        "ZergSunkenColony",
        "SpecialOvermindWithShell",
        "SpecialOvermind",
        "ZergExtractor",
        "SpecialMatureChrysalis",
        "SpecialCerebrate",
        "SpecialCerebrateDaggoth",
        "UnusedZerg2",
        "ProtossNexus",
        "ProtossRoboticsFacility",
        "ProtossPylon",
        "ProtossAssimilator",
        "UnusedProtoss1",
        "ProtossObservatory",
        "ProtossGateway",
        "UnusedProtoss2",
        "ProtossPhotonCannon",
        "ProtossCitadelofAdun",
        "ProtossCyberneticsCore",
        "ProtossTemplarArchives",
        "ProtossForge",
        "ProtossStargate",
        "SpecialStasisCellPrison",
        "ProtossFleetBeacon",
        "ProtossArbiterTribunal",
        "ProtossRoboticsSupportBay",
        "ProtossShieldBattery",
        "SpecialKhaydarinCrystalForm",
        "SpecialProtossTemple",
        "SpecialXelNagaTemple",
        "ResourceMineralField",
        "ResourceMineralFieldType2",
        "ResourceMineralFieldType3",
        "UnusedCave",
        "UnusedCaveIn",
        "UnusedCantina",
        "UnusedMiningPlatform",
        "UnusedIndependantCommandCenter",
        "SpecialIndependantStarport",
        "UnusedIndependantJumpGate",
        "UnusedRuins",
        "UnusedKhaydarinCrystalFormation",
        "ResourceVespeneGeyser",
        "SpecialWarpGate",
        "SpecialPsiDisrupter",
        "UnusedZergMarker",
        "UnusedTerranMarker",
        "UnusedProtossMarker",
        "SpecialZergBeacon",
        "SpecialTerranBeacon",
        "SpecialProtossBeacon",
        "SpecialZergFlagBeacon",
        "SpecialTerranFlagBeacon",
        "SpecialProtossFlagBeacon",
        "SpecialPowerGenerator",
        "SpecialOvermindCocoon",
        "SpellDarkSwarm",
        "SpecialFloorMissileTrap",
        "SpecialFloorHatch",
        "SpecialUpperLevelDoor",
        "SpecialRightUpperLevelDoor",
        "SpecialPitDoor",
        "SpecialRightPitDoor",
        "SpecialFloorGunTrap",
        "SpecialWallMissileTrap",
        "SpecialWallFlameTrap",
        "SpecialRightWallMissileTrap",
        "SpecialRightWallFlameTrap",
        "SpecialStartLocation",
        "PowerupFlag",
        "PowerupYoungChrysalis",
        "PowerupPsiEmitter",
        "PowerupDataDisk",
        "PowerupKhaydarinCrystal",
        "PowerupMineralClusterType1",
        "PowerupMineralClusterType2",
        "PowerupProtossGasOrbType1",
        "PowerupProtossGasOrbType2",
        "PowerupZergGasSacType1",
        "PowerupZergGasSacType2",
        "PowerupTerranGasTankType1",
        "PowerupTerranGasTankType2",
        "None",
        "AllUnits",
        "Men",
        "Buildings",
        "Factories",
        "Unknown",
        "MAX"
    };

    const std::string PlayersByName[27] = {
        "Player1",
        "Player2",
        "Player3",
        "Player4",
        "Player5",
        "Player6",
        "Player7",
        "Player8",
        "Player9",
        "Player10",
        "Player11",
        "Player12",
        "None",
        "CurrentPlayer",
        "Foes",
        "Allies",
        "NeutralPlayers",
        "AllPlayers",
        "Force1",
        "Force2",
        "Force3",
        "Force4",
        "Unused1",
        "Unused2",
        "Unused3",
        "Unused4",
        "NonAlliedVictoryPlayers"
    };

    const std::string ComparisonTypeByName[3] = {
        "AtLeast",
        "AtMost",
        "Exactly"
    };

    enum class AIScriptType
    {
        TerranCustomLevel,
        ZergCustomLevel,
        ProtossCustomLevel,
        TerranExpansionCustomLevel,
        ZergExpansionCustomLevel,
        ProtossExpansionCustomLevel,
        TerranCampaignEasy,
        TerranCampaignMedium,
        TerranCampaignDifficult,
        TerranCampaignInsane,
        TerranCampaignAreaTown,
        ZergCampaignEasy,
        ZergCampaignMedium,
        ZergCampaignDifficult,
        ZergCampaignInsane,
        ZergCampaignAreaTown,
        ProtossCampaignEasy,
        ProtossCampaignMedium,
        ProtossCampaignDifficult,
        ProtossCampaignInsane,
        ProtossCampaignAreaTown,
        ExpansionTerranCampaignEasy,
        ExpansionTerranCampaignMedium,
        ExpansionTerranCampaignDifficult,
        ExpansionTerranCampaignInsane,
        ExpansionTerranCampaignAreaTown,
        ExpansionZergCampaignEasy,
        ExpansionZergCampaignMedium,
        ExpansionZergCampaignDifficult,
        ExpansionZergCampaignInsane,
        ExpansionZergCampaignAreaTown,
        ExpansionProtossCampaignEasy,
        ExpansionProtossCampaignMedium,
        ExpansionProtossCampaignDifficult,
        ExpansionProtossCampaignInsane,
        ExpansionProtossCampaignAreaTown,
        SetPlayerToEnemy,
        SetPlayerToAlly,
        ValueThisAreaHigher,
        EnterClosestBunker,
        EnterTransport,
        ExitTransport
    };

    const std::string AIScriptTypeNames[] =
    {
        "TerranCustomLevel",
        "ZergCustomLevel",
        "ProtossCustomLevel",
        "TerranExpansionCustomLevel",
        "ZergExpansionCustomLevel",
        "ProtossExpansionCustomLevel",
        "TerranCampaignEasy",
        "TerranCampaignMedium",
        "TerranCampaignDifficult",
        "TerranCampaignInsane",
        "TerranCampaignAreaTown",
        "ZergCampaignEasy",
        "ZergCampaignMedium",
        "ZergCampaignDifficult",
        "ZergCampaignInsane",
        "ZergCampaignAreaTown",
        "ProtossCampaignEasy",
        "ProtossCampaignMedium",
        "ProtossCampaignDifficult",
        "ProtossCampaignInsane",
        "ProtossCampaignAreaTown",
        "ExpansionTerranCampaignEasy",
        "ExpansionTerranCampaignMedium",
        "ExpansionTerranCampaignDifficult",
        "ExpansionTerranCampaignInsane",
        "ExpansionTerranCampaignAreaTown",
        "ExpansionZergCampaignEasy",
        "ExpansionZergCampaignMedium",
        "ExpansionZergCampaignDifficult",
        "ExpansionZergCampaignInsane",
        "ExpansionZergCampaignAreaTown",
        "ExpansionProtossCampaignEasy",
        "ExpansionProtossCampaignMedium",
        "ExpansionProtossCampaignDifficult",
        "ExpansionProtossCampaignInsane",
        "ExpansionProtossCampaignAreaTown",
        "SetPlayerToEnemy",
        "SetPlayerToAlly",
        "ValueThisAreaHigher",
        "EnterClosestBunker",
        "EnterTransport",
        "ExitTransport"
    };

    const std::string AIScriptNames[] =
    {
        "TMCu",
        "ZMCu",
        "PMCu",
        "TMCx",
        "ZMCx",
        "PMCx",
        "TLOf",
        "TMED",
        "THIf",
        "TSUP",
        "TARE",
        "ZLOf",
        "ZMED",
        "ZHIf",
        "ZSUP",
        "ZARE",
        "PLOf",
        "PMED",
        "PHIf",
        "PSUP",
        "PARE",
        "TLOx",
        "TMEx",
        "THIx",
        "TSUx",
        "TARx",
        "ZLOx",
        "ZMEx",
        "ZHIx",
        "ZSUx",
        "ZARx",
        "PLOx",
        "PMEx",
        "PHIx",
        "PSUx",
        "PARx",
        "Enmy",
        "Ally",
        "VluA",
        "EnBk",
        "EnTr",
        "ExTr"
    };

}

#endif
