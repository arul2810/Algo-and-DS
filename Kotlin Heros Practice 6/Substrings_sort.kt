

import java.util.ArrayList// Created by Arul Prakash Samathuvamani - University of Leeds PGT - hello@arulprakash.dev

// Created for CodeForces Kotlin Heros Practice 6 Contest - Problem D - SubStrings Sort


private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toLong() } // list of ints

fun main(){

    // Main Function

    var no_inputs = readLine()!!.toInt() // Variable for number of inputs

    // Getting the string inputs

    var array_string = ArrayList<String>() // Array of String Inputs
    var string_length = ArrayList<Int>() // Array of String Lengths

    for(i in 0.. no_inputs-1){
        
        var temp = readLine().toString()
        array_string.add(temp) // Reading String Input
        string_length.add(array_string[i].length)

    }

    // Rearranging based on the length of the string


    for(i in 0..no_inputs-1){

        for(j in i .. no_inputs-1){

            if(string_length[i] < string_length[j]){
                var temp = string_length[i]
                string_length[i] = string_length[j]
                string_length[j] = temp
                var temp_string = array_string[i]
                array_string[i] = array_string[j]
                array_string[j] = temp_string
            }

        }

    }

    // Finding if string is substring

    var num_of_substring = 1
    var j = 0

    for ( i in 1..no_inputs-1){

        if(array_string[j].contains(array_string[i])){
            num_of_substring += 1
        }
        j +=1

    }

    if(num_of_substring == no_inputs ){
        println("YES")
        for(j in no_inputs-1 downTo 0){
            println(array_string[j])
        }
    }else{
        println("NO")
    }





}