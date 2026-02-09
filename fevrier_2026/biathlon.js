/*
	2026 Winter Games Day 3: Biathlon
Given an array of integers, where each value represents the number of targets hit in a single round of a biathlon, return the total penalty distance the athlete must ski.

Each round consists of 5 targets.
Each missed target results in a 150 meter penalty loop.
1. calculatePenaltyDistance([4, 4]) should return 300.
Passed:2. calculatePenaltyDistance([5, 5]) should return 0.
Passed:3. calculatePenaltyDistance([4, 5, 3, 5]) should return 450.
Passed:4. calculatePenaltyDistance([5, 4, 5, 5]) should return 150.
Passed:5. calculatePenaltyDistance([4, 3, 0, 3]) should return 1500.
*/

function calculatePenaltyDistance(rounds) {
  let target = 5;
  let penaltyDistance = 0;
  let penalty ;
  for(let i=0; i<rounds.length;i++){
    penalty = 150*(target-rounds[i]);
    penaltyDistance = penaltyDistance + penalty;
  }
  return penaltyDistance;
}