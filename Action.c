Action()
{

	// Changes has been Done - V 0.2
	
	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("AccessDenied", 
		"URL=https://epc2017-itg-beta.msys.parts/Users/Account/AccessDenied?ReturnUrl=%2Fcommerce%2Forders", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Themes/msysEPC/Styles/site.css", "Referer=https://epc2017-itg-beta.msys.parts/Users/Account/AccessDenied?ReturnUrl=%2Fcommerce%2Forders", ENDITEM, 
		"Url=/Modules/Orchard.Resources/scripts/jquery.min.js", "Referer=https://epc2017-itg-beta.msys.parts/Users/Account/AccessDenied?ReturnUrl=%2Fcommerce%2Forders", ENDITEM, 
		"Url=/Modules/Epitomy.WebShop.Core/scripts/epitomy.webshop.core.js", "Referer=https://epc2017-itg-beta.msys.parts/Users/Account/AccessDenied?ReturnUrl=%2Fcommerce%2Forders", ENDITEM, 
		"Url=/Modules/Epitomy.WebShop/scripts/epitomy.webshop.js", "Referer=https://epc2017-itg-beta.msys.parts/Users/Account/AccessDenied?ReturnUrl=%2Fcommerce%2Forders", ENDITEM, 
		"Url=/Themes/EPC2017/styles/fonts/roboto-v16-latin-regular.woff2", "Referer=https://epc2017-itg-beta.msys.parts/Themes/msysEPC/Styles/site.css", ENDITEM, 
		"Url=/Themes/EPC2017/Styles/fonts/fontawesome-webfont.woff2?v=4.7.0", "Referer=https://epc2017-itg-beta.msys.parts/Themes/msysEPC/Styles/site.css", ENDITEM, 
		"Url=/Modules/Orchard.Resources/scripts/jquery-ui.min.js", "Referer=https://epc2017-itg-beta.msys.parts/Users/Account/AccessDenied?ReturnUrl=%2Fcommerce%2Forders", ENDITEM, 
		"Url=/Modules/Epitomy.Steel.Catalogue/scripts/epitomy.steel.catalogue.js", "Referer=https://epc2017-itg-beta.msys.parts/Users/Account/AccessDenied?ReturnUrl=%2Fcommerce%2Forders", ENDITEM, 
		"Url=/Themes/EPC2017/scripts/epitomy.epc2017.webshop.js", "Referer=https://epc2017-itg-beta.msys.parts/Users/Account/AccessDenied?ReturnUrl=%2Fcommerce%2Forders", ENDITEM, 
		"Url=/Modules/TinyMce/scripts/tinymce.min.js", "Referer=https://epc2017-itg-beta.msys.parts/Users/Account/AccessDenied?ReturnUrl=%2Fcommerce%2Forders", ENDITEM, 
		"Url=/Themes/EPC2017/scripts/epitomy.epc2017.js", "Referer=https://epc2017-itg-beta.msys.parts/Users/Account/AccessDenied?ReturnUrl=%2Fcommerce%2Forders", ENDITEM, 
		"Url=/Themes/msysEPC/Content/Images/logo-login.png", "Referer=https://epc2017-itg-beta.msys.parts/Users/Account/AccessDenied?ReturnUrl=%2Fcommerce%2Forders", ENDITEM, 
		"Url=/Themes/EPC2017/scripts/epitomy.epc2017.quotation.js", "Referer=https://epc2017-itg-beta.msys.parts/Users/Account/AccessDenied?ReturnUrl=%2Fcommerce%2Forders", ENDITEM, 
		"Url=/Modules/Epitomy.Quotation/scripts/epitomy.quotation.js", "Referer=https://epc2017-itg-beta.msys.parts/Users/Account/AccessDenied?ReturnUrl=%2Fcommerce%2Forders", ENDITEM, 
		LAST);

	web_add_cookie("_ga=GA1.2.1961796656.1558356569; DOMAIN=epc2017-itg-beta.msys.parts");

	web_add_cookie("_gid=GA1.2.1002093493.1558356569; DOMAIN=epc2017-itg-beta.msys.parts");

	web_add_cookie("_gat=1; DOMAIN=epc2017-itg-beta.msys.parts");

	web_add_header("Origin", 
		"https://epc2017-itg-beta.msys.parts");

	web_submit_data("LogOn", 
		"Action=https://epc2017-itg-beta.msys.parts/Users/Account/LogOn?ReturnUrl=%2Fcommerce%2Forders", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://epc2017-itg-beta.msys.parts/Users/Account/AccessDenied?ReturnUrl=%2Fcommerce%2Forders", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userNameOrEmail", "Value=vignesh", ENDITEM, 
		"Name=password", "Value=Pass123#", ENDITEM, 
		"Name=__RequestVerificationToken", "Value=uyFmdO4Eu6t5Ay2EgEIU8mUio3LaCHQym0EyrwBPyf54vgLvP5LwBztXP357sMYD4pWJ0T3FIvkFg2RVO_knEFdwprvnxGn2NqI3e24cWiA1", ENDITEM, 
		EXTRARES, 
		"Url=/Themes/msysEPC/Content/Images/logo-full.png", "Referer=https://epc2017-itg-beta.msys.parts/commerce/orders", ENDITEM, 
		"Url=/Themes/msysEPC/Content/Images/logo-mobile.png", "Referer=https://epc2017-itg-beta.msys.parts/commerce/orders", ENDITEM, 
		"Url=/cdn-cgi/scripts/5c5dd728/cloudflare-static/email-decode.min.js", "Referer=https://epc2017-itg-beta.msys.parts/commerce/orders", ENDITEM, 
		"Url=/catalog/all/media/F53DEL3FOBRTEMBRG4XW2ZLENFQS62LUF5GTKWSHINMVIQ2NKZNEIQ2YGNKU4QRSK4ZFSUJOOBXGO", "Referer=https://epc2017-itg-beta.msys.parts/commerce/orders", ENDITEM, 
		"Url=/Media/Epc2017Beta/Site/tvs-logo-demo.png", "Referer=https://epc2017-itg-beta.msys.parts/commerce/orders", ENDITEM, 
		"Url=/Themes/EPC2017/styles/fonts/tvssvg.ttf?abj765", "Referer=https://epc2017-itg-beta.msys.parts/Themes/msysEPC/Styles/site.css", ENDITEM, 
		LAST);

	web_url("epc2017-itg-beta.msys.parts", 
		"URL=https://epc2017-itg-beta.msys.parts/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://epc2017-itg-beta.msys.parts/commerce/orders", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Modules/OrchardHUN.Shoutbox/Styles/orchardhun-shoutbox.css", ENDITEM, 
		"Url=/Media/Epc2017Beta/_Profiles/50328b9/d32e028a/soldier-edited.jpg?v=636467672678382756", ENDITEM, 
		"Url=/Media/Epc2017Beta/_Profiles/50328b9/d32e028a/soldier-edited-with%20blue.jpg?v=636467672672133107", ENDITEM, 
		"Url=/Media/Epc2017Beta/_Profiles/50328b9/d32e028a/Receiving.jpg?v=636467672659007731", ENDITEM, 
		"Url=/Media/Epc2017Beta/_Profiles/50328b9/d32e028a/Delivery.jpg?v=636467672666039165", ENDITEM, 
		"Url=/catalog/all/media/F53DEL3FOBRTEMBRG4XW2ZLENFQS62LUF5DDGSCBIVAUCQKBIFAUCQJONJYGO", ENDITEM, 
		"Url=/catalog/all/media/F53DEL3FOBRTEMBRG4XW2ZLENFQS62LUF5FTEUSRJNAUCQKBIFAUCQJONJYGO", ENDITEM, 
		"Url=/catalog/all/media/F53DEL3FOBRTEMBRG4XW2ZLENFQS62LUF5CTGR2BIVAUCQKBIFAUCQJONJYGO", ENDITEM, 
		"Url=/catalog/all/media/F53DEL3FOBRTEMBRG4XW2ZLENFQS62LUF4ZVMQSBJFAUCQKBIFAUCQJONJYGO", ENDITEM, 
		"Url=/catalog/all/media/F53DEL3FOBRTEMBRG4XW2ZLENFQS62LUF5HUGTSRJNAUCQKBIFAUCQJOOBXGO", ENDITEM, 
		"Url=/catalog/all/media/F53DEL3FOBRTEMBRG4XW2ZLENFQS62LUF5DEERCBJFAUCQKBIFAUCQJOOBXGO", ENDITEM, 
		"Url=/Modules/OrchardHUN.Shoutbox/scripts/orchardhun-shoutbox.js", ENDITEM, 
		"Url=/catalog/all/media/F53DEL3FOBRTEMBRG4XW2ZLENFQS62LUF5JUWUSRJNAUCQKBIFAUCQJONJTGSZQ", ENDITEM, 
		"Url=/Themes/EPC2017/Styles/ajax-loader.gif", "Referer=https://epc2017-itg-beta.msys.parts/Themes/msysEPC/Styles/site.css", ENDITEM, 
		"Url=/Themes/EPC2017/Styles/fonts/slick.woff", "Referer=https://epc2017-itg-beta.msys.parts/Themes/msysEPC/Styles/site.css", ENDITEM, 
		LAST);

	web_url("LogOff", 
		"URL=https://epc2017-itg-beta.msys.parts/Users/Account/LogOff", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://epc2017-itg-beta.msys.parts/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}