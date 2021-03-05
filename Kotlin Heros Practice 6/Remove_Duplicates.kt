

import java.util.ArrayList

// Created by Arul Prakash Samathuvamani - University of Leeds PGT - hello@arulprakash.dev

// Created for CodeForces Kotlin Heros Practice 6 Contest - Problem A - Remove Duplicates

private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints

fun main(){

// num_var -> Number of Variables in Array

var num_var = readLine()!!.toInt()

var array  = ArrayList(readStrings().map { it.toInt() })

var unique = num_var

// Finding the duplicates and removing left element

for ( i in 0..num_var-1){

 for( j in i+1..num_var-1){
     if(array[i] == array[j]){
         array[i] = 0
        unique -= 1
     }
 }

}

// Printing Output

println(unique)

for(i in 0..num_var-1){

if(array[i] !=0){
    print(array[i])
    print(" ")
}
}
}