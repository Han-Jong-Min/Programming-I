/* ���ϸ�: PA10.18.c

  * ����: ���� ����Ʈ�� �÷��̸���Ʈ ����� �����Ϸ��� �Ѵ�. �̹� ��ϵ� SONG ����ü �迭��
		  ���� ��, ��ü �� ����� �����ְ� ����ڷκ��� �÷��̸���Ʈ�� �߰��� �뷡��
		  ��ȣ�� �����ϰ� �Ѵ�. �÷��̸���Ʈ�� �뷡�� �߰��� ������ �÷��̸���Ʈ�� �� ��ϰ�
		  ��ü ��� �ð��� �������� ����Ѵ�. �÷��̸���Ʈ���� �ִ� 5� ����� �� �ִ�.

  * �ۼ���: ������

  * ��¥: 2025.06.07.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_SONGS 5
#define TITLE_LEN 50
#define ARTIST_LEN 50

  // SONG ����ü ����
typedef struct {
    char title[TITLE_LEN];
    char artist[ARTIST_LEN];
    int duration;  // �� ����
} SONG;

// �Լ� ����
void show_all_songs(SONG songs[], int size);
void show_playlist(SONG playlist[], int count);
int add_to_playlist(SONG songs[], SONG playlist[], int* pCount, int index);
void print_time(int total_seconds);

int main() {
    // ��ü �� ��� �ʱ�ȭ
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
        printf("�÷��̸���Ʈ�� �߰��� ���� ��ȣ�� �����ϼ��� (1~%d): ", MAX_SONGS);
        scanf("%d", &choice);

        if (choice < 1 || choice > MAX_SONGS) {
            printf("�߸��� ��ȣ�Դϴ�. �ٽ� �Է��ϼ���.\n");
            continue;
        }

        if (add_to_playlist(songs, playlist, &playlist_count, choice - 1)) {
            printf("\n[���� �÷��̸���Ʈ]\n");
            show_playlist(playlist, playlist_count);
        }
        else {
            printf("�÷��̸���Ʈ�� �߰����� ���߽��ϴ�.\n");
        }
    }

    printf("�÷��̸���Ʈ�� ���� á���ϴ�.\n");

    return 0;
}

// ��ü �� ��� ���
void show_all_songs(SONG songs[], int size) {
    printf("\n[��ü �� ���]\n");
    for (int i = 0; i < size; i++) {
        printf("%d. %s - %s (%d��)\n", i + 1, songs[i].title, songs[i].artist, songs[i].duration);
    }
}

// �÷��̸���Ʈ ��� �� �� ��� �ð�
void show_playlist(SONG playlist[], int count) {
    int total_time = 0;

    for (int i = 0; i < count; i++) {
        printf("%d. %s - %s (%d��)\n", i + 1, playlist[i].title, playlist[i].artist, playlist[i].duration);
        total_time += playlist[i].duration;
    }

    printf("�� ��� �ð�: ");
    print_time(total_time);
    printf("\n");
}

// �÷��̸���Ʈ�� �뷡 �߰�
int add_to_playlist(SONG songs[], SONG playlist[], int* pCount, int index) {
    if (*pCount >= MAX_SONGS) return 0;

    playlist[*pCount] = songs[index];
    (*pCount)++;
    return 1;
}

// �� ������ mm:ss �������� ���
void print_time(int total_seconds) {
    int minutes = total_seconds / 60;
    int seconds = total_seconds % 60;
    printf("%d�� %02d��", minutes, seconds);
}
