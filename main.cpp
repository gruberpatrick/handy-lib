
#include <iostream>
#include <vector>

#include "string_p.h"
#include "file_p.h"
#include "stdio_p.h"



int main()
{

	std::string login_url = "http://localhost/test.php";

	CURL_HANDLE = curl_easy_init();
	curl_easy_setopt(CURL_HANDLE, CURLOPT_USERAGENT, "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Ubuntu Chromium/43.0.2357.130 Chrome/43.0.2357.130 Safari/537.36");
	curl_easy_setopt(CURL_HANDLE, CURLOPT_COOKIE, "apc_user_call_count=1; optimizelyEndUserId=oeu1438883258265r0.5322909746319056; csrftoken=13a885f1be83c18fe1f301965b485a0c; adroll=2b24ab906ca5c83b5559447352586bf8c7bc8b97151328bcb3284959a4c68864f70be90b; optimizelySegments=%7B%221889790939%22%3A%22false%22%2C%221895591009%22%3A%22referral%22%2C%221916050597%22%3A%22none%22%2C%221925630716%22%3A%22gc%22%7D; optimizelyBuckets=%7B%7D; _ga=GA1.3.52232549.1438883259; _gat_UA-3221223-1=1; _attru=null; _attrg=null; _attrb=%2282098559-e9a7-4e98-8a59-2d66d21a1778%22; ajs_user_id=null; ajs_group_id=null; ajs_anonymous_id=%2277db4a31-7889-4cec-a930-db7790a1dfa7%22; kvcd=1438883259842; km_ai=NqtVPsSHh0Sc6mh%2BiewcK3%2BNcxI%3D; km_vs=1; km_lv=1438883260; _ga=GA1.2.52232549.1438883259; _gat_elevioTracker=1; _oklv=1438883259924%2Cj789xT3INugqsBir8S9zJ514DUorOD2D; gs_u_GSN-756619-L=5be114e0b4c9a77cbae8c5c4154e74e8:2567:5000:1438883259943; km_uq=; intercom-id=022a8cb2-7578-415b-ba21-6229912c2702; adroll_mb={%22sessionID%22:%2214f042027c6-6d98d039-4a6f-4246-8603-9ed8fc164a89%22%2C%22sessionReferrer%22:%22https://www.adroll.com/%22%2C%22sessionLandingURL%22:%22https://app.adroll.com/account/signin%22%2C%22lastTimestamp%22:1438883260358%2C%22initialLandingURL%22:%22https://app.adroll.com/account/signin%22%2C%22initialReferrer%22:%22https://www.adroll.com/%22}; _cio=d7b0d477-1078-1e04-0240-7fc2f1fa7891; __utmt=1; __utma=11705579.52232549.1438883259.1438883260.1438883260.1; __utmb=11705579.1.10.1438883260; __utmc=11705579; __utmz=11705579.1438883260.1.1.utmcsr=(direct)|utmccn=(direct)|utmcmd=(none); _okdetect=%7B%22token%22%3A%2214388832605630%22%2C%22proto%22%3A%22https%3A%22%2C%22host%22%3A%22app.adroll.com%22%7D; _mkto_trk=id:964-WFU-818&token:_mch-adroll.com-1438883260603-14287; __ar_v4=YYUC222NNZDM3NSQJJCEEB%3A20150805%3A4%7CMIOLTYI6GNDAVO6IN67BFT%3A20150805%3A4%7C3QOM4TKN4RD7TO3HCPYRKV%3A20150805%3A4; olfsk=olfsk4937917331699282; _ok=6512-816-10-9908; wcsid=j789xT3INugqsBir8S9zJ514DUorOD2D; hblid=z1xsDIuWBx5WYF2P8S9zJ6TpDUrDBOUv; _okbk=cd5%3Davailable%2Ccd4%3Dtrue%2Cvi5%3D0%2Cvi4%3D1438883260783%2Cvi3%3Dactive%2Cvi2%3Dfalse%2Cvi1%3Dfalse%2Ccd8%3Dchat%2Ccd6%3D0%2Ccd3%3Dfalse%2Ccd2%3D0%2Ccd1%3D0%2C; RUM_EPISODES=s=1438883282044&r=https%3A//app.adroll.com/account/signin");
	
	std::cout << fileGetContents(login_url) << std::endl;

	std::cout << REQUEST_HEADER << std::endl;

	return 0;
}