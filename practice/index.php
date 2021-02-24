<?php
    if(isset($_POST['name']) || isset($_POST['email']) || isset($_POST['username']) || isset($_POST['password']) || isset($_POST['confirmpassword']) || isset($_POST['gender']) || isset($_POST['date']) || isset($_POST['month']) || isset($_POST['year']) || isset($_POST['gender']))
    {
        $name = $_POST['name'];
        $email = $_POST['email'];
        $username = $_POST['username'];
        $password = $_POST['password'];
        $confirmpassword = $_POST['confirmpassword'];
        $gender = $_POST['gender'];
        $date = $_POST['date'];
        $month = $_POST['month'];
        $year = $_POST['year'];
        $gender = $_POST['gender'];

        for($i=0;$i<strlen($name);$i++)
        {
            if(!((ord($name[$i]) >= 97 && ord($name[$i]) <= 122)) && !((ord($name[$i]) >= 65 && ord($name[$i]) <= 90)) && !(ord($name[$i]) == 32))
            {
                echo 'Name can only be alphabetical';break;
            }
        }

        $atSymbol=false;
        $atSymbolLocation = 0;
        $period=false;
        $periodLocation = 0;

        for($i=0;$i<strlen($email);$i++)
        {
            if($email[$i] == '@')
            {
                $atSymbol = true;
                $atSymbolLocation = $i;
            }
            if($email[$i] == '.')
            {
                $period = true;
                $periodLocation = $i;
            }
        }
        if(!($atSymbol == true && $period == true && $atSymbolLocation < $periodLocation))
        {
            echo "Email must contain a '@' and '.'";
        }

        for($i=0;$i<strlen($username);$i++)
        {
            if(!((ord($username[$i]) >= 97 && ord($username[$i]) <= 122)) && !((ord($username[$i]) >= 65 && ord($username[$i]) <= 90))  && !((ord($username[$i]) >= 48 && ord($username[$i]) <= 57)))
            {
                echo 'Username can be only alphanumeric';break;
            }
        }
        
        if($password != $confirmpassword)
        {
            echo 'Passwords do not match!';
        }
        if(strlen($password) < 8)
        {
            echo 'Password must be atleast 8 characters!';
        }
    }
	
?>

 <html>
    <title> Registration Form </title>
</head>
<body>
    <fieldset>
         
             
              
        </table>
    </fieldset>
    
    <fieldset>
	
	
            
            <legend>
                <b>  <h2> Club Member Registration  </h2></b>
            </legend>
            <form action='#' method='POST'>
                <table align=" "> 
                    <tr>
                        <td>
                            Name:
                        </td>
                        <td>
                            <input type="text" name='name'>
                        </td>
                    </tr>
                    <tr>
                         
                        </td>
                    </tr>
					
					
					<tr>
                        <td>
                           User  Name:
                        </td>
                        <td>
                            <input type="text" name='name'>
                        </td>
                    </tr>
                     
					
					
					
					
					
					
					
					
					
                     
                    
                    <tr>
                        <td>
                            Password:
                        </td>
                        <td>
                            <input type="password" name='password'>
                        </td>
                    </tr>
                    <tr>
                        
                        </td>
                    </tr>
                    <tr>
                        <td>
                            Confirm Password:
                        </td>
                        <td>
                            <input type="password" name='confirmpassword'>
                        </td>
                    </tr>
                    <tr>
                         
                        </td>
                    </tr>
					
					
					
					 <tr>
                        <td>
                            Email:
                        </td>
                        <td>
                            <input type="email" name='email'>
                        </td>
                    </tr>
                    <tr>
                         
                        </td>
                    </tr>
					
					
					
                    <tr>
                        <td>
                            Phone Number:
                        </td>
                        <td>
                            <input type="number" name='pn'>
                        </td>
                    </tr>
                    <tr>
                      
                        </td>
                    </tr>
					
					<tr>
                        <td>
                             Address:
                        </td>
                        
                        <td> <textarea cols="25" rows="2"></textarea> </td>
                        
                    </tr>
                    <tr>
                        
                        </td>
                    </tr>
					
					
					  <tr>
                        <td>
                            <fieldset>
                                <legend>
                                    <b> Birth Date</b>
									</td>
									<td>
                                </legend>
                                <input type='number' name=date max=31 min=1>/
                                <input type='number' name=month max=12 min=1>/
                                <input type='number' name=year max=3000 min=1950>
                                <label><i>dd/mm/yyyy</i></label>
                            </fieldset>
                        </td>
                    </tr>
					
					
					
					
					
					
					
                    <tr>
					<td>
                         
                            <fieldset>
                                <legend>
                                    <b>Gender</b>
									</td>
									<td>
                                </legend>
                                <input type='radio' name='gender' value='male'>Male
                                <input type='radio' name='gender' value='female'>Female
                                
                            </fieldset>
                        </td>
                    </tr>
                    <tr>
					
					
					
					
					
					<tr>
                        <td>
                            where did you hear about us?:
                        </td>
                        	<td> 
 
						<input type="checkbox" name="SKILL"> A friend or colleague <br>
						<input type="checkbox"name= "SKILL"> Google <br>
						<input type="checkbox" name="SKILL"> Blog post <br>
						<input type="checkbox" name="SKILL"> New Article <br>
					</td>
					 
                         
                    </tr>
                    <tr>
                      
                    </tr>
					
					<tr>
                        <td>
                            Bio:
                        </td>
                        
                        <td> <textarea cols="25" rows="2"></textarea> </td>
                        < 
                    </tr>
                    <tr>
                       
					
					
					
					
					
                    <tr>
                         <td>
                            <input type='submit' value='Register'>
                             
                        </td>
                    </tr>
                </table>
            </form>
        </fieldset>
    </fieldset>
    <fieldset>
        
</body>
</html>