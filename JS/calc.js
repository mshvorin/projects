<html>
<body>
<div class = title >My Beautiful JS Calculator</div>
<table border="2">
<tr>
<td><input type="button" value="c" onclick="clr()"/> </td>
<td colspan="3"><input type="text" id="textval"/></td>
</tr>
<tr>
<td><input type="button" value="+" onclick="display('+')"/> </td>
<td><input type="button" value="1" onclick="display('1')"/> </td>
<td><input type="button" value="2" onclick="display('2')"/> </td>
<td><input type="button" value="3" onclick="display('3')"/> </td>
</tr>
<tr>
<td><input type="button" value="-" onclick="display('-')"/> </td>
<td><input type="button" value="4" onclick="display('4')"/> </td>
<td><input type="button" value="5" onclick="display('5')"/> </td>
<td><input type="button" value="6" onclick="display('6')"/> </td>
</tr>
<tr>
<td><input type="button" value="*" onclick="display('*')"/> </td>
<td><input type="button" value="7" onclick="display('7')"/> </td>
<td><input type="button" value="8" onclick="display('8')"/> </td>
<td><input type="button" value="9" onclick="display('9')"/> </td>
</tr>
<tr>
<td><input type="button" value="/" onclick="display('/')"/> </td>
<td><input type="button" value="." onclick="display('.')"/> </td>
<td><input type="button" value="0" onclick="display('0')"/> </td>
<td><input type="button" value="=" onclick="evaluate()"/> </td>
</tr>
</table>
</body>
<script>
function display(val)
{
 document.getElementById("textval").value+=val
 }
function evaluate()
{
 let x = document.getElementById("textval").value
 let y = eval(x)
 document.getElementById("textval").value = y
}
function clr()
{
 document.getElementById("textval").value = ""
}
</script>
<style>
input[type="button"]
{
border-radius: 10px;
background-color:blue;
color: white;
border-color:#black ;
width:100%;
}
input[type="text"]
{
border-radius: 10px;
text-align: right;
background-color:black;
color: white;
border-color: white;
width:100%
}
</style>
</html>
