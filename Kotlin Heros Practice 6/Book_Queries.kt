

import java.util.ArrayList// Created by Arul Prakash Samathuvamani - University of Leeds PGT - hello@arulprakash.dev

// Created for CodeForces Kotlin Heros Practice 6 Contest - Problem E - Book Queries

private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toLong() } // list of ints

fun main(){

// main function


// Getting number of iterations

var iter = readLine()!!.toInt()

// Running for the 'iter' number of iterations

var array = ArrayList<Int>()

for( i in 0 .. iter-1){

var temp = readStrings()

// If the element is to be added to left
if(temp[0] == "L"){

// Adding Value to first position of the array
var value = temp[1].toInt()
array.add(0,value)  

}else if(temp[0] == "R"){ // Element to be added to the right

// Adding value to the last position of the array
var value = temp[1].toInt()
array.add(value)

}else if(temp[0] == "?"){

// Finding minimum number of elements to be removed
var left_ele = 0
var right_ele = 0
var flag = 0

for(j in 0..array.size-1){

if(array[j] != temp[1].toInt() && flag == 0){

left_ele += 1

}else{
 flag = 1
}

}
flag = 0
for(j in array.size-1 downTo 0){

if(array[j] != temp[1].toInt() && flag == 0){
    right_ele += 1
}else{
    flag =1 
}

}

if(left_ele < right_ele){
    println(left_ele)
}else{
    println(right_ele)
}


}


}



}

