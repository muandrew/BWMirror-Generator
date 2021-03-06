package bwta;

import bwta.*;

import java.util.Map;
import java.util.HashMap;
import java.util.Collection;
import java.util.List;
import bwapi.Position;
import bwapi.TilePosition;
import bwapi.Player;

public class BWTA {

    public static native void readMap();

    public static native void analyze();

    public static native List<Region> getRegions();

    public static native List<Chokepoint> getChokepoints();

    public static native List<BaseLocation> getBaseLocations();

    public static native List<BaseLocation> getStartLocations();

    public static native List<Polygon> getUnwalkablePolygons();

    public static native BaseLocation getStartLocation(Player player);

    public static native Region getRegion(int x, int y);

    public static native Region getRegion(TilePosition tileposition);

    public static native Region getRegion(Position position);

    public static native Chokepoint getNearestChokepoint(int x, int y);

    public static native Chokepoint getNearestChokepoint(TilePosition tileposition);

    public static native Chokepoint getNearestChokepoint(Position position);

    public static native BaseLocation getNearestBaseLocation(int x, int y);

    public static native BaseLocation getNearestBaseLocation(TilePosition tileposition);

    public static native BaseLocation getNearestBaseLocation(Position position);

    public static native Polygon getNearestUnwalkablePolygon(int x, int y);

    public static native Polygon getNearestUnwalkablePolygon(TilePosition tileposition);

    public static native Position getNearestUnwalkablePosition(Position position);

    public static native boolean isConnected(int x1, int y1, int x2, int y2);

    public static native boolean isConnected(TilePosition a, TilePosition b);

    public static native double getGroundDistance(TilePosition start, TilePosition end);


}
