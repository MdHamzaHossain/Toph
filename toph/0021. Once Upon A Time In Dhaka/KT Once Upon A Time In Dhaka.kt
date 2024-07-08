fun main(){
    var T = (readln().toInt())
    while(T-- > 0){
        val S = (readln())
        val a = S.split(" ")
        val r:Float =  a[0].toFloat()/2 - a[1].toFloat()/2
        println(r)

    }
}