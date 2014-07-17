<html>
<head>
<title>Thanks For Contacting Us</title>
</head>
<body>
server {
    listen 80;
    client_max_body_size 4G;
 
    access_log /var/sites/webapp/logs/access.maintenance.log;
    error_log /var/sites/webapp/logs/error.maintenance.log info;
 
    server_name api.webapp.com;
 
    # this guy redirects any path to /api.json
    rewrite ^.*$ /api.json last;
 
    location / {
        root /var/sites/webapp/webapp/;
        index api.json /api.json;
 
        # this is the magic
        error_page 405 = $uri;
    }
<?php

 
}
  $recipient = 'vidyaranya.ns@gmail.com';
  $email = $_POST['email'];
  $realName = $_POST['realname'];
  $subject = $_POST['subject'];
  $body = $_POST['body'];
  # We'll make a list of error messages in an array
  $messages = array();
# Allow only reasonable email addresses
if (!preg_match("/([\w\-]+\@[\w\-]+\.[\w\-]+)/",$email)) {
  $emailErr = "Invalid email format"; 
}
# Allow only reasonable real names
if (!preg_match("/^[a-zA-Z0-9 ]*$/",$name)) {
  $nameErr = "Only letters,numbers and white space allowed"; 
}
# CAREFUL: don't allow hackers to sneak line breaks and additional
# headers into the message and trick us into spamming for them!
/*$subject = preg_replace('/\s+/', ' ', $subject);
# Make sure the subject isn't blank afterwards!
if (preg_match('/^\s*$/', $subject)) {
$messages[] = "Please specify a subject for your message.";
}*/

$body = $_POST['body'];
# Make sure the message has a body
if (preg_match('/^\s*$/', $body)) {
$messages[] = "Your message was blank. Did you mean to say " .
"something?"; 
}
  if (count($messages)) {
    # There were problems, so tell the user and
    # don't send the message yet
    foreach ($messages as $message) {
      echo("<p>$message</p>\n");
    }
    echo("<p>Click the back button and correct the problems. " .
      "Then click Send Your Message again.</p>");
  } else {
    # Send the email - we're done
mail($recipient,
      $subject,
      $body,
      "From: $realName <$email>\r\n" .
      "Reply-To: $realName <$email>\r\n"); 
    echo("<p>Your message has been sent. Thank you!</p>\n");
  }
?>
</body>
</html>




<!-- /* NAME :

if (!preg_match("/^[a-zA-Z0-9 ]*$/",$name)) {
  $nameErr = "Only letters,numbers and white space allowed"; 
}

NOTE : i dint get about reasonable punctuations ... i mean .. there is no need of allowing special characters in name checking !!!

E-MAIL :

if (!preg_match("/([\w\-]+\@[\w\-]+\.[\w\-]+)/",$email)) {
  $emailErr = "Invalid email format"; 
}

MESSAGE :

no need of checking !!! -->

