# UENValidation

1) INSTALLING WXWIDGETS
2) 
Install WXWidgets from https://www.wxwidgets.org/

After Installation extract the file

Open the extracted file and navigate to build\msw\wx_vc16.sln

Open wx_vc16.sln and it should bring you to visual studios

Right click on Solution'wx_vc16'(24 out of 24 projects) and select Batch Build

On the pop-up, click on 'select all', then click 'build'. (Repeat this if any error occurs)

Once finish building, close the visual studio window.

Click start button on windows and search for 'edit the system with environment variables'

Then click 'environment variables', under system variables, click 'New..."

Under variable name, enter 'WXWIN' and under variable value, enter the file path where you have extracted.

Click 'ok' and close the window.

2) Opening the project

Open visual studios and click 'create a new project' and click 'windows desktop application' and press next

Enter ur desired project name and click create.

Right click on the project name and select properties

On the top, make sure that configuration drop down box is selected to All Configuration and Platform is selected to Win32.

On the side panel on the left select 'C/C++'

Under Additional Include Directories type '$(WXWIN)\include;$(WXWIN)\include\msvc;' and Apply.

Select Linker from the side panel and under General -> Additional Libraries Directories type in '$(WXWIN)\lib\vc_lib'

Click apply and then click OK.

Delete the files under 'Header Files', 'Resource Files', and 'Source Files'

Right click on the project name and go to add -> class. Enter 'cApp' under class name.

Create another similar class and name it 'cMain' this time.

Copy the code from with the similar file name and run it.

