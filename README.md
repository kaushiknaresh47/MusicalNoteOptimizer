# MUSICAL NOTE OPTIMIZER

Version 0.0 Goal:

The goal of this program is to take in a string of notes and optimize them to the most optimal scale. The most optimal scale is found by a regression like algorithm. Each key is assigned a value,

For instance, assuming the only notes are CDEFGAB, then potential values would be
* C = 1
* D = 2
* E = 3
* F = 4
* G = 5
* A = 6
* B = 7

Now assume that two scales existed,
* scale 1: C F G A
* scale 2: C D E B

Then assuming an input of C D D F B C G A, we calculate the "distance" for each note to the nearest note in each scale, and sum the distances, essentially calculating a value similar to the sum of squares in regression.

The scale with the lower sum of squares is chosen, and the output is returned with the notes switched to the scaled notes.

In this example, the output would be optmized to scale 1 since the sum of squares for scale 1 is 3, and for scale 2 is 6.

Thus, the output would be C C C F A C G A.

As of version 0.0, there is no consideration of musical sense, the algorithm is simply mathematical. 
