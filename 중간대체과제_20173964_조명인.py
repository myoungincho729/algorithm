
room_small = [[i,'예약가능'] for i in range(9,24)]
room_big = [[i,'예약가능'] for i in range(9,24)]
account = 0

#reservation format : 'name big/small room 12~15'
while True:
    print('SMALL ROOM')
    for i in range(15):
        print(f'{room_small[i][0]}    {room_small[i][1]}')
    print('BIG ROOM')
    for i in range(15):
        print(f'{room_big[i][0]}    {room_big[i][1]}')
    
    cnt = 0
    for i in range(9,24):
        if room_big[i-9][1] != '예약가능' and room_small[i-9][1] != '예약가능':
            cnt += 1
    if cnt == 15:
        print('모든 방의 모든 시간대가 예약된 상태입니다.\n예약 프로그램을 종료합니다.')
        break
    
    
    reserv = input('안녕하세요. 명인스터디룸입니다.\n작은 스터디룸은 4인용이며 가격은 시간당 8000원입니다.\n큰 스터디룸은 8인용이며, 가격은 시간당 12000원입니다.\n고객님의 성함과 예약하시려는 시간대와 방의 종류를 말씀해주세요.\n(명인 big/small room 12~15꼴) : ')
    if reserv == '오늘장사끝':
        break
    res_name, res_size, _, res_time = reserv.split()
    start_time = int(res_time.split('~')[0])
    end_time = int(res_time.split('~')[1])
    times = [i for i in range(start_time, end_time)]
    
    if res_size == 'small':
        count = 0
        for i in times:
            if room_small[i-9][1] != '예약가능':
                count += 1
        if count == 0:
            account += 8000*len(times)
            print('예약이 완료되었습니다.\n')
            for j in times:
                room_small[j-9][1] = res_name
        else:
            print('이미 예약된 시간입니다.\n')
    elif res_size == 'big':
        count = 0
        for i in times:
            if room_big[i-9][1] != '예약가능':
                count += 1
        if count == 0:
            account += 12000*len(times)
            print('예약이 완료되었습니다.\n')
            for j in times:
                room_big[j-9][1] = res_name
        else:
            print('이미 예약된 시간입니다.\n')
print(f'오늘 매출 : {account}원')
if account < 100000:
    print('월세도 안나오겠군...')
elif account >= 100000 and account < 200000:
    print('본전이구만!')
else:
    print('야호! 오늘은 푸근하구만!!')