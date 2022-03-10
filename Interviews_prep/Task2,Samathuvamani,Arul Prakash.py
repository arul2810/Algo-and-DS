# Task 2 as part of Sony Interview tasks
#
# Author : Arul Prakash Samathuvamani (APS) | hire@arulprakash.dev
#
# Date: 25th Feb 2022
# ------------------------------------------------------------------

#importing required libraries

import math

def solution ( N, K, M, S):

    
    #sorting the given list in ascending order

    S.sort()

    possible_seats = 0
    previous_seat = 1
    end = N+K+1 # This is added to calculate the possible seats from the last seated person to the end\

    S.append (end) # add the end seat to list


    #iterate through loop to find available seats that can be seated

    for s in S:

        available_seats = s - previous_seat - K  # finding number of seats availble from s provided there is social distancing

        if available_seats > 0:
            possible_seats = possible_seats + math.ceil ( available_seats / (K+1)) #find maximum number of seating possible
        
        #update previous seat with social distancing calculations
        previous_seat = s + K + 1 # This is done to ensure social distancing calculations of previous seat is accounted in next available seat calculations


    print (possible_seats)

#sample test case

N = 10
K = 1
M = 2
S = [2,6]

solution ( N, K, M, S)

N = 15
K = 2
M = 3
S = [11, 6, 14]

solution ( N,K,M,S)