package bwapi;

import bwapi.*;

import java.util.Map;
import java.util.HashMap;
import java.util.Collection;
import java.util.List;

/**
This class represents a type of bullet. Note Internally, these are the same IDs as flingy types in Broodwar. See also BulletTypes
*/
/**
Expected type constructor. If the type is an invalid type, then it becomes Types::Unknown. A type is invalid if its value is less than 0 or greater than Types::Unknown. Parameters id The id that corresponds to this type. It is typically an integer value that corresponds to an internal Broodwar type. If the given id is invalid, then it becomes Types::Unknown.
*/
public class BulletType {

    public String toString() {
        return toString_native(pointer);
    }

    public static BulletType Melee;

    public static BulletType Fusion_Cutter_Hit;

    public static BulletType Gauss_Rifle_Hit;

    public static BulletType C_10_Canister_Rifle_Hit;

    public static BulletType Gemini_Missiles;

    public static BulletType Fragmentation_Grenade;

    public static BulletType Longbolt_Missile;

    public static BulletType ATS_ATA_Laser_Battery;

    public static BulletType Burst_Lasers;

    public static BulletType Arclite_Shock_Cannon_Hit;

    public static BulletType EMP_Missile;

    public static BulletType Dual_Photon_Blasters_Hit;

    public static BulletType Particle_Beam_Hit;

    public static BulletType Anti_Matter_Missile;

    public static BulletType Pulse_Cannon;

    public static BulletType Psionic_Shockwave_Hit;

    public static BulletType Psionic_Storm;

    public static BulletType Yamato_Gun;

    public static BulletType Phase_Disruptor;

    public static BulletType STA_STS_Cannon_Overlay;

    public static BulletType Sunken_Colony_Tentacle;

    public static BulletType Acid_Spore;

    public static BulletType Glave_Wurm;

    public static BulletType Seeker_Spores;

    public static BulletType Queen_Spell_Carrier;

    public static BulletType Plague_Cloud;

    public static BulletType Consume;

    public static BulletType Ensnare;

    public static BulletType Needle_Spine_Hit;

    public static BulletType Invisible;

    public static BulletType Optical_Flare_Grenade;

    public static BulletType Halo_Rockets;

    public static BulletType Subterranean_Spines;

    public static BulletType Corrosive_Acid_Shot;

    public static BulletType Neutron_Flare;

    public static BulletType None;

    public static BulletType Unknown;


    private static Map<Long, BulletType> instances = new HashMap<Long, BulletType>();

    private BulletType(long pointer) {
        this.pointer = pointer;
    }

    private static BulletType get(long pointer) {
        if (pointer == 0 ) {
            return null;
        }
        BulletType instance = instances.get(pointer);
        if (instance == null ) {
            instance = new BulletType(pointer);
            instances.put(pointer, instance);
        }
        return instance;
    }

    private long pointer;

    private native String toString_native(long pointer);


}
