class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:

        positions_and_velocities = list(zip(position, speed))
        positions_and_velocities.sort(key=lambda x: x[0])
        positions_and_velocities.reverse()
        seconds = []
        for p, velocity in positions_and_velocities:
            distance = target - p
            sec = distance / velocity
            seconds.append(sec)


        number_of_fleets = len(position)
        maximum_seen = seconds[0]

        for i in range(1, number_of_fleets):
            s = seconds[i]
            if s <= maximum_seen:
                number_of_fleets -= 1
            maximum_seen = max(maximum_seen, s)

        
        return number_of_fleets