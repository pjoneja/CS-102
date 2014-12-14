var sheet = SpreadsheetApp.getActiveSheet();

var start = 0
var end = 31  //start and end are indices that represent the range in the address book you want to send to

var subject = "OutLite Beta Announcement" //subject of the email as a string
var content = "Dear Beta Tester,\n \n A few weeks ago, we launched a beta program for the OutLite, a smart outlet that turns off your electronics automagically when you’re not home. \n \n Thank you for supporting us in our endeavor to create a next-generation outlet. By developing our device, we hope to conserve energy, make your lives easier and your homes smarter. \n \n Over the last few weeks, we have been hard at work creating a prototype of the OutLite. We're proud to announce that our proof-of-concept works! \n \n The next step is to test the OutLite in the real world. That’s why we’re calling on you, our valued beta testers. \n \n Please follow this link for a sneak-peek of our work: http://goo.gl/grL3wL \n \n Thank you once again for your continued support, \n \n The OutLite Team \n Pranav Joneja, Krishna Thiyagarajan, David Kim, Ihsan Gunay" //use newline char for new lines


function getCommand() {
  var spreadsheet = sheet.getDataRange();
  var entries = spreadsheet.getValues(); //returns row-by-row array of all entries
  for (var i = start; i < end ; i++) {
    var rows = entries[i]
    var email = rows[1] //rows[1] corresponds to the SECOND column
    Logger.log(email);
    MailApp.sendEmail(email, subject, content);
    }
}