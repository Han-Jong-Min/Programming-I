/* 파일명: PA10.18.c

  * 내용: 음원 사이트의 플레이리스트 기능을 구현하려고 한다. 이미 등록된 SONG 구조체 배열이
		  있을 때, 전체 곡 목록을 보여주고 사용자로부터 플레이리스트에 추가할 노래를
		  번호로 선택하게 한다. 플레이리스트에 노래를 추가할 때마다 플레이리스트의 곡 목록과
		  전체 재생 시간이 얼마인지를 출력한다. 플레이리스트에는 최대 5곡만 등록할 수 있다.

  * 작성자: 한종민

  * 날짜: 2025.06.07.

  * 버전: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_SONGS 5
#define TITLE_LEN 50
#define ARTIST_LEN 50

  // SONG 구조체 정의
typedef struct {
    char title[TITLE_LEN];
    char artist[ARTIST_LEN];
    int duration;  // 초 단위
} SONG;

// 함수 선언
void show_all_songs(SONG songs[], int size);
void show_playlist(SONG playlist[], int count);
int add_to_playlist(SONG songs[], SONG playlist[], int* pCount, int index);
void print_time(int total_seconds);

int main() {
    // 전체 곡 목록 초기화
    SONG songs[MAX_SONGS] = {
        {"Love Dive", "IVE", 194},
        {"Dynamite", "BTS", 199},
        {"Attention", "NewJeans", 210},
        {"Ditto", "NewJeans", 186},
        {"Antifragile", "LE SSERAFIM", 200}
    };

    SONG playlist[MAX_SONGS];
    int playlist_count = 0;

    int choice;

    while (playlist_count < MAX_SONGS) {
        show_all_songs(songs, MAX_SONGS);
        printf("플레이리스트에 추가할 곡의 번호를 선택하세요 (1~%d): ", MAX_SONGS);
        scanf("%d", &choice);

        if (choice < 1 || choice > MAX_SONGS) {
            printf("잘못된 번호입니다. 다시 입력하세요.\n");
            continue;
        }

        if (add_to_playlist(songs, playlist, &playlist_count, choice - 1)) {
            printf("\n[현재 플레이리스트]\n");
            show_playlist(playlist, playlist_count);
        }
        else {
            printf("플레이리스트에 추가하지 못했습니다.\n");
        }
    }

    printf("플레이리스트가 가득 찼습니다.\n");

    return 0;
}

// 전체 곡 목록 출력
void show_all_songs(SONG songs[], int size) {
    printf("\n[전체 곡 목록]\n");
    for (int i = 0; i < size; i++) {
        printf("%d. %s - %s (%d초)\n", i + 1, songs[i].title, songs[i].artist, songs[i].duration);
    }
}

// 플레이리스트 출력 및 총 재생 시간
void show_playlist(SONG playlist[], int count) {
    int total_time = 0;

    for (int i = 0; i < count; i++) {
        printf("%d. %s - %s (%d초)\n", i + 1, playlist[i].title, playlist[i].artist, playlist[i].duration);
        total_time += playlist[i].duration;
    }

    printf("총 재생 시간: ");
    print_time(total_time);
    printf("\n");
}

// 플레이리스트에 노래 추가
int add_to_playlist(SONG songs[], SONG playlist[], int* pCount, int index) {
    if (*pCount >= MAX_SONGS) return 0;

    playlist[*pCount] = songs[index];
    (*pCount)++;
    return 1;
}

// 초 단위를 mm:ss 형식으로 출력
void print_time(int total_seconds) {
    int minutes = total_seconds / 60;
    int seconds = total_seconds % 60;
    printf("%d분 %02d초", minutes, seconds);
}
