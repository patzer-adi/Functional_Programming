divides :: Integral a=> a -> a -> Bool
divides n x = (0 == n `mod` x)
