/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class bwapi_UnitCommand */

#ifndef _Included_bwapi_UnitCommand
#define _Included_bwapi_UnitCommand
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     bwapi_UnitCommand
 * Method:    attack
 * Signature: (Lbwapi/Unit;Lbwapi/PositionOrUnit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_attack__Lbwapi_Unit_2Lbwapi_PositionOrUnit_2
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    attack
 * Signature: (Lbwapi/Unit;Lbwapi/PositionOrUnit;Z)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_attack__Lbwapi_Unit_2Lbwapi_PositionOrUnit_2Z
  (JNIEnv *, jclass, jobject, jobject, jboolean);

/*
 * Class:     bwapi_UnitCommand
 * Method:    build
 * Signature: (Lbwapi/Unit;Lbwapi/TilePosition;Lbwapi/UnitType;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_build
  (JNIEnv *, jclass, jobject, jobject, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    buildAddon
 * Signature: (Lbwapi/Unit;Lbwapi/UnitType;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_buildAddon
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    train
 * Signature: (Lbwapi/Unit;Lbwapi/UnitType;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_train
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    morph
 * Signature: (Lbwapi/Unit;Lbwapi/UnitType;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_morph
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    research
 * Signature: (Lbwapi/Unit;Lbwapi/TechType;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_research
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    upgrade
 * Signature: (Lbwapi/Unit;Lbwapi/UpgradeType;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_upgrade
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    setRallyPoint
 * Signature: (Lbwapi/Unit;Lbwapi/PositionOrUnit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_setRallyPoint
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    move
 * Signature: (Lbwapi/Unit;Lbwapi/Position;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_move__Lbwapi_Unit_2Lbwapi_Position_2
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    move
 * Signature: (Lbwapi/Unit;Lbwapi/Position;Z)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_move__Lbwapi_Unit_2Lbwapi_Position_2Z
  (JNIEnv *, jclass, jobject, jobject, jboolean);

/*
 * Class:     bwapi_UnitCommand
 * Method:    patrol
 * Signature: (Lbwapi/Unit;Lbwapi/Position;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_patrol__Lbwapi_Unit_2Lbwapi_Position_2
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    patrol
 * Signature: (Lbwapi/Unit;Lbwapi/Position;Z)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_patrol__Lbwapi_Unit_2Lbwapi_Position_2Z
  (JNIEnv *, jclass, jobject, jobject, jboolean);

/*
 * Class:     bwapi_UnitCommand
 * Method:    holdPosition
 * Signature: (Lbwapi/Unit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_holdPosition__Lbwapi_Unit_2
  (JNIEnv *, jclass, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    holdPosition
 * Signature: (Lbwapi/Unit;Z)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_holdPosition__Lbwapi_Unit_2Z
  (JNIEnv *, jclass, jobject, jboolean);

/*
 * Class:     bwapi_UnitCommand
 * Method:    stop
 * Signature: (Lbwapi/Unit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_stop__Lbwapi_Unit_2
  (JNIEnv *, jclass, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    stop
 * Signature: (Lbwapi/Unit;Z)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_stop__Lbwapi_Unit_2Z
  (JNIEnv *, jclass, jobject, jboolean);

/*
 * Class:     bwapi_UnitCommand
 * Method:    follow
 * Signature: (Lbwapi/Unit;Lbwapi/Unit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_follow__Lbwapi_Unit_2Lbwapi_Unit_2
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    follow
 * Signature: (Lbwapi/Unit;Lbwapi/Unit;Z)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_follow__Lbwapi_Unit_2Lbwapi_Unit_2Z
  (JNIEnv *, jclass, jobject, jobject, jboolean);

/*
 * Class:     bwapi_UnitCommand
 * Method:    gather
 * Signature: (Lbwapi/Unit;Lbwapi/Unit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_gather__Lbwapi_Unit_2Lbwapi_Unit_2
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    gather
 * Signature: (Lbwapi/Unit;Lbwapi/Unit;Z)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_gather__Lbwapi_Unit_2Lbwapi_Unit_2Z
  (JNIEnv *, jclass, jobject, jobject, jboolean);

/*
 * Class:     bwapi_UnitCommand
 * Method:    returnCargo
 * Signature: (Lbwapi/Unit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_returnCargo__Lbwapi_Unit_2
  (JNIEnv *, jclass, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    returnCargo
 * Signature: (Lbwapi/Unit;Z)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_returnCargo__Lbwapi_Unit_2Z
  (JNIEnv *, jclass, jobject, jboolean);

/*
 * Class:     bwapi_UnitCommand
 * Method:    repair
 * Signature: (Lbwapi/Unit;Lbwapi/Unit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_repair__Lbwapi_Unit_2Lbwapi_Unit_2
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    repair
 * Signature: (Lbwapi/Unit;Lbwapi/Unit;Z)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_repair__Lbwapi_Unit_2Lbwapi_Unit_2Z
  (JNIEnv *, jclass, jobject, jobject, jboolean);

/*
 * Class:     bwapi_UnitCommand
 * Method:    burrow
 * Signature: (Lbwapi/Unit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_burrow
  (JNIEnv *, jclass, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    unburrow
 * Signature: (Lbwapi/Unit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_unburrow
  (JNIEnv *, jclass, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    cloak
 * Signature: (Lbwapi/Unit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_cloak
  (JNIEnv *, jclass, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    decloak
 * Signature: (Lbwapi/Unit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_decloak
  (JNIEnv *, jclass, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    siege
 * Signature: (Lbwapi/Unit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_siege
  (JNIEnv *, jclass, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    unsiege
 * Signature: (Lbwapi/Unit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_unsiege
  (JNIEnv *, jclass, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    lift
 * Signature: (Lbwapi/Unit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_lift
  (JNIEnv *, jclass, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    land
 * Signature: (Lbwapi/Unit;Lbwapi/TilePosition;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_land
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    load
 * Signature: (Lbwapi/Unit;Lbwapi/Unit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_load__Lbwapi_Unit_2Lbwapi_Unit_2
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    load
 * Signature: (Lbwapi/Unit;Lbwapi/Unit;Z)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_load__Lbwapi_Unit_2Lbwapi_Unit_2Z
  (JNIEnv *, jclass, jobject, jobject, jboolean);

/*
 * Class:     bwapi_UnitCommand
 * Method:    unload
 * Signature: (Lbwapi/Unit;Lbwapi/Unit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_unload
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    unloadAll
 * Signature: (Lbwapi/Unit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_unloadAll__Lbwapi_Unit_2
  (JNIEnv *, jclass, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    unloadAll
 * Signature: (Lbwapi/Unit;Z)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_unloadAll__Lbwapi_Unit_2Z
  (JNIEnv *, jclass, jobject, jboolean);

/*
 * Class:     bwapi_UnitCommand
 * Method:    unloadAll
 * Signature: (Lbwapi/Unit;Lbwapi/Position;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_unloadAll__Lbwapi_Unit_2Lbwapi_Position_2
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    unloadAll
 * Signature: (Lbwapi/Unit;Lbwapi/Position;Z)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_unloadAll__Lbwapi_Unit_2Lbwapi_Position_2Z
  (JNIEnv *, jclass, jobject, jobject, jboolean);

/*
 * Class:     bwapi_UnitCommand
 * Method:    rightClick
 * Signature: (Lbwapi/Unit;Lbwapi/PositionOrUnit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_rightClick__Lbwapi_Unit_2Lbwapi_PositionOrUnit_2
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    rightClick
 * Signature: (Lbwapi/Unit;Lbwapi/PositionOrUnit;Z)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_rightClick__Lbwapi_Unit_2Lbwapi_PositionOrUnit_2Z
  (JNIEnv *, jclass, jobject, jobject, jboolean);

/*
 * Class:     bwapi_UnitCommand
 * Method:    haltConstruction
 * Signature: (Lbwapi/Unit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_haltConstruction
  (JNIEnv *, jclass, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    cancelConstruction
 * Signature: (Lbwapi/Unit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_cancelConstruction
  (JNIEnv *, jclass, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    cancelAddon
 * Signature: (Lbwapi/Unit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_cancelAddon
  (JNIEnv *, jclass, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    cancelTrain
 * Signature: (Lbwapi/Unit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_cancelTrain__Lbwapi_Unit_2
  (JNIEnv *, jclass, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    cancelTrain
 * Signature: (Lbwapi/Unit;I)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_cancelTrain__Lbwapi_Unit_2I
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     bwapi_UnitCommand
 * Method:    cancelMorph
 * Signature: (Lbwapi/Unit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_cancelMorph
  (JNIEnv *, jclass, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    cancelResearch
 * Signature: (Lbwapi/Unit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_cancelResearch
  (JNIEnv *, jclass, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    cancelUpgrade
 * Signature: (Lbwapi/Unit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_cancelUpgrade
  (JNIEnv *, jclass, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    useTech
 * Signature: (Lbwapi/Unit;Lbwapi/TechType;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_useTech__Lbwapi_Unit_2Lbwapi_TechType_2
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    useTech
 * Signature: (Lbwapi/Unit;Lbwapi/TechType;Lbwapi/PositionOrUnit;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_useTech__Lbwapi_Unit_2Lbwapi_TechType_2Lbwapi_PositionOrUnit_2
  (JNIEnv *, jclass, jobject, jobject, jobject);

/*
 * Class:     bwapi_UnitCommand
 * Method:    placeCOP
 * Signature: (Lbwapi/Unit;Lbwapi/TilePosition;)Lbwapi/UnitCommand;
 */
JNIEXPORT jobject JNICALL Java_bwapi_UnitCommand_placeCOP
  (JNIEnv *, jclass, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
