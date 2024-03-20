namespace TileMapGeneration
{
    public enum TileType // типы игровых тайлов - мне нужно наследование??? 
    {
        RoadStraight,
        RoadCorner,
        RoadFourSides,
        RoadThreeSides,
        RoadEnd,
        Flora, //дерево или просто трава
        Attraction,
        Bench, //скамья, может быть только вдоль дороги
        Houses,
        None // неопределён
    }
}
