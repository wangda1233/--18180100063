import json
import requests

if __name__ == '__main__':

    # Prepare
    uname = "18180100063"
    upswd = "115556667q"
    data_raw = {
        "sfzx": "1",
        "tw": "1",
        "area": "\u9655\u897f\u7701 \u897f\u5b89\u5e02 \u957f\u5b89\u533a",
        "city": "\u897f\u5b89\u5e02",
        "province": "\u9655\u897f\u7701",
        "address": "\u9655\u897f\u7701\u897f\u5b89\u5e02\u957f\u5b89\u533a\u5174\u9686\u8857\u9053\u4e01\u9999\u8def\u897f\u5b89\u7535\u5b50\u79d1\u6280\u5927\u5b66\u957f\u5b89\u6821\u533a",
        "geo_api_info": "{\"type\":\"complete\",\"position\":{\"Q\":34.122666829428,\"R\":108.83004340277802,\"lng\":108.830043,\"lat\":34.122667},\"location_type\":\"html5\",\"message\":\"Get geolocation success.Convert Success.Get address success.\",\"accuracy\":40,\"isConverted\":true,\"status\":1,\"addressComponent\":{\"citycode\":\"029\",\"adcode\":\"610116\",\"businessAreas\":[],\"neighborhoodType\":\"\",\"neighborhood\":\"\",\"building\":\"\",\"buildingType\":\"\",\"street\":\"\u96f7\u7518\u8def\",\"streetNumber\":\"266#\",\"country\":\"\u4e2d\u56fd\",\"province\":\"\u9655\u897f\u7701\",\"city\":\"\u897f\u5b89\u5e02\",\"district\":\"\u957f\u5b89\u533a\",\"township\":\"\u5174\u9686\u8857\u9053\"},\"formattedAddress\":\"\u9655\u897f\u7701\u897f\u5b89\u5e02\u957f\u5b89\u533a\u5174\u9686\u8857\u9053\u4e01\u9999\u8def\u897f\u5b89\u7535\u5b50\u79d1\u6280\u5927\u5b66\u957f\u5b89\u6821\u533a\",\"roads\":[],\"crosses\":[],\"pois\":[],\"info\":\"SUCCESS\"}",
        "sfcyglq": "0",
        "sfyzz": "0",
        "qtqk": "",
        "askforleave": "0"
    }

    # Login
    conn = requests.Session()
    result = conn.post(
        url="https://xxcapp.xidian.edu.cn/uc/wap/login/check",
        data={'username': uname, 'password': upswd}
    )
    if "账号或密码错误" in result.text:
        print('Failed to login.', result.status_code)
        conn.close()
        exit()

    # Post
    result = conn.post(
        url="https://xxcapp.xidian.edu.cn/xisuncov/wap/open-report/save",
        data=data_raw
    )
    if result.status_code != 200:
        print("Network Error.", result.status_code)
        conn.close()
        exit()

    # Result
    rjson = json.loads(result.text)
    print(rjson['m'])
    conn.close()

